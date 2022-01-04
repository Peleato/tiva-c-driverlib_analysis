#include <stdbool.h>
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Log.h>
#include <ti/uia/events/UIABenchmark.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Task.h>

#include <xdc/runtime/Types.h>
#include "inc/hw_memmap.h"

/*Comentar o descomentar en función de lo que se quiera probar*/
//#define prueba_ROM
//#define prueba_FLASH
#define prueba_tamanyo

#ifdef prueba_ROM
#define TARGET_IS_TM4C123_RA3
#include "driverlib/rom.h"
#endif

#ifdef prueba_FLASH
#define TARGET_IS_TM4C123_RA3
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#endif

#include "driverlib/adc.h"
#include "driverlib/aes.h"
#include "driverlib/can.h"
#include "driverlib/comp.h"
#include "driverlib/cpu.h"
#include "driverlib/crc.h"
#include "driverlib/des.h"
#include "driverlib/eeprom.h"
#include "driverlib/emac.h"

#include "driverlib/flash.h"
#include "driverlib/interrupt.h"
#include "driverlib/gpio.h"
#include "driverlib/systick.h"
#include "driverlib/sysctl.h"
#include "driverlib/shamd5.h"

/*Variables globales*/
Task_Handle task;

/*Fucniones de prueba*/
#ifdef prueba_ROM
void task_ROM(UArg a0, UArg a1){

    for(;;){
        Log_write1(UIABenchmark_start, (xdc_IArg)"WCET");
        GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2,GPIO_PIN_2) ;
        int i = 0;
        for(i; i < 100000; i++){
               ROM_SysTickPeriodSet(0x1000*i);
               ROM_SysTickEnable();
               ROM_SysTickDisable();
           }
        GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2,0) ;
        Log_write1(UIABenchmark_stop, (xdc_IArg)"WCET");
        Task_sleep(2);
    }
}
#endif

#ifdef prueba_FLASH
void task_FLASH(UArg a0, UArg a1){
    for(;;){
        Log_write1(UIABenchmark_start, (xdc_IArg)"WCET");
        GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2,GPIO_PIN_2) ;
        int i = 0;
        for(i; i < 100000; i++){
               SysTickPeriodSet(0x1000*i);
               SysTickEnable();
               SysTickDisable();
           }
        GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2,0) ;
        Log_write1(UIABenchmark_stop, (xdc_IArg)"WCET");
        Task_sleep(2);
    }
}
#endif

#ifdef prueba_tamanyo
void task_tamanyo(UArg a0, UArg a1){
    for(;;){
        SysTickPeriodSet(0x1000);
        SysTickEnable();
        SysTickDisable();
        SysCtlClockGet();
        //SysCtlClockSet(0x1000);
        //SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
        //GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_2);

    }
}
#endif

int main(){

#ifdef prueba_FLASH
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    ROM_GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_2);
    task = Task_create(task_FLASH, NULL, NULL);
#endif

#ifdef prueba_ROM
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    ROM_GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_2);
    task = Task_create(task_ROM, NULL, NULL);
#endif

#ifdef prueba_tamanyo
    task = Task_create(task_tamanyo, NULL, NULL);
#endif

    BIOS_start();
}
