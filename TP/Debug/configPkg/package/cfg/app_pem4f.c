/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-H28
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/gates/GateMutexPri.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIABenchmark.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>
#include <xdc/runtime/Types.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#ifdef __ti__
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.gates.GateMutexPri INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutexPri_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutexPri_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutexPri_Module__ ti_sysbios_gates_GateMutexPri_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_gates_GateMutexPri_Object__ {
    const ti_sysbios_gates_GateMutexPri_Fxns__ *__fxns;
    volatile xdc_UInt mutexCnt;
    volatile xdc_Int ownerOrigPri;
    volatile ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_gates_GateMutexPri_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutexPri_Object__ obj;
} ti_sysbios_gates_GateMutexPri_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Mailbox_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Mailbox_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* <-- ti_sysbios_knl_Semaphore_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Mailbox_Object__ {
    xdc_runtime_IHeap_Handle heap;
    xdc_SizeT msgSize;
    xdc_UInt numMsgs;
    xdc_Ptr buf;
    xdc_UInt numFreeMsgs;
    __TA_ti_sysbios_knl_Mailbox_Instance_State__allocBuf allocBuf;
    ti_sysbios_knl_Queue_Object__ Object_field_dataQue;
    ti_sysbios_knl_Queue_Object__ Object_field_freeQue;
    ti_sysbios_knl_Semaphore_Object__ Object_field_dataSem;
    ti_sysbios_knl_Semaphore_Object__ Object_field_freeSem;
} ti_sysbios_knl_Mailbox_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Mailbox_Object__ obj;
} ti_sysbios_knl_Mailbox_Object2__;


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UInt32 *buffer;
    xdc_UInt32 *write;
    xdc_UInt32 *end;
    xdc_SizeT maxEventSizeInBits32;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry *curEntry;
    xdc_runtime_LoggerBuf_Entry *endEntry;
    xdc_runtime_LoggerBuf_Entry *readEntry;
    xdc_Bits32 serial;
    xdc_UInt16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module_GateProxy_Module__ xdc_runtime_LoggerBuf_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {&xdc_runtime_ITimestampClient_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {NULL};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    &ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x803c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x802d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutexPri VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutexPri_Module__FXNS__C");
const ti_sysbios_gates_GateMutexPri_Fxns__ ti_sysbios_gates_GateMutexPri_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutexPri_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutexPri_query__E,
    ti_sysbios_gates_GateMutexPri_enter__E,
    ti_sysbios_gates_GateMutexPri_leave__E,
    {
        ti_sysbios_gates_GateMutexPri_Object__create__S,
        ti_sysbios_gates_GateMutexPri_Object__delete__S,
        ti_sysbios_gates_GateMutexPri_Handle__label__S,
        0x802e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x803f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIABenchmark VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__FXNS__C, ".const:ti_uia_events_UIABenchmark_Module__FXNS__C");
const ti_uia_events_UIABenchmark_Fxns__ ti_uia_events_UIABenchmark_Module__FXNS__C = {
    &ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIABenchmark_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x801d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    &ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x801e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    &ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x801f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    &ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__FXNS__C, ".const:xdc_runtime_LoggerBuf_Module__FXNS__C");
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    &xdc_runtime_IFilterLogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        xdc_runtime_LoggerBuf_Object__create__S,
        xdc_runtime_LoggerBuf_Object__delete__S,
        xdc_runtime_LoggerBuf_Handle__label__S,
        0x8009, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    &xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    &xdc_runtime_ITimestampProvider_Interface__BASE__C, /* __base */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8012, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int f_arg0);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restore__E */
extern xdc_Void ti_sysbios_knl_Swi_restore__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.gates.GateMutexPri DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[12288];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[12288] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#else
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#else
#if defined(__GNUC__)
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif
/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A, 128);
#else
#if defined(__GNUC__)
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A, 128);
#else
#if defined(__GNUC__)
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A, 128);
#else
#if defined(__GNUC__)
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A, 128);
#else
#if defined(__GNUC__)
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A, 128);
#else
#if defined(__GNUC__)
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[3300];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A, 128);
#else
#if defined(__GNUC__)
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[3300] __attribute__ ((aligned(128)));
#endif
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Mailbox_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Mailbox_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8704];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[69];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Instance_State_pendQ__O, ".const:ti_sysbios_gates_GateMutexPri_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutexPri_Instance_State_pendQ__O = offsetof(ti_sysbios_gates_GateMutexPri_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_dataQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_freeQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_dataSem);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_freeSem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__,Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = G:/David/UNI/SE2/Practicas/Workspace/TP/Debug/configPkg/package/cfg/app_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32778, &xdc_runtime_Main_Module__root__V.mask},
    {32806, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32811, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
    /*
     * Log the error, now that we've retrieved the error message.
     *
     * We call Log_put here instead of Log_write so that we can log the
     * caller's module id instead of the Error module's id.
     *
     * In logging this event, we'll use the Error module's mask and logger. We
     * don't have a way to reliably access the caller's diags mask and logger.
     * The caller isn't guaranteed to have a mask on the target, even if they
     * are performing logging.
     */
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C

    if (xdc_runtime_Diags_query(xdc_runtime_Log_L_error)) {
        xdc_runtime_Log_put8(xdc_runtime_Log_L_error, mod, (IArg) file, line,
                 (IArg) msg, arg1, arg2, 0, 0, 0);
    }
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0);
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0);
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0);
}
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0);
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0);
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0);
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0);
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0);
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0);
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0);
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0);
}


/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
#ifdef __ti__sect
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[12];
    xdc_runtime_Startup_startModsFxn__C(state, 12);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
#ifdef __ti__sect
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if defined(__clang__) && defined (__ti__)
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    xdc_CString stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}

/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */



/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
xdc_Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((xdc_ULong)
        (125832514));
}

/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_BIOS_registerRTSLock(Void);
extern Void ti_sysbios_family_arm_lm4_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}


/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock(Void)
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0U) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock(Void)
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0U) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I(Void)
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())
        == 0U) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{

#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *(writePtr++) = tstamp.lo;
    *(writePtr++) = tstamp.hi;
#else
    *(writePtr++) = TSCL;
    *(writePtr++) = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline Ptr ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{


    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
                (UInt32)((writePtr - obj->buffer) * 4));

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }
    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);

    *writePtr++ = a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;
    *writePtr++ = a5;
    *writePtr++ = a6;
    *writePtr++ = a7;
    *writePtr++ = a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);

}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    UInt32 eventSizeBits32;
    UInt32 dataSizeBits32;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeBits32;
    SizeT lenAdjustedBits32;
    Int numRecords;
    UInt key;
    UInt32 *writePtr = obj->write;



    if (obj->maxEventSizeInBits32 == 0) {
        return;
    }

    /* Size of header in 32 bit words */
    headerSizeBits32 = 10;

    /* Round up to word boundary */
    lenAdjustedBits32 = (lengthInMAUs + sizeof(Bits32) - 1) / sizeof(Bits32);

    numRecords = (lenAdjustedBits32 / (obj->maxEventSizeInBits32 - headerSizeBits32)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeBits32 + lenAdjustedBits32) > obj->maxEventSizeInBits32) {
            dataSizeBits32 = obj->maxEventSizeInBits32 - headerSizeBits32;
            lenAdjustedBits32 -= dataSizeBits32;
        }
        else {
            dataSizeBits32 = lenAdjustedBits32;
        }
        eventSizeBits32 = dataSizeBits32 + headerSizeBits32;

        key = ti_sysbios_hal_Hwi_disable();
        if ((writePtr + eventSizeBits32) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeBits32) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(writePtr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            ((eventSizeBits32) * 4),
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum, ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);

        *(writePtr++) = ((evt) & 0xffff0000) | mid;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (Bits32)pAdrs;
        *(writePtr++) = (((((dataSizeBits32) * sizeof(Bits32)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, ((dataSizeBits32) * sizeof(Bits32)));
        writePtr = (Ptr)((Char *)writePtr + ((dataSizeBits32) * sizeof(Bits32)));

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = ((eventSizeBits32) * 4);
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((Char *)pAdrs + ((dataSizeBits32) * sizeof(Bits32)));
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;



/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    /* return NULL if size is 0, or alignment is not a power-of-2 */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    Void *retval;

    retval = memalign(alignment, size);

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[216];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackBase = (Void *)__section_begin("CSTACK");
    size_t size = (uint8_t *)__section_end("CSTACK") - (uint8_t *)__section_begin("CSTACK");
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (Void *)size;
}
#endif

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = NULL;

/* A_mustUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0xf42400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_mpeEnabled__C, ".const:ti_sysbios_BIOS_mpeEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0xf42400,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_defaultKernelHeapInstance__C, ".const:ti_sysbios_BIOS_defaultKernelHeapInstance__C");
__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSize__C, ".const:ti_sysbios_BIOS_kernelHeapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSection__C, ".const:ti_sysbios_BIOS_kernelHeapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x3000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)(xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)NULL),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e80,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x8044;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)5293) << 16 | 0U);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)5329) << 16 | 0U);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5368) << 16 | 0U);

/* E_noaltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C = (((xdc_runtime_Error_Id)5510) << 16 | 0U);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* supportsAltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C = 1;

/* enableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)(ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)(ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x8043;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = NULL;

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x23,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x25,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)NULL),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)NULL),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)NULL),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x803b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)7937) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)8007) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)3147) << 16 | 16);

/* E_badIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)4767) << 16 | 0U);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4807) << 16 | 0U);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4855) << 16 | 0U);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4903) << 16 | 0U);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)5108) << 16 | 0U);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)5136) << 16 | 0U);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)5146) << 16 | 0U);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)5162) << 16 | 0U);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)5192) << 16 | 0U);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)5222) << 16 | 0U);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)5239) << 16 | 0U);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)5260) << 16 | 0U);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)5275) << 16 | 0U);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)NULL);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestore__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestore__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestore__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore)(ti_sysbios_knl_Swi_restore__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x803c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2514) << 16 | 16);


/*
 * ======== ti.sysbios.gates.GateMutexPri INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutexPri_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutexPri_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutexPri_Params ti_sysbios_gates_GateMutexPri_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutexPri_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutexPri_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutexPri_Module__ ti_sysbios_gates_GateMutexPri_Module__root__V = {
    {&ti_sysbios_gates_GateMutexPri_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutexPri_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutexPri_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__diagsEnabled ti_sysbios_gates_GateMutexPri_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutexPri_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__diagsIncluded ti_sysbios_gates_GateMutexPri_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutexPri_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__diagsMask ti_sysbios_gates_GateMutexPri_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutexPri_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__gateObj ti_sysbios_gates_GateMutexPri_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutexPri_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__gatePrms ti_sysbios_gates_GateMutexPri_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__id__C, ".const:ti_sysbios_gates_GateMutexPri_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__id ti_sysbios_gates_GateMutexPri_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutexPri_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerDefined ti_sysbios_gates_GateMutexPri_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutexPri_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerObj ti_sysbios_gates_GateMutexPri_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutexPri_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn0 ti_sysbios_gates_GateMutexPri_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutexPri_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn1 ti_sysbios_gates_GateMutexPri_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutexPri_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn2 ti_sysbios_gates_GateMutexPri_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutexPri_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn4 ti_sysbios_gates_GateMutexPri_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutexPri_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn8 ti_sysbios_gates_GateMutexPri_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Object__count__C, ".const:ti_sysbios_gates_GateMutexPri_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__count ti_sysbios_gates_GateMutexPri_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Object__heap__C, ".const:ti_sysbios_gates_GateMutexPri_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__heap ti_sysbios_gates_GateMutexPri_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutexPri_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__sizeof ti_sysbios_gates_GateMutexPri_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutexPri_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Object__table__C, ".const:ti_sysbios_gates_GateMutexPri_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__table ti_sysbios_gates_GateMutexPri_Object__table__C = NULL;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_A_badContext__C, ".const:ti_sysbios_gates_GateMutexPri_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_A_badContext ti_sysbios_gates_GateMutexPri_A_badContext__C = (((xdc_runtime_Assert_Id)2342) << 16 | 16);

/* A_enterTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled__C, ".const:ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled__C = (((xdc_runtime_Assert_Id)2415) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = NULL;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4688) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[12288];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)NULL),  /* next */
            ((xdc_UArg)(0x3000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x803f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3687) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3723) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3768) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5474) << 16 | 0U);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3659) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)NULL);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)NULL);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = NULL;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)6972) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)6994) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)7012) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)774) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)855) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((const CT__ti_sysbios_knl_Event_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Event_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = NULL;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)7044) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)7098) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)925) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)972) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)1011) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)1054) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1117) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__PARAMS__C, ".const:ti_sysbios_knl_Mailbox_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Mailbox_Params ti_sysbios_knl_Mailbox_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Mailbox_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Mailbox_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    0,  /* readerEvent */
    (xdc_UInt)0x1,  /* readerEventId */
    0,  /* writerEvent */
    (xdc_UInt)0x1,  /* writerEventId */
    ((xdc_Ptr)NULL),  /* buf */
    (xdc_UInt)0x0,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V = {
    {&ti_sysbios_knl_Mailbox_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Mailbox_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled ti_sysbios_knl_Mailbox_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded ti_sysbios_knl_Mailbox_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsMask__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsMask ti_sysbios_knl_Mailbox_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Mailbox_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gateObj__C, ".const:ti_sysbios_knl_Mailbox_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gateObj ti_sysbios_knl_Mailbox_Module__gateObj__C = ((const CT__ti_sysbios_knl_Mailbox_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gatePrms__C, ".const:ti_sysbios_knl_Mailbox_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gatePrms ti_sysbios_knl_Mailbox_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Mailbox_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__id__C, ".const:ti_sysbios_knl_Mailbox_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__id ti_sysbios_knl_Mailbox_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerDefined__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerDefined ti_sysbios_knl_Mailbox_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerObj__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerObj ti_sysbios_knl_Mailbox_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__count__C, ".const:ti_sysbios_knl_Mailbox_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__count ti_sysbios_knl_Mailbox_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__heap__C, ".const:ti_sysbios_knl_Mailbox_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__heap ti_sysbios_knl_Mailbox_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__sizeof__C, ".const:ti_sysbios_knl_Mailbox_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__sizeof ti_sysbios_knl_Mailbox_Object__sizeof__C = sizeof(ti_sysbios_knl_Mailbox_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__table__C, ".const:ti_sysbios_knl_Mailbox_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__table ti_sysbios_knl_Mailbox_Object__table__C = NULL;

/* A_invalidBufSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_A_invalidBufSize__C, ".const:ti_sysbios_knl_Mailbox_A_invalidBufSize__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_A_invalidBufSize ti_sysbios_knl_Mailbox_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)1207) << 16 | 16);

/* maxTypeAlign__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_maxTypeAlign__C, ".const:ti_sysbios_knl_Mailbox_maxTypeAlign__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_maxTypeAlign ti_sysbios_knl_Mailbox_maxTypeAlign__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x390;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = NULL;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)7179) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)7209) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1265) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1320) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)1054) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1385) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1439) << 16 | 16);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4270) << 16 | 0U);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)7252) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)7299) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)7317) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1533) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1590) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)NULL),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)NULL),  /* domain */
        (xdc_UInt32)0x0,  /* checkValue */
        ((xdc_Ptr)NULL),  /* tls */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)7357) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)7425) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)7470) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)7511) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)7543) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)7591) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)7647) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)7678) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)7761) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)7847) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4349) << 16 | 0U);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4392) << 16 | 0U);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4443) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4474) << 16 | 0U);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4547) << 16 | 0U);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4614) << 16 | 0U);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1639) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1708) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1762) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1816) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1879) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1929) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1964) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1997) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)2081) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#elif defined(__clang__)
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data:ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* swiEnv */
    ((void*)0),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x0,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((const CT__ti_sysbios_utils_Load_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((const CT__ti_sysbios_utils_Load_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((const CT__ti_sysbios_utils_Load_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8041;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((const CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = NULL;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)8025) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)8042) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)8060) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)8078) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((const CT__ti_sysbios_utils_Load_postUpdate)NULL);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 0;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 0;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((const CT__ti_uia_events_DvtTypes_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((const CT__ti_uia_events_DvtTypes_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((const CT__ti_uia_events_DvtTypes_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = NULL;


/*
 * ======== ti.uia.events.UIABenchmark INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsEnabled__C, ".const:ti_uia_events_UIABenchmark_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsEnabled ti_uia_events_UIABenchmark_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsIncluded__C, ".const:ti_uia_events_UIABenchmark_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsIncluded ti_uia_events_UIABenchmark_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsMask__C, ".const:ti_uia_events_UIABenchmark_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsMask ti_uia_events_UIABenchmark_Module__diagsMask__C = ((const CT__ti_uia_events_UIABenchmark_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gateObj__C, ".const:ti_uia_events_UIABenchmark_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gateObj ti_uia_events_UIABenchmark_Module__gateObj__C = ((const CT__ti_uia_events_UIABenchmark_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gatePrms__C, ".const:ti_uia_events_UIABenchmark_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gatePrms ti_uia_events_UIABenchmark_Module__gatePrms__C = ((const CT__ti_uia_events_UIABenchmark_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__id__C, ".const:ti_uia_events_UIABenchmark_Module__id__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__id ti_uia_events_UIABenchmark_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerDefined__C, ".const:ti_uia_events_UIABenchmark_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerDefined ti_uia_events_UIABenchmark_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerObj__C, ".const:ti_uia_events_UIABenchmark_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerObj ti_uia_events_UIABenchmark_Module__loggerObj__C = ((const CT__ti_uia_events_UIABenchmark_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn0__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn0 ti_uia_events_UIABenchmark_Module__loggerFxn0__C = ((const CT__ti_uia_events_UIABenchmark_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn1__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn1 ti_uia_events_UIABenchmark_Module__loggerFxn1__C = ((const CT__ti_uia_events_UIABenchmark_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn2__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn2 ti_uia_events_UIABenchmark_Module__loggerFxn2__C = ((const CT__ti_uia_events_UIABenchmark_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn4__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn4 ti_uia_events_UIABenchmark_Module__loggerFxn4__C = ((const CT__ti_uia_events_UIABenchmark_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn8__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn8 ti_uia_events_UIABenchmark_Module__loggerFxn8__C = ((const CT__ti_uia_events_UIABenchmark_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__count__C, ".const:ti_uia_events_UIABenchmark_Object__count__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__count ti_uia_events_UIABenchmark_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__heap__C, ".const:ti_uia_events_UIABenchmark_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__heap ti_uia_events_UIABenchmark_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__sizeof__C, ".const:ti_uia_events_UIABenchmark_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__sizeof ti_uia_events_UIABenchmark_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__table__C, ".const:ti_uia_events_UIABenchmark_Object__table__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__table ti_uia_events_UIABenchmark_Object__table__C = NULL;

/* start__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_start__C, ".const:ti_uia_events_UIABenchmark_start__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_start ti_uia_events_UIABenchmark_start__C = (((xdc_runtime_Log_Event)5728) << 16 | 32768);

/* stop__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stop__C, ".const:ti_uia_events_UIABenchmark_stop__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stop ti_uia_events_UIABenchmark_stop__C = (((xdc_runtime_Log_Event)5740) << 16 | 32768);

/* startInstance__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstance__C, ".const:ti_uia_events_UIABenchmark_startInstance__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstance ti_uia_events_UIABenchmark_startInstance__C = (((xdc_runtime_Log_Event)5751) << 16 | 32768);

/* stopInstance__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstance__C, ".const:ti_uia_events_UIABenchmark_stopInstance__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstance ti_uia_events_UIABenchmark_stopInstance__C = (((xdc_runtime_Log_Event)5771) << 16 | 32768);

/* startInstanceWithAdrs__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithAdrs__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithAdrs ti_uia_events_UIABenchmark_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)5790) << 16 | 32768);

/* stopInstanceWithAdrs__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithAdrs ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)5817) << 16 | 32768);

/* startInstanceWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithStr__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithStr ti_uia_events_UIABenchmark_startInstanceWithStr__C = (((xdc_runtime_Log_Event)5843) << 16 | 32768);

/* stopInstanceWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithStr__C");
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithStr ti_uia_events_UIABenchmark_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)5869) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((const CT__ti_uia_events_UIAErr_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((const CT__ti_uia_events_UIAErr_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((const CT__ti_uia_events_UIAErr_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((const CT__ti_uia_events_UIAErr_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = NULL;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)5894) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)5916) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)5943) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)5968) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)5998) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6026) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6059) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6090) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6126) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6151) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6185) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6223) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6259) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6305) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6339) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6371) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6405) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)6451) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6516) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6555) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6599) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6636) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6685) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6721) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((const CT__ti_uia_events_UIAEvt_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((const CT__ti_uia_events_UIAEvt_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((const CT__ti_uia_events_UIAEvt_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = NULL;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)6784) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)6808) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)6837) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)6859) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)6886) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)6909) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)6938) << 16 | 32768);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[3300];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x200,  /* bufSize */
        ((xdc_UInt32*)NULL),  /* buffer */
        ((xdc_UInt32*)NULL),  /* write */
        ((xdc_UInt32*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)NULL),  /* buffer */
        ((xdc_UInt32*)NULL),  /* write */
        ((xdc_UInt32*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0xce4,  /* bufSize */
        ((xdc_UInt32*)NULL),  /* buffer */
        ((xdc_UInt32*)NULL),  /* write */
        ((xdc_UInt32*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_loggers_LoggerStopMode_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#elif defined(__clang__)
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data:ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)7917) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)4098) << 16 | 0U);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((const CT__ti_uia_runtime_EventHdr_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((const CT__ti_uia_runtime_EventHdr_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((const CT__ti_uia_runtime_EventHdr_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = NULL;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_runtime_QueueDescriptor_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#elif defined(__clang__)
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data:ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)NULL),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt32)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = NULL;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)4030) << 16 | 0U);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)4052) << 16 | 0U);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)4056) << 16 | 0U);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)4090) << 16 | 0U);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5552) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5576) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5597) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5616) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5633) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5647) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5663) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5670) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5681) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5691) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5710) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".const:xdc_runtime_LoggerBuf_Object__PARAMS__C");
__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_UInt)0x40,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Module__root__V */
xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V = {
    {&xdc_runtime_LoggerBuf_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerBuf_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1,  /* serial */
        (xdc_UInt16)0x10,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_LoggerBuf_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data_xdc_runtime_LoggerBuf_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data:xdc_runtime_LoggerBuf_Module__state__V")));
#endif
#endif
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsEnabled__C, ".const:xdc_runtime_LoggerBuf_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsIncluded__C, ".const:xdc_runtime_LoggerBuf_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsMask__C, ".const:xdc_runtime_LoggerBuf_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((const CT__xdc_runtime_LoggerBuf_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gateObj__C, ".const:xdc_runtime_LoggerBuf_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gatePrms__C, ".const:xdc_runtime_LoggerBuf_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((const CT__xdc_runtime_LoggerBuf_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__id__C, ".const:xdc_runtime_LoggerBuf_Module__id__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerDefined__C, ".const:xdc_runtime_LoggerBuf_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerObj__C, ".const:xdc_runtime_LoggerBuf_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn0__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn1__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn2__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn4__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn8__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__count__C, ".const:xdc_runtime_LoggerBuf_Object__count__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__heap__C, ".const:xdc_runtime_LoggerBuf_Object__heap__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__sizeof__C, ".const:xdc_runtime_LoggerBuf_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__table__C, ".const:xdc_runtime_LoggerBuf_Object__table__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_filterByLevel__C, ".const:xdc_runtime_LoggerBuf_filterByLevel__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_E_badLevel__C, ".const:xdc_runtime_LoggerBuf_E_badLevel__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)4098) << 16 | 0U);

/* enableFlush__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_enableFlush__C, ".const:xdc_runtime_LoggerBuf_enableFlush__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_statusLogger__C, ".const:xdc_runtime_LoggerBuf_statusLogger__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level1Mask__C, ".const:xdc_runtime_LoggerBuf_level1Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level2Mask__C, ".const:xdc_runtime_LoggerBuf_level2Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level3Mask__C, ".const:xdc_runtime_LoggerBuf_level3Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level4Mask__C, ".const:xdc_runtime_LoggerBuf_level4Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    49024,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4010;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)NULL),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Mailbox_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [11] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    1,  /* [10] */
    0,  /* [11] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns const  *)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [2] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#elif defined(__clang__)
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8704] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x6e,  /* [561] */
    (xdc_Char)0x75,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x6c,  /* [564] */
    (xdc_Char)0x50,  /* [565] */
    (xdc_Char)0x6f,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x72,  /* [571] */
    (xdc_Char)0x3a,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x50,  /* [574] */
    (xdc_Char)0x6f,  /* [575] */
    (xdc_Char)0x69,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x74,  /* [578] */
    (xdc_Char)0x65,  /* [579] */
    (xdc_Char)0x72,  /* [580] */
    (xdc_Char)0x20,  /* [581] */
    (xdc_Char)0x69,  /* [582] */
    (xdc_Char)0x73,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x6e,  /* [585] */
    (xdc_Char)0x75,  /* [586] */
    (xdc_Char)0x6c,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x0,  /* [589] */
    (xdc_Char)0x41,  /* [590] */
    (xdc_Char)0x5f,  /* [591] */
    (xdc_Char)0x69,  /* [592] */
    (xdc_Char)0x6e,  /* [593] */
    (xdc_Char)0x76,  /* [594] */
    (xdc_Char)0x61,  /* [595] */
    (xdc_Char)0x6c,  /* [596] */
    (xdc_Char)0x69,  /* [597] */
    (xdc_Char)0x64,  /* [598] */
    (xdc_Char)0x52,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x67,  /* [601] */
    (xdc_Char)0x69,  /* [602] */
    (xdc_Char)0x6f,  /* [603] */
    (xdc_Char)0x6e,  /* [604] */
    (xdc_Char)0x49,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x3a,  /* [607] */
    (xdc_Char)0x20,  /* [608] */
    (xdc_Char)0x4d,  /* [609] */
    (xdc_Char)0x50,  /* [610] */
    (xdc_Char)0x55,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x52,  /* [613] */
    (xdc_Char)0x65,  /* [614] */
    (xdc_Char)0x67,  /* [615] */
    (xdc_Char)0x69,  /* [616] */
    (xdc_Char)0x6f,  /* [617] */
    (xdc_Char)0x6e,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x6e,  /* [620] */
    (xdc_Char)0x75,  /* [621] */
    (xdc_Char)0x6d,  /* [622] */
    (xdc_Char)0x62,  /* [623] */
    (xdc_Char)0x65,  /* [624] */
    (xdc_Char)0x72,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x70,  /* [627] */
    (xdc_Char)0x61,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x65,  /* [631] */
    (xdc_Char)0x64,  /* [632] */
    (xdc_Char)0x20,  /* [633] */
    (xdc_Char)0x69,  /* [634] */
    (xdc_Char)0x73,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x6e,  /* [638] */
    (xdc_Char)0x76,  /* [639] */
    (xdc_Char)0x61,  /* [640] */
    (xdc_Char)0x6c,  /* [641] */
    (xdc_Char)0x69,  /* [642] */
    (xdc_Char)0x64,  /* [643] */
    (xdc_Char)0x2e,  /* [644] */
    (xdc_Char)0x0,  /* [645] */
    (xdc_Char)0x41,  /* [646] */
    (xdc_Char)0x5f,  /* [647] */
    (xdc_Char)0x75,  /* [648] */
    (xdc_Char)0x6e,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x6c,  /* [651] */
    (xdc_Char)0x69,  /* [652] */
    (xdc_Char)0x67,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x65,  /* [655] */
    (xdc_Char)0x64,  /* [656] */
    (xdc_Char)0x42,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x73,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x41,  /* [661] */
    (xdc_Char)0x64,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x72,  /* [664] */
    (xdc_Char)0x3a,  /* [665] */
    (xdc_Char)0x20,  /* [666] */
    (xdc_Char)0x4d,  /* [667] */
    (xdc_Char)0x50,  /* [668] */
    (xdc_Char)0x55,  /* [669] */
    (xdc_Char)0x20,  /* [670] */
    (xdc_Char)0x72,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x67,  /* [673] */
    (xdc_Char)0x69,  /* [674] */
    (xdc_Char)0x6f,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x62,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x73,  /* [680] */
    (xdc_Char)0x65,  /* [681] */
    (xdc_Char)0x20,  /* [682] */
    (xdc_Char)0x61,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x64,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x65,  /* [687] */
    (xdc_Char)0x73,  /* [688] */
    (xdc_Char)0x73,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x6e,  /* [691] */
    (xdc_Char)0x6f,  /* [692] */
    (xdc_Char)0x74,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x61,  /* [695] */
    (xdc_Char)0x6c,  /* [696] */
    (xdc_Char)0x69,  /* [697] */
    (xdc_Char)0x67,  /* [698] */
    (xdc_Char)0x6e,  /* [699] */
    (xdc_Char)0x65,  /* [700] */
    (xdc_Char)0x64,  /* [701] */
    (xdc_Char)0x20,  /* [702] */
    (xdc_Char)0x74,  /* [703] */
    (xdc_Char)0x6f,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x73,  /* [706] */
    (xdc_Char)0x69,  /* [707] */
    (xdc_Char)0x7a,  /* [708] */
    (xdc_Char)0x65,  /* [709] */
    (xdc_Char)0x2e,  /* [710] */
    (xdc_Char)0x0,  /* [711] */
    (xdc_Char)0x41,  /* [712] */
    (xdc_Char)0x5f,  /* [713] */
    (xdc_Char)0x72,  /* [714] */
    (xdc_Char)0x65,  /* [715] */
    (xdc_Char)0x73,  /* [716] */
    (xdc_Char)0x65,  /* [717] */
    (xdc_Char)0x72,  /* [718] */
    (xdc_Char)0x76,  /* [719] */
    (xdc_Char)0x65,  /* [720] */
    (xdc_Char)0x64,  /* [721] */
    (xdc_Char)0x41,  /* [722] */
    (xdc_Char)0x74,  /* [723] */
    (xdc_Char)0x74,  /* [724] */
    (xdc_Char)0x72,  /* [725] */
    (xdc_Char)0x73,  /* [726] */
    (xdc_Char)0x3a,  /* [727] */
    (xdc_Char)0x20,  /* [728] */
    (xdc_Char)0x4d,  /* [729] */
    (xdc_Char)0x50,  /* [730] */
    (xdc_Char)0x55,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x72,  /* [733] */
    (xdc_Char)0x65,  /* [734] */
    (xdc_Char)0x67,  /* [735] */
    (xdc_Char)0x69,  /* [736] */
    (xdc_Char)0x6f,  /* [737] */
    (xdc_Char)0x6e,  /* [738] */
    (xdc_Char)0x20,  /* [739] */
    (xdc_Char)0x61,  /* [740] */
    (xdc_Char)0x74,  /* [741] */
    (xdc_Char)0x74,  /* [742] */
    (xdc_Char)0x72,  /* [743] */
    (xdc_Char)0x69,  /* [744] */
    (xdc_Char)0x62,  /* [745] */
    (xdc_Char)0x75,  /* [746] */
    (xdc_Char)0x74,  /* [747] */
    (xdc_Char)0x65,  /* [748] */
    (xdc_Char)0x73,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x73,  /* [751] */
    (xdc_Char)0x65,  /* [752] */
    (xdc_Char)0x74,  /* [753] */
    (xdc_Char)0x20,  /* [754] */
    (xdc_Char)0x74,  /* [755] */
    (xdc_Char)0x6f,  /* [756] */
    (xdc_Char)0x20,  /* [757] */
    (xdc_Char)0x72,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x73,  /* [760] */
    (xdc_Char)0x65,  /* [761] */
    (xdc_Char)0x72,  /* [762] */
    (xdc_Char)0x76,  /* [763] */
    (xdc_Char)0x65,  /* [764] */
    (xdc_Char)0x64,  /* [765] */
    (xdc_Char)0x20,  /* [766] */
    (xdc_Char)0x76,  /* [767] */
    (xdc_Char)0x61,  /* [768] */
    (xdc_Char)0x6c,  /* [769] */
    (xdc_Char)0x75,  /* [770] */
    (xdc_Char)0x65,  /* [771] */
    (xdc_Char)0x2e,  /* [772] */
    (xdc_Char)0x0,  /* [773] */
    (xdc_Char)0x41,  /* [774] */
    (xdc_Char)0x5f,  /* [775] */
    (xdc_Char)0x63,  /* [776] */
    (xdc_Char)0x6c,  /* [777] */
    (xdc_Char)0x6f,  /* [778] */
    (xdc_Char)0x63,  /* [779] */
    (xdc_Char)0x6b,  /* [780] */
    (xdc_Char)0x44,  /* [781] */
    (xdc_Char)0x69,  /* [782] */
    (xdc_Char)0x73,  /* [783] */
    (xdc_Char)0x61,  /* [784] */
    (xdc_Char)0x62,  /* [785] */
    (xdc_Char)0x6c,  /* [786] */
    (xdc_Char)0x65,  /* [787] */
    (xdc_Char)0x64,  /* [788] */
    (xdc_Char)0x3a,  /* [789] */
    (xdc_Char)0x20,  /* [790] */
    (xdc_Char)0x43,  /* [791] */
    (xdc_Char)0x61,  /* [792] */
    (xdc_Char)0x6e,  /* [793] */
    (xdc_Char)0x6e,  /* [794] */
    (xdc_Char)0x6f,  /* [795] */
    (xdc_Char)0x74,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x63,  /* [798] */
    (xdc_Char)0x72,  /* [799] */
    (xdc_Char)0x65,  /* [800] */
    (xdc_Char)0x61,  /* [801] */
    (xdc_Char)0x74,  /* [802] */
    (xdc_Char)0x65,  /* [803] */
    (xdc_Char)0x20,  /* [804] */
    (xdc_Char)0x61,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x63,  /* [807] */
    (xdc_Char)0x6c,  /* [808] */
    (xdc_Char)0x6f,  /* [809] */
    (xdc_Char)0x63,  /* [810] */
    (xdc_Char)0x6b,  /* [811] */
    (xdc_Char)0x20,  /* [812] */
    (xdc_Char)0x69,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x73,  /* [815] */
    (xdc_Char)0x74,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x6e,  /* [818] */
    (xdc_Char)0x63,  /* [819] */
    (xdc_Char)0x65,  /* [820] */
    (xdc_Char)0x20,  /* [821] */
    (xdc_Char)0x77,  /* [822] */
    (xdc_Char)0x68,  /* [823] */
    (xdc_Char)0x65,  /* [824] */
    (xdc_Char)0x6e,  /* [825] */
    (xdc_Char)0x20,  /* [826] */
    (xdc_Char)0x42,  /* [827] */
    (xdc_Char)0x49,  /* [828] */
    (xdc_Char)0x4f,  /* [829] */
    (xdc_Char)0x53,  /* [830] */
    (xdc_Char)0x2e,  /* [831] */
    (xdc_Char)0x63,  /* [832] */
    (xdc_Char)0x6c,  /* [833] */
    (xdc_Char)0x6f,  /* [834] */
    (xdc_Char)0x63,  /* [835] */
    (xdc_Char)0x6b,  /* [836] */
    (xdc_Char)0x45,  /* [837] */
    (xdc_Char)0x6e,  /* [838] */
    (xdc_Char)0x61,  /* [839] */
    (xdc_Char)0x62,  /* [840] */
    (xdc_Char)0x6c,  /* [841] */
    (xdc_Char)0x65,  /* [842] */
    (xdc_Char)0x64,  /* [843] */
    (xdc_Char)0x20,  /* [844] */
    (xdc_Char)0x69,  /* [845] */
    (xdc_Char)0x73,  /* [846] */
    (xdc_Char)0x20,  /* [847] */
    (xdc_Char)0x66,  /* [848] */
    (xdc_Char)0x61,  /* [849] */
    (xdc_Char)0x6c,  /* [850] */
    (xdc_Char)0x73,  /* [851] */
    (xdc_Char)0x65,  /* [852] */
    (xdc_Char)0x2e,  /* [853] */
    (xdc_Char)0x0,  /* [854] */
    (xdc_Char)0x41,  /* [855] */
    (xdc_Char)0x5f,  /* [856] */
    (xdc_Char)0x62,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x64,  /* [859] */
    (xdc_Char)0x54,  /* [860] */
    (xdc_Char)0x68,  /* [861] */
    (xdc_Char)0x72,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x61,  /* [864] */
    (xdc_Char)0x64,  /* [865] */
    (xdc_Char)0x54,  /* [866] */
    (xdc_Char)0x79,  /* [867] */
    (xdc_Char)0x70,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x3a,  /* [870] */
    (xdc_Char)0x20,  /* [871] */
    (xdc_Char)0x43,  /* [872] */
    (xdc_Char)0x61,  /* [873] */
    (xdc_Char)0x6e,  /* [874] */
    (xdc_Char)0x6e,  /* [875] */
    (xdc_Char)0x6f,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x63,  /* [879] */
    (xdc_Char)0x72,  /* [880] */
    (xdc_Char)0x65,  /* [881] */
    (xdc_Char)0x61,  /* [882] */
    (xdc_Char)0x74,  /* [883] */
    (xdc_Char)0x65,  /* [884] */
    (xdc_Char)0x2f,  /* [885] */
    (xdc_Char)0x64,  /* [886] */
    (xdc_Char)0x65,  /* [887] */
    (xdc_Char)0x6c,  /* [888] */
    (xdc_Char)0x65,  /* [889] */
    (xdc_Char)0x74,  /* [890] */
    (xdc_Char)0x65,  /* [891] */
    (xdc_Char)0x20,  /* [892] */
    (xdc_Char)0x61,  /* [893] */
    (xdc_Char)0x20,  /* [894] */
    (xdc_Char)0x43,  /* [895] */
    (xdc_Char)0x6c,  /* [896] */
    (xdc_Char)0x6f,  /* [897] */
    (xdc_Char)0x63,  /* [898] */
    (xdc_Char)0x6b,  /* [899] */
    (xdc_Char)0x20,  /* [900] */
    (xdc_Char)0x66,  /* [901] */
    (xdc_Char)0x72,  /* [902] */
    (xdc_Char)0x6f,  /* [903] */
    (xdc_Char)0x6d,  /* [904] */
    (xdc_Char)0x20,  /* [905] */
    (xdc_Char)0x48,  /* [906] */
    (xdc_Char)0x77,  /* [907] */
    (xdc_Char)0x69,  /* [908] */
    (xdc_Char)0x20,  /* [909] */
    (xdc_Char)0x6f,  /* [910] */
    (xdc_Char)0x72,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x53,  /* [913] */
    (xdc_Char)0x77,  /* [914] */
    (xdc_Char)0x69,  /* [915] */
    (xdc_Char)0x20,  /* [916] */
    (xdc_Char)0x74,  /* [917] */
    (xdc_Char)0x68,  /* [918] */
    (xdc_Char)0x72,  /* [919] */
    (xdc_Char)0x65,  /* [920] */
    (xdc_Char)0x61,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x2e,  /* [923] */
    (xdc_Char)0x0,  /* [924] */
    (xdc_Char)0x41,  /* [925] */
    (xdc_Char)0x5f,  /* [926] */
    (xdc_Char)0x6e,  /* [927] */
    (xdc_Char)0x75,  /* [928] */
    (xdc_Char)0x6c,  /* [929] */
    (xdc_Char)0x6c,  /* [930] */
    (xdc_Char)0x45,  /* [931] */
    (xdc_Char)0x76,  /* [932] */
    (xdc_Char)0x65,  /* [933] */
    (xdc_Char)0x6e,  /* [934] */
    (xdc_Char)0x74,  /* [935] */
    (xdc_Char)0x4d,  /* [936] */
    (xdc_Char)0x61,  /* [937] */
    (xdc_Char)0x73,  /* [938] */
    (xdc_Char)0x6b,  /* [939] */
    (xdc_Char)0x73,  /* [940] */
    (xdc_Char)0x3a,  /* [941] */
    (xdc_Char)0x20,  /* [942] */
    (xdc_Char)0x6f,  /* [943] */
    (xdc_Char)0x72,  /* [944] */
    (xdc_Char)0x4d,  /* [945] */
    (xdc_Char)0x61,  /* [946] */
    (xdc_Char)0x73,  /* [947] */
    (xdc_Char)0x6b,  /* [948] */
    (xdc_Char)0x20,  /* [949] */
    (xdc_Char)0x61,  /* [950] */
    (xdc_Char)0x6e,  /* [951] */
    (xdc_Char)0x64,  /* [952] */
    (xdc_Char)0x20,  /* [953] */
    (xdc_Char)0x61,  /* [954] */
    (xdc_Char)0x6e,  /* [955] */
    (xdc_Char)0x64,  /* [956] */
    (xdc_Char)0x4d,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x6b,  /* [960] */
    (xdc_Char)0x20,  /* [961] */
    (xdc_Char)0x61,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x65,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x6e,  /* [966] */
    (xdc_Char)0x75,  /* [967] */
    (xdc_Char)0x6c,  /* [968] */
    (xdc_Char)0x6c,  /* [969] */
    (xdc_Char)0x2e,  /* [970] */
    (xdc_Char)0x0,  /* [971] */
    (xdc_Char)0x41,  /* [972] */
    (xdc_Char)0x5f,  /* [973] */
    (xdc_Char)0x6e,  /* [974] */
    (xdc_Char)0x75,  /* [975] */
    (xdc_Char)0x6c,  /* [976] */
    (xdc_Char)0x6c,  /* [977] */
    (xdc_Char)0x45,  /* [978] */
    (xdc_Char)0x76,  /* [979] */
    (xdc_Char)0x65,  /* [980] */
    (xdc_Char)0x6e,  /* [981] */
    (xdc_Char)0x74,  /* [982] */
    (xdc_Char)0x49,  /* [983] */
    (xdc_Char)0x64,  /* [984] */
    (xdc_Char)0x3a,  /* [985] */
    (xdc_Char)0x20,  /* [986] */
    (xdc_Char)0x70,  /* [987] */
    (xdc_Char)0x6f,  /* [988] */
    (xdc_Char)0x73,  /* [989] */
    (xdc_Char)0x74,  /* [990] */
    (xdc_Char)0x65,  /* [991] */
    (xdc_Char)0x64,  /* [992] */
    (xdc_Char)0x20,  /* [993] */
    (xdc_Char)0x65,  /* [994] */
    (xdc_Char)0x76,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x6e,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x49,  /* [999] */
    (xdc_Char)0x64,  /* [1000] */
    (xdc_Char)0x20,  /* [1001] */
    (xdc_Char)0x69,  /* [1002] */
    (xdc_Char)0x73,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x6e,  /* [1005] */
    (xdc_Char)0x75,  /* [1006] */
    (xdc_Char)0x6c,  /* [1007] */
    (xdc_Char)0x6c,  /* [1008] */
    (xdc_Char)0x2e,  /* [1009] */
    (xdc_Char)0x0,  /* [1010] */
    (xdc_Char)0x41,  /* [1011] */
    (xdc_Char)0x5f,  /* [1012] */
    (xdc_Char)0x65,  /* [1013] */
    (xdc_Char)0x76,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x6e,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x49,  /* [1018] */
    (xdc_Char)0x6e,  /* [1019] */
    (xdc_Char)0x55,  /* [1020] */
    (xdc_Char)0x73,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x3a,  /* [1023] */
    (xdc_Char)0x20,  /* [1024] */
    (xdc_Char)0x45,  /* [1025] */
    (xdc_Char)0x76,  /* [1026] */
    (xdc_Char)0x65,  /* [1027] */
    (xdc_Char)0x6e,  /* [1028] */
    (xdc_Char)0x74,  /* [1029] */
    (xdc_Char)0x20,  /* [1030] */
    (xdc_Char)0x6f,  /* [1031] */
    (xdc_Char)0x62,  /* [1032] */
    (xdc_Char)0x6a,  /* [1033] */
    (xdc_Char)0x65,  /* [1034] */
    (xdc_Char)0x63,  /* [1035] */
    (xdc_Char)0x74,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x61,  /* [1038] */
    (xdc_Char)0x6c,  /* [1039] */
    (xdc_Char)0x72,  /* [1040] */
    (xdc_Char)0x65,  /* [1041] */
    (xdc_Char)0x61,  /* [1042] */
    (xdc_Char)0x64,  /* [1043] */
    (xdc_Char)0x79,  /* [1044] */
    (xdc_Char)0x20,  /* [1045] */
    (xdc_Char)0x69,  /* [1046] */
    (xdc_Char)0x6e,  /* [1047] */
    (xdc_Char)0x20,  /* [1048] */
    (xdc_Char)0x75,  /* [1049] */
    (xdc_Char)0x73,  /* [1050] */
    (xdc_Char)0x65,  /* [1051] */
    (xdc_Char)0x2e,  /* [1052] */
    (xdc_Char)0x0,  /* [1053] */
    (xdc_Char)0x41,  /* [1054] */
    (xdc_Char)0x5f,  /* [1055] */
    (xdc_Char)0x62,  /* [1056] */
    (xdc_Char)0x61,  /* [1057] */
    (xdc_Char)0x64,  /* [1058] */
    (xdc_Char)0x43,  /* [1059] */
    (xdc_Char)0x6f,  /* [1060] */
    (xdc_Char)0x6e,  /* [1061] */
    (xdc_Char)0x74,  /* [1062] */
    (xdc_Char)0x65,  /* [1063] */
    (xdc_Char)0x78,  /* [1064] */
    (xdc_Char)0x74,  /* [1065] */
    (xdc_Char)0x3a,  /* [1066] */
    (xdc_Char)0x20,  /* [1067] */
    (xdc_Char)0x62,  /* [1068] */
    (xdc_Char)0x61,  /* [1069] */
    (xdc_Char)0x64,  /* [1070] */
    (xdc_Char)0x20,  /* [1071] */
    (xdc_Char)0x63,  /* [1072] */
    (xdc_Char)0x61,  /* [1073] */
    (xdc_Char)0x6c,  /* [1074] */
    (xdc_Char)0x6c,  /* [1075] */
    (xdc_Char)0x69,  /* [1076] */
    (xdc_Char)0x6e,  /* [1077] */
    (xdc_Char)0x67,  /* [1078] */
    (xdc_Char)0x20,  /* [1079] */
    (xdc_Char)0x63,  /* [1080] */
    (xdc_Char)0x6f,  /* [1081] */
    (xdc_Char)0x6e,  /* [1082] */
    (xdc_Char)0x74,  /* [1083] */
    (xdc_Char)0x65,  /* [1084] */
    (xdc_Char)0x78,  /* [1085] */
    (xdc_Char)0x74,  /* [1086] */
    (xdc_Char)0x2e,  /* [1087] */
    (xdc_Char)0x20,  /* [1088] */
    (xdc_Char)0x4d,  /* [1089] */
    (xdc_Char)0x75,  /* [1090] */
    (xdc_Char)0x73,  /* [1091] */
    (xdc_Char)0x74,  /* [1092] */
    (xdc_Char)0x20,  /* [1093] */
    (xdc_Char)0x62,  /* [1094] */
    (xdc_Char)0x65,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x63,  /* [1097] */
    (xdc_Char)0x61,  /* [1098] */
    (xdc_Char)0x6c,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x20,  /* [1103] */
    (xdc_Char)0x66,  /* [1104] */
    (xdc_Char)0x72,  /* [1105] */
    (xdc_Char)0x6f,  /* [1106] */
    (xdc_Char)0x6d,  /* [1107] */
    (xdc_Char)0x20,  /* [1108] */
    (xdc_Char)0x61,  /* [1109] */
    (xdc_Char)0x20,  /* [1110] */
    (xdc_Char)0x54,  /* [1111] */
    (xdc_Char)0x61,  /* [1112] */
    (xdc_Char)0x73,  /* [1113] */
    (xdc_Char)0x6b,  /* [1114] */
    (xdc_Char)0x2e,  /* [1115] */
    (xdc_Char)0x0,  /* [1116] */
    (xdc_Char)0x41,  /* [1117] */
    (xdc_Char)0x5f,  /* [1118] */
    (xdc_Char)0x70,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x6e,  /* [1121] */
    (xdc_Char)0x64,  /* [1122] */
    (xdc_Char)0x54,  /* [1123] */
    (xdc_Char)0x61,  /* [1124] */
    (xdc_Char)0x73,  /* [1125] */
    (xdc_Char)0x6b,  /* [1126] */
    (xdc_Char)0x44,  /* [1127] */
    (xdc_Char)0x69,  /* [1128] */
    (xdc_Char)0x73,  /* [1129] */
    (xdc_Char)0x61,  /* [1130] */
    (xdc_Char)0x62,  /* [1131] */
    (xdc_Char)0x6c,  /* [1132] */
    (xdc_Char)0x65,  /* [1133] */
    (xdc_Char)0x64,  /* [1134] */
    (xdc_Char)0x3a,  /* [1135] */
    (xdc_Char)0x20,  /* [1136] */
    (xdc_Char)0x43,  /* [1137] */
    (xdc_Char)0x61,  /* [1138] */
    (xdc_Char)0x6e,  /* [1139] */
    (xdc_Char)0x6e,  /* [1140] */
    (xdc_Char)0x6f,  /* [1141] */
    (xdc_Char)0x74,  /* [1142] */
    (xdc_Char)0x20,  /* [1143] */
    (xdc_Char)0x63,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x6c,  /* [1146] */
    (xdc_Char)0x6c,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x45,  /* [1149] */
    (xdc_Char)0x76,  /* [1150] */
    (xdc_Char)0x65,  /* [1151] */
    (xdc_Char)0x6e,  /* [1152] */
    (xdc_Char)0x74,  /* [1153] */
    (xdc_Char)0x5f,  /* [1154] */
    (xdc_Char)0x70,  /* [1155] */
    (xdc_Char)0x65,  /* [1156] */
    (xdc_Char)0x6e,  /* [1157] */
    (xdc_Char)0x64,  /* [1158] */
    (xdc_Char)0x28,  /* [1159] */
    (xdc_Char)0x29,  /* [1160] */
    (xdc_Char)0x20,  /* [1161] */
    (xdc_Char)0x77,  /* [1162] */
    (xdc_Char)0x68,  /* [1163] */
    (xdc_Char)0x69,  /* [1164] */
    (xdc_Char)0x6c,  /* [1165] */
    (xdc_Char)0x65,  /* [1166] */
    (xdc_Char)0x20,  /* [1167] */
    (xdc_Char)0x74,  /* [1168] */
    (xdc_Char)0x68,  /* [1169] */
    (xdc_Char)0x65,  /* [1170] */
    (xdc_Char)0x20,  /* [1171] */
    (xdc_Char)0x54,  /* [1172] */
    (xdc_Char)0x61,  /* [1173] */
    (xdc_Char)0x73,  /* [1174] */
    (xdc_Char)0x6b,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x6f,  /* [1177] */
    (xdc_Char)0x72,  /* [1178] */
    (xdc_Char)0x20,  /* [1179] */
    (xdc_Char)0x53,  /* [1180] */
    (xdc_Char)0x77,  /* [1181] */
    (xdc_Char)0x69,  /* [1182] */
    (xdc_Char)0x20,  /* [1183] */
    (xdc_Char)0x73,  /* [1184] */
    (xdc_Char)0x63,  /* [1185] */
    (xdc_Char)0x68,  /* [1186] */
    (xdc_Char)0x65,  /* [1187] */
    (xdc_Char)0x64,  /* [1188] */
    (xdc_Char)0x75,  /* [1189] */
    (xdc_Char)0x6c,  /* [1190] */
    (xdc_Char)0x65,  /* [1191] */
    (xdc_Char)0x72,  /* [1192] */
    (xdc_Char)0x20,  /* [1193] */
    (xdc_Char)0x69,  /* [1194] */
    (xdc_Char)0x73,  /* [1195] */
    (xdc_Char)0x20,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x69,  /* [1198] */
    (xdc_Char)0x73,  /* [1199] */
    (xdc_Char)0x61,  /* [1200] */
    (xdc_Char)0x62,  /* [1201] */
    (xdc_Char)0x6c,  /* [1202] */
    (xdc_Char)0x65,  /* [1203] */
    (xdc_Char)0x64,  /* [1204] */
    (xdc_Char)0x2e,  /* [1205] */
    (xdc_Char)0x0,  /* [1206] */
    (xdc_Char)0x4d,  /* [1207] */
    (xdc_Char)0x61,  /* [1208] */
    (xdc_Char)0x69,  /* [1209] */
    (xdc_Char)0x6c,  /* [1210] */
    (xdc_Char)0x62,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x78,  /* [1213] */
    (xdc_Char)0x5f,  /* [1214] */
    (xdc_Char)0x63,  /* [1215] */
    (xdc_Char)0x72,  /* [1216] */
    (xdc_Char)0x65,  /* [1217] */
    (xdc_Char)0x61,  /* [1218] */
    (xdc_Char)0x74,  /* [1219] */
    (xdc_Char)0x65,  /* [1220] */
    (xdc_Char)0x27,  /* [1221] */
    (xdc_Char)0x73,  /* [1222] */
    (xdc_Char)0x20,  /* [1223] */
    (xdc_Char)0x62,  /* [1224] */
    (xdc_Char)0x75,  /* [1225] */
    (xdc_Char)0x66,  /* [1226] */
    (xdc_Char)0x53,  /* [1227] */
    (xdc_Char)0x69,  /* [1228] */
    (xdc_Char)0x7a,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x20,  /* [1231] */
    (xdc_Char)0x70,  /* [1232] */
    (xdc_Char)0x61,  /* [1233] */
    (xdc_Char)0x72,  /* [1234] */
    (xdc_Char)0x61,  /* [1235] */
    (xdc_Char)0x6d,  /* [1236] */
    (xdc_Char)0x65,  /* [1237] */
    (xdc_Char)0x74,  /* [1238] */
    (xdc_Char)0x65,  /* [1239] */
    (xdc_Char)0x72,  /* [1240] */
    (xdc_Char)0x20,  /* [1241] */
    (xdc_Char)0x69,  /* [1242] */
    (xdc_Char)0x73,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x6e,  /* [1246] */
    (xdc_Char)0x76,  /* [1247] */
    (xdc_Char)0x61,  /* [1248] */
    (xdc_Char)0x6c,  /* [1249] */
    (xdc_Char)0x69,  /* [1250] */
    (xdc_Char)0x64,  /* [1251] */
    (xdc_Char)0x20,  /* [1252] */
    (xdc_Char)0x28,  /* [1253] */
    (xdc_Char)0x74,  /* [1254] */
    (xdc_Char)0x6f,  /* [1255] */
    (xdc_Char)0x6f,  /* [1256] */
    (xdc_Char)0x20,  /* [1257] */
    (xdc_Char)0x73,  /* [1258] */
    (xdc_Char)0x6d,  /* [1259] */
    (xdc_Char)0x61,  /* [1260] */
    (xdc_Char)0x6c,  /* [1261] */
    (xdc_Char)0x6c,  /* [1262] */
    (xdc_Char)0x29,  /* [1263] */
    (xdc_Char)0x0,  /* [1264] */
    (xdc_Char)0x41,  /* [1265] */
    (xdc_Char)0x5f,  /* [1266] */
    (xdc_Char)0x6e,  /* [1267] */
    (xdc_Char)0x6f,  /* [1268] */
    (xdc_Char)0x45,  /* [1269] */
    (xdc_Char)0x76,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x6e,  /* [1272] */
    (xdc_Char)0x74,  /* [1273] */
    (xdc_Char)0x73,  /* [1274] */
    (xdc_Char)0x3a,  /* [1275] */
    (xdc_Char)0x20,  /* [1276] */
    (xdc_Char)0x54,  /* [1277] */
    (xdc_Char)0x68,  /* [1278] */
    (xdc_Char)0x65,  /* [1279] */
    (xdc_Char)0x20,  /* [1280] */
    (xdc_Char)0x45,  /* [1281] */
    (xdc_Char)0x76,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x74,  /* [1285] */
    (xdc_Char)0x2e,  /* [1286] */
    (xdc_Char)0x73,  /* [1287] */
    (xdc_Char)0x75,  /* [1288] */
    (xdc_Char)0x70,  /* [1289] */
    (xdc_Char)0x70,  /* [1290] */
    (xdc_Char)0x6f,  /* [1291] */
    (xdc_Char)0x72,  /* [1292] */
    (xdc_Char)0x74,  /* [1293] */
    (xdc_Char)0x73,  /* [1294] */
    (xdc_Char)0x45,  /* [1295] */
    (xdc_Char)0x76,  /* [1296] */
    (xdc_Char)0x65,  /* [1297] */
    (xdc_Char)0x6e,  /* [1298] */
    (xdc_Char)0x74,  /* [1299] */
    (xdc_Char)0x73,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x66,  /* [1302] */
    (xdc_Char)0x6c,  /* [1303] */
    (xdc_Char)0x61,  /* [1304] */
    (xdc_Char)0x67,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x69,  /* [1307] */
    (xdc_Char)0x73,  /* [1308] */
    (xdc_Char)0x20,  /* [1309] */
    (xdc_Char)0x64,  /* [1310] */
    (xdc_Char)0x69,  /* [1311] */
    (xdc_Char)0x73,  /* [1312] */
    (xdc_Char)0x61,  /* [1313] */
    (xdc_Char)0x62,  /* [1314] */
    (xdc_Char)0x6c,  /* [1315] */
    (xdc_Char)0x65,  /* [1316] */
    (xdc_Char)0x64,  /* [1317] */
    (xdc_Char)0x2e,  /* [1318] */
    (xdc_Char)0x0,  /* [1319] */
    (xdc_Char)0x41,  /* [1320] */
    (xdc_Char)0x5f,  /* [1321] */
    (xdc_Char)0x69,  /* [1322] */
    (xdc_Char)0x6e,  /* [1323] */
    (xdc_Char)0x76,  /* [1324] */
    (xdc_Char)0x54,  /* [1325] */
    (xdc_Char)0x69,  /* [1326] */
    (xdc_Char)0x6d,  /* [1327] */
    (xdc_Char)0x65,  /* [1328] */
    (xdc_Char)0x6f,  /* [1329] */
    (xdc_Char)0x75,  /* [1330] */
    (xdc_Char)0x74,  /* [1331] */
    (xdc_Char)0x3a,  /* [1332] */
    (xdc_Char)0x20,  /* [1333] */
    (xdc_Char)0x43,  /* [1334] */
    (xdc_Char)0x61,  /* [1335] */
    (xdc_Char)0x6e,  /* [1336] */
    (xdc_Char)0x27,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x75,  /* [1340] */
    (xdc_Char)0x73,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x20,  /* [1343] */
    (xdc_Char)0x42,  /* [1344] */
    (xdc_Char)0x49,  /* [1345] */
    (xdc_Char)0x4f,  /* [1346] */
    (xdc_Char)0x53,  /* [1347] */
    (xdc_Char)0x5f,  /* [1348] */
    (xdc_Char)0x45,  /* [1349] */
    (xdc_Char)0x56,  /* [1350] */
    (xdc_Char)0x45,  /* [1351] */
    (xdc_Char)0x4e,  /* [1352] */
    (xdc_Char)0x54,  /* [1353] */
    (xdc_Char)0x5f,  /* [1354] */
    (xdc_Char)0x41,  /* [1355] */
    (xdc_Char)0x43,  /* [1356] */
    (xdc_Char)0x51,  /* [1357] */
    (xdc_Char)0x55,  /* [1358] */
    (xdc_Char)0x49,  /* [1359] */
    (xdc_Char)0x52,  /* [1360] */
    (xdc_Char)0x45,  /* [1361] */
    (xdc_Char)0x44,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x77,  /* [1364] */
    (xdc_Char)0x69,  /* [1365] */
    (xdc_Char)0x74,  /* [1366] */
    (xdc_Char)0x68,  /* [1367] */
    (xdc_Char)0x20,  /* [1368] */
    (xdc_Char)0x74,  /* [1369] */
    (xdc_Char)0x68,  /* [1370] */
    (xdc_Char)0x69,  /* [1371] */
    (xdc_Char)0x73,  /* [1372] */
    (xdc_Char)0x20,  /* [1373] */
    (xdc_Char)0x53,  /* [1374] */
    (xdc_Char)0x65,  /* [1375] */
    (xdc_Char)0x6d,  /* [1376] */
    (xdc_Char)0x61,  /* [1377] */
    (xdc_Char)0x70,  /* [1378] */
    (xdc_Char)0x68,  /* [1379] */
    (xdc_Char)0x6f,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x65,  /* [1382] */
    (xdc_Char)0x2e,  /* [1383] */
    (xdc_Char)0x0,  /* [1384] */
    (xdc_Char)0x41,  /* [1385] */
    (xdc_Char)0x5f,  /* [1386] */
    (xdc_Char)0x6f,  /* [1387] */
    (xdc_Char)0x76,  /* [1388] */
    (xdc_Char)0x65,  /* [1389] */
    (xdc_Char)0x72,  /* [1390] */
    (xdc_Char)0x66,  /* [1391] */
    (xdc_Char)0x6c,  /* [1392] */
    (xdc_Char)0x6f,  /* [1393] */
    (xdc_Char)0x77,  /* [1394] */
    (xdc_Char)0x3a,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x43,  /* [1397] */
    (xdc_Char)0x6f,  /* [1398] */
    (xdc_Char)0x75,  /* [1399] */
    (xdc_Char)0x6e,  /* [1400] */
    (xdc_Char)0x74,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x68,  /* [1403] */
    (xdc_Char)0x61,  /* [1404] */
    (xdc_Char)0x73,  /* [1405] */
    (xdc_Char)0x20,  /* [1406] */
    (xdc_Char)0x65,  /* [1407] */
    (xdc_Char)0x78,  /* [1408] */
    (xdc_Char)0x63,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x64,  /* [1412] */
    (xdc_Char)0x65,  /* [1413] */
    (xdc_Char)0x64,  /* [1414] */
    (xdc_Char)0x20,  /* [1415] */
    (xdc_Char)0x36,  /* [1416] */
    (xdc_Char)0x35,  /* [1417] */
    (xdc_Char)0x35,  /* [1418] */
    (xdc_Char)0x33,  /* [1419] */
    (xdc_Char)0x35,  /* [1420] */
    (xdc_Char)0x20,  /* [1421] */
    (xdc_Char)0x61,  /* [1422] */
    (xdc_Char)0x6e,  /* [1423] */
    (xdc_Char)0x64,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x72,  /* [1426] */
    (xdc_Char)0x6f,  /* [1427] */
    (xdc_Char)0x6c,  /* [1428] */
    (xdc_Char)0x6c,  /* [1429] */
    (xdc_Char)0x65,  /* [1430] */
    (xdc_Char)0x64,  /* [1431] */
    (xdc_Char)0x20,  /* [1432] */
    (xdc_Char)0x6f,  /* [1433] */
    (xdc_Char)0x76,  /* [1434] */
    (xdc_Char)0x65,  /* [1435] */
    (xdc_Char)0x72,  /* [1436] */
    (xdc_Char)0x2e,  /* [1437] */
    (xdc_Char)0x0,  /* [1438] */
    (xdc_Char)0x41,  /* [1439] */
    (xdc_Char)0x5f,  /* [1440] */
    (xdc_Char)0x70,  /* [1441] */
    (xdc_Char)0x65,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x64,  /* [1444] */
    (xdc_Char)0x54,  /* [1445] */
    (xdc_Char)0x61,  /* [1446] */
    (xdc_Char)0x73,  /* [1447] */
    (xdc_Char)0x6b,  /* [1448] */
    (xdc_Char)0x44,  /* [1449] */
    (xdc_Char)0x69,  /* [1450] */
    (xdc_Char)0x73,  /* [1451] */
    (xdc_Char)0x61,  /* [1452] */
    (xdc_Char)0x62,  /* [1453] */
    (xdc_Char)0x6c,  /* [1454] */
    (xdc_Char)0x65,  /* [1455] */
    (xdc_Char)0x64,  /* [1456] */
    (xdc_Char)0x3a,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x43,  /* [1459] */
    (xdc_Char)0x61,  /* [1460] */
    (xdc_Char)0x6e,  /* [1461] */
    (xdc_Char)0x6e,  /* [1462] */
    (xdc_Char)0x6f,  /* [1463] */
    (xdc_Char)0x74,  /* [1464] */
    (xdc_Char)0x20,  /* [1465] */
    (xdc_Char)0x63,  /* [1466] */
    (xdc_Char)0x61,  /* [1467] */
    (xdc_Char)0x6c,  /* [1468] */
    (xdc_Char)0x6c,  /* [1469] */
    (xdc_Char)0x20,  /* [1470] */
    (xdc_Char)0x53,  /* [1471] */
    (xdc_Char)0x65,  /* [1472] */
    (xdc_Char)0x6d,  /* [1473] */
    (xdc_Char)0x61,  /* [1474] */
    (xdc_Char)0x70,  /* [1475] */
    (xdc_Char)0x68,  /* [1476] */
    (xdc_Char)0x6f,  /* [1477] */
    (xdc_Char)0x72,  /* [1478] */
    (xdc_Char)0x65,  /* [1479] */
    (xdc_Char)0x5f,  /* [1480] */
    (xdc_Char)0x70,  /* [1481] */
    (xdc_Char)0x65,  /* [1482] */
    (xdc_Char)0x6e,  /* [1483] */
    (xdc_Char)0x64,  /* [1484] */
    (xdc_Char)0x28,  /* [1485] */
    (xdc_Char)0x29,  /* [1486] */
    (xdc_Char)0x20,  /* [1487] */
    (xdc_Char)0x77,  /* [1488] */
    (xdc_Char)0x68,  /* [1489] */
    (xdc_Char)0x69,  /* [1490] */
    (xdc_Char)0x6c,  /* [1491] */
    (xdc_Char)0x65,  /* [1492] */
    (xdc_Char)0x20,  /* [1493] */
    (xdc_Char)0x74,  /* [1494] */
    (xdc_Char)0x68,  /* [1495] */
    (xdc_Char)0x65,  /* [1496] */
    (xdc_Char)0x20,  /* [1497] */
    (xdc_Char)0x54,  /* [1498] */
    (xdc_Char)0x61,  /* [1499] */
    (xdc_Char)0x73,  /* [1500] */
    (xdc_Char)0x6b,  /* [1501] */
    (xdc_Char)0x20,  /* [1502] */
    (xdc_Char)0x6f,  /* [1503] */
    (xdc_Char)0x72,  /* [1504] */
    (xdc_Char)0x20,  /* [1505] */
    (xdc_Char)0x53,  /* [1506] */
    (xdc_Char)0x77,  /* [1507] */
    (xdc_Char)0x69,  /* [1508] */
    (xdc_Char)0x20,  /* [1509] */
    (xdc_Char)0x73,  /* [1510] */
    (xdc_Char)0x63,  /* [1511] */
    (xdc_Char)0x68,  /* [1512] */
    (xdc_Char)0x65,  /* [1513] */
    (xdc_Char)0x64,  /* [1514] */
    (xdc_Char)0x75,  /* [1515] */
    (xdc_Char)0x6c,  /* [1516] */
    (xdc_Char)0x65,  /* [1517] */
    (xdc_Char)0x72,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x69,  /* [1520] */
    (xdc_Char)0x73,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x64,  /* [1523] */
    (xdc_Char)0x69,  /* [1524] */
    (xdc_Char)0x73,  /* [1525] */
    (xdc_Char)0x61,  /* [1526] */
    (xdc_Char)0x62,  /* [1527] */
    (xdc_Char)0x6c,  /* [1528] */
    (xdc_Char)0x65,  /* [1529] */
    (xdc_Char)0x64,  /* [1530] */
    (xdc_Char)0x2e,  /* [1531] */
    (xdc_Char)0x0,  /* [1532] */
    (xdc_Char)0x41,  /* [1533] */
    (xdc_Char)0x5f,  /* [1534] */
    (xdc_Char)0x73,  /* [1535] */
    (xdc_Char)0x77,  /* [1536] */
    (xdc_Char)0x69,  /* [1537] */
    (xdc_Char)0x44,  /* [1538] */
    (xdc_Char)0x69,  /* [1539] */
    (xdc_Char)0x73,  /* [1540] */
    (xdc_Char)0x61,  /* [1541] */
    (xdc_Char)0x62,  /* [1542] */
    (xdc_Char)0x6c,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x64,  /* [1545] */
    (xdc_Char)0x3a,  /* [1546] */
    (xdc_Char)0x20,  /* [1547] */
    (xdc_Char)0x43,  /* [1548] */
    (xdc_Char)0x61,  /* [1549] */
    (xdc_Char)0x6e,  /* [1550] */
    (xdc_Char)0x6e,  /* [1551] */
    (xdc_Char)0x6f,  /* [1552] */
    (xdc_Char)0x74,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x63,  /* [1555] */
    (xdc_Char)0x72,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x61,  /* [1558] */
    (xdc_Char)0x74,  /* [1559] */
    (xdc_Char)0x65,  /* [1560] */
    (xdc_Char)0x20,  /* [1561] */
    (xdc_Char)0x61,  /* [1562] */
    (xdc_Char)0x20,  /* [1563] */
    (xdc_Char)0x53,  /* [1564] */
    (xdc_Char)0x77,  /* [1565] */
    (xdc_Char)0x69,  /* [1566] */
    (xdc_Char)0x20,  /* [1567] */
    (xdc_Char)0x77,  /* [1568] */
    (xdc_Char)0x68,  /* [1569] */
    (xdc_Char)0x65,  /* [1570] */
    (xdc_Char)0x6e,  /* [1571] */
    (xdc_Char)0x20,  /* [1572] */
    (xdc_Char)0x53,  /* [1573] */
    (xdc_Char)0x77,  /* [1574] */
    (xdc_Char)0x69,  /* [1575] */
    (xdc_Char)0x20,  /* [1576] */
    (xdc_Char)0x69,  /* [1577] */
    (xdc_Char)0x73,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x64,  /* [1580] */
    (xdc_Char)0x69,  /* [1581] */
    (xdc_Char)0x73,  /* [1582] */
    (xdc_Char)0x61,  /* [1583] */
    (xdc_Char)0x62,  /* [1584] */
    (xdc_Char)0x6c,  /* [1585] */
    (xdc_Char)0x65,  /* [1586] */
    (xdc_Char)0x64,  /* [1587] */
    (xdc_Char)0x2e,  /* [1588] */
    (xdc_Char)0x0,  /* [1589] */
    (xdc_Char)0x41,  /* [1590] */
    (xdc_Char)0x5f,  /* [1591] */
    (xdc_Char)0x62,  /* [1592] */
    (xdc_Char)0x61,  /* [1593] */
    (xdc_Char)0x64,  /* [1594] */
    (xdc_Char)0x50,  /* [1595] */
    (xdc_Char)0x72,  /* [1596] */
    (xdc_Char)0x69,  /* [1597] */
    (xdc_Char)0x6f,  /* [1598] */
    (xdc_Char)0x72,  /* [1599] */
    (xdc_Char)0x69,  /* [1600] */
    (xdc_Char)0x74,  /* [1601] */
    (xdc_Char)0x79,  /* [1602] */
    (xdc_Char)0x3a,  /* [1603] */
    (xdc_Char)0x20,  /* [1604] */
    (xdc_Char)0x41,  /* [1605] */
    (xdc_Char)0x6e,  /* [1606] */
    (xdc_Char)0x20,  /* [1607] */
    (xdc_Char)0x69,  /* [1608] */
    (xdc_Char)0x6e,  /* [1609] */
    (xdc_Char)0x76,  /* [1610] */
    (xdc_Char)0x61,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x69,  /* [1613] */
    (xdc_Char)0x64,  /* [1614] */
    (xdc_Char)0x20,  /* [1615] */
    (xdc_Char)0x53,  /* [1616] */
    (xdc_Char)0x77,  /* [1617] */
    (xdc_Char)0x69,  /* [1618] */
    (xdc_Char)0x20,  /* [1619] */
    (xdc_Char)0x70,  /* [1620] */
    (xdc_Char)0x72,  /* [1621] */
    (xdc_Char)0x69,  /* [1622] */
    (xdc_Char)0x6f,  /* [1623] */
    (xdc_Char)0x72,  /* [1624] */
    (xdc_Char)0x69,  /* [1625] */
    (xdc_Char)0x74,  /* [1626] */
    (xdc_Char)0x79,  /* [1627] */
    (xdc_Char)0x20,  /* [1628] */
    (xdc_Char)0x77,  /* [1629] */
    (xdc_Char)0x61,  /* [1630] */
    (xdc_Char)0x73,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x75,  /* [1633] */
    (xdc_Char)0x73,  /* [1634] */
    (xdc_Char)0x65,  /* [1635] */
    (xdc_Char)0x64,  /* [1636] */
    (xdc_Char)0x2e,  /* [1637] */
    (xdc_Char)0x0,  /* [1638] */
    (xdc_Char)0x41,  /* [1639] */
    (xdc_Char)0x5f,  /* [1640] */
    (xdc_Char)0x62,  /* [1641] */
    (xdc_Char)0x61,  /* [1642] */
    (xdc_Char)0x64,  /* [1643] */
    (xdc_Char)0x54,  /* [1644] */
    (xdc_Char)0x68,  /* [1645] */
    (xdc_Char)0x72,  /* [1646] */
    (xdc_Char)0x65,  /* [1647] */
    (xdc_Char)0x61,  /* [1648] */
    (xdc_Char)0x64,  /* [1649] */
    (xdc_Char)0x54,  /* [1650] */
    (xdc_Char)0x79,  /* [1651] */
    (xdc_Char)0x70,  /* [1652] */
    (xdc_Char)0x65,  /* [1653] */
    (xdc_Char)0x3a,  /* [1654] */
    (xdc_Char)0x20,  /* [1655] */
    (xdc_Char)0x43,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x6e,  /* [1658] */
    (xdc_Char)0x6e,  /* [1659] */
    (xdc_Char)0x6f,  /* [1660] */
    (xdc_Char)0x74,  /* [1661] */
    (xdc_Char)0x20,  /* [1662] */
    (xdc_Char)0x63,  /* [1663] */
    (xdc_Char)0x72,  /* [1664] */
    (xdc_Char)0x65,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x74,  /* [1667] */
    (xdc_Char)0x65,  /* [1668] */
    (xdc_Char)0x2f,  /* [1669] */
    (xdc_Char)0x64,  /* [1670] */
    (xdc_Char)0x65,  /* [1671] */
    (xdc_Char)0x6c,  /* [1672] */
    (xdc_Char)0x65,  /* [1673] */
    (xdc_Char)0x74,  /* [1674] */
    (xdc_Char)0x65,  /* [1675] */
    (xdc_Char)0x20,  /* [1676] */
    (xdc_Char)0x61,  /* [1677] */
    (xdc_Char)0x20,  /* [1678] */
    (xdc_Char)0x74,  /* [1679] */
    (xdc_Char)0x61,  /* [1680] */
    (xdc_Char)0x73,  /* [1681] */
    (xdc_Char)0x6b,  /* [1682] */
    (xdc_Char)0x20,  /* [1683] */
    (xdc_Char)0x66,  /* [1684] */
    (xdc_Char)0x72,  /* [1685] */
    (xdc_Char)0x6f,  /* [1686] */
    (xdc_Char)0x6d,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x48,  /* [1689] */
    (xdc_Char)0x77,  /* [1690] */
    (xdc_Char)0x69,  /* [1691] */
    (xdc_Char)0x20,  /* [1692] */
    (xdc_Char)0x6f,  /* [1693] */
    (xdc_Char)0x72,  /* [1694] */
    (xdc_Char)0x20,  /* [1695] */
    (xdc_Char)0x53,  /* [1696] */
    (xdc_Char)0x77,  /* [1697] */
    (xdc_Char)0x69,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x74,  /* [1700] */
    (xdc_Char)0x68,  /* [1701] */
    (xdc_Char)0x72,  /* [1702] */
    (xdc_Char)0x65,  /* [1703] */
    (xdc_Char)0x61,  /* [1704] */
    (xdc_Char)0x64,  /* [1705] */
    (xdc_Char)0x2e,  /* [1706] */
    (xdc_Char)0x0,  /* [1707] */
    (xdc_Char)0x41,  /* [1708] */
    (xdc_Char)0x5f,  /* [1709] */
    (xdc_Char)0x62,  /* [1710] */
    (xdc_Char)0x61,  /* [1711] */
    (xdc_Char)0x64,  /* [1712] */
    (xdc_Char)0x54,  /* [1713] */
    (xdc_Char)0x61,  /* [1714] */
    (xdc_Char)0x73,  /* [1715] */
    (xdc_Char)0x6b,  /* [1716] */
    (xdc_Char)0x53,  /* [1717] */
    (xdc_Char)0x74,  /* [1718] */
    (xdc_Char)0x61,  /* [1719] */
    (xdc_Char)0x74,  /* [1720] */
    (xdc_Char)0x65,  /* [1721] */
    (xdc_Char)0x3a,  /* [1722] */
    (xdc_Char)0x20,  /* [1723] */
    (xdc_Char)0x43,  /* [1724] */
    (xdc_Char)0x61,  /* [1725] */
    (xdc_Char)0x6e,  /* [1726] */
    (xdc_Char)0x27,  /* [1727] */
    (xdc_Char)0x74,  /* [1728] */
    (xdc_Char)0x20,  /* [1729] */
    (xdc_Char)0x64,  /* [1730] */
    (xdc_Char)0x65,  /* [1731] */
    (xdc_Char)0x6c,  /* [1732] */
    (xdc_Char)0x65,  /* [1733] */
    (xdc_Char)0x74,  /* [1734] */
    (xdc_Char)0x65,  /* [1735] */
    (xdc_Char)0x20,  /* [1736] */
    (xdc_Char)0x61,  /* [1737] */
    (xdc_Char)0x20,  /* [1738] */
    (xdc_Char)0x74,  /* [1739] */
    (xdc_Char)0x61,  /* [1740] */
    (xdc_Char)0x73,  /* [1741] */
    (xdc_Char)0x6b,  /* [1742] */
    (xdc_Char)0x20,  /* [1743] */
    (xdc_Char)0x69,  /* [1744] */
    (xdc_Char)0x6e,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x52,  /* [1747] */
    (xdc_Char)0x55,  /* [1748] */
    (xdc_Char)0x4e,  /* [1749] */
    (xdc_Char)0x4e,  /* [1750] */
    (xdc_Char)0x49,  /* [1751] */
    (xdc_Char)0x4e,  /* [1752] */
    (xdc_Char)0x47,  /* [1753] */
    (xdc_Char)0x20,  /* [1754] */
    (xdc_Char)0x73,  /* [1755] */
    (xdc_Char)0x74,  /* [1756] */
    (xdc_Char)0x61,  /* [1757] */
    (xdc_Char)0x74,  /* [1758] */
    (xdc_Char)0x65,  /* [1759] */
    (xdc_Char)0x2e,  /* [1760] */
    (xdc_Char)0x0,  /* [1761] */
    (xdc_Char)0x41,  /* [1762] */
    (xdc_Char)0x5f,  /* [1763] */
    (xdc_Char)0x6e,  /* [1764] */
    (xdc_Char)0x6f,  /* [1765] */
    (xdc_Char)0x50,  /* [1766] */
    (xdc_Char)0x65,  /* [1767] */
    (xdc_Char)0x6e,  /* [1768] */
    (xdc_Char)0x64,  /* [1769] */
    (xdc_Char)0x45,  /* [1770] */
    (xdc_Char)0x6c,  /* [1771] */
    (xdc_Char)0x65,  /* [1772] */
    (xdc_Char)0x6d,  /* [1773] */
    (xdc_Char)0x3a,  /* [1774] */
    (xdc_Char)0x20,  /* [1775] */
    (xdc_Char)0x4e,  /* [1776] */
    (xdc_Char)0x6f,  /* [1777] */
    (xdc_Char)0x74,  /* [1778] */
    (xdc_Char)0x20,  /* [1779] */
    (xdc_Char)0x65,  /* [1780] */
    (xdc_Char)0x6e,  /* [1781] */
    (xdc_Char)0x6f,  /* [1782] */
    (xdc_Char)0x75,  /* [1783] */
    (xdc_Char)0x67,  /* [1784] */
    (xdc_Char)0x68,  /* [1785] */
    (xdc_Char)0x20,  /* [1786] */
    (xdc_Char)0x69,  /* [1787] */
    (xdc_Char)0x6e,  /* [1788] */
    (xdc_Char)0x66,  /* [1789] */
    (xdc_Char)0x6f,  /* [1790] */
    (xdc_Char)0x20,  /* [1791] */
    (xdc_Char)0x74,  /* [1792] */
    (xdc_Char)0x6f,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x64,  /* [1795] */
    (xdc_Char)0x65,  /* [1796] */
    (xdc_Char)0x6c,  /* [1797] */
    (xdc_Char)0x65,  /* [1798] */
    (xdc_Char)0x74,  /* [1799] */
    (xdc_Char)0x65,  /* [1800] */
    (xdc_Char)0x20,  /* [1801] */
    (xdc_Char)0x42,  /* [1802] */
    (xdc_Char)0x4c,  /* [1803] */
    (xdc_Char)0x4f,  /* [1804] */
    (xdc_Char)0x43,  /* [1805] */
    (xdc_Char)0x4b,  /* [1806] */
    (xdc_Char)0x45,  /* [1807] */
    (xdc_Char)0x44,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x74,  /* [1810] */
    (xdc_Char)0x61,  /* [1811] */
    (xdc_Char)0x73,  /* [1812] */
    (xdc_Char)0x6b,  /* [1813] */
    (xdc_Char)0x2e,  /* [1814] */
    (xdc_Char)0x0,  /* [1815] */
    (xdc_Char)0x41,  /* [1816] */
    (xdc_Char)0x5f,  /* [1817] */
    (xdc_Char)0x74,  /* [1818] */
    (xdc_Char)0x61,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x6b,  /* [1821] */
    (xdc_Char)0x44,  /* [1822] */
    (xdc_Char)0x69,  /* [1823] */
    (xdc_Char)0x73,  /* [1824] */
    (xdc_Char)0x61,  /* [1825] */
    (xdc_Char)0x62,  /* [1826] */
    (xdc_Char)0x6c,  /* [1827] */
    (xdc_Char)0x65,  /* [1828] */
    (xdc_Char)0x64,  /* [1829] */
    (xdc_Char)0x3a,  /* [1830] */
    (xdc_Char)0x20,  /* [1831] */
    (xdc_Char)0x43,  /* [1832] */
    (xdc_Char)0x61,  /* [1833] */
    (xdc_Char)0x6e,  /* [1834] */
    (xdc_Char)0x6e,  /* [1835] */
    (xdc_Char)0x6f,  /* [1836] */
    (xdc_Char)0x74,  /* [1837] */
    (xdc_Char)0x20,  /* [1838] */
    (xdc_Char)0x63,  /* [1839] */
    (xdc_Char)0x72,  /* [1840] */
    (xdc_Char)0x65,  /* [1841] */
    (xdc_Char)0x61,  /* [1842] */
    (xdc_Char)0x74,  /* [1843] */
    (xdc_Char)0x65,  /* [1844] */
    (xdc_Char)0x20,  /* [1845] */
    (xdc_Char)0x61,  /* [1846] */
    (xdc_Char)0x20,  /* [1847] */
    (xdc_Char)0x74,  /* [1848] */
    (xdc_Char)0x61,  /* [1849] */
    (xdc_Char)0x73,  /* [1850] */
    (xdc_Char)0x6b,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x77,  /* [1853] */
    (xdc_Char)0x68,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x6e,  /* [1856] */
    (xdc_Char)0x20,  /* [1857] */
    (xdc_Char)0x74,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x73,  /* [1860] */
    (xdc_Char)0x6b,  /* [1861] */
    (xdc_Char)0x69,  /* [1862] */
    (xdc_Char)0x6e,  /* [1863] */
    (xdc_Char)0x67,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x69,  /* [1866] */
    (xdc_Char)0x73,  /* [1867] */
    (xdc_Char)0x20,  /* [1868] */
    (xdc_Char)0x64,  /* [1869] */
    (xdc_Char)0x69,  /* [1870] */
    (xdc_Char)0x73,  /* [1871] */
    (xdc_Char)0x61,  /* [1872] */
    (xdc_Char)0x62,  /* [1873] */
    (xdc_Char)0x6c,  /* [1874] */
    (xdc_Char)0x65,  /* [1875] */
    (xdc_Char)0x64,  /* [1876] */
    (xdc_Char)0x2e,  /* [1877] */
    (xdc_Char)0x0,  /* [1878] */
    (xdc_Char)0x41,  /* [1879] */
    (xdc_Char)0x5f,  /* [1880] */
    (xdc_Char)0x62,  /* [1881] */
    (xdc_Char)0x61,  /* [1882] */
    (xdc_Char)0x64,  /* [1883] */
    (xdc_Char)0x50,  /* [1884] */
    (xdc_Char)0x72,  /* [1885] */
    (xdc_Char)0x69,  /* [1886] */
    (xdc_Char)0x6f,  /* [1887] */
    (xdc_Char)0x72,  /* [1888] */
    (xdc_Char)0x69,  /* [1889] */
    (xdc_Char)0x74,  /* [1890] */
    (xdc_Char)0x79,  /* [1891] */
    (xdc_Char)0x3a,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x41,  /* [1894] */
    (xdc_Char)0x6e,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x69,  /* [1897] */
    (xdc_Char)0x6e,  /* [1898] */
    (xdc_Char)0x76,  /* [1899] */
    (xdc_Char)0x61,  /* [1900] */
    (xdc_Char)0x6c,  /* [1901] */
    (xdc_Char)0x69,  /* [1902] */
    (xdc_Char)0x64,  /* [1903] */
    (xdc_Char)0x20,  /* [1904] */
    (xdc_Char)0x74,  /* [1905] */
    (xdc_Char)0x61,  /* [1906] */
    (xdc_Char)0x73,  /* [1907] */
    (xdc_Char)0x6b,  /* [1908] */
    (xdc_Char)0x20,  /* [1909] */
    (xdc_Char)0x70,  /* [1910] */
    (xdc_Char)0x72,  /* [1911] */
    (xdc_Char)0x69,  /* [1912] */
    (xdc_Char)0x6f,  /* [1913] */
    (xdc_Char)0x72,  /* [1914] */
    (xdc_Char)0x69,  /* [1915] */
    (xdc_Char)0x74,  /* [1916] */
    (xdc_Char)0x79,  /* [1917] */
    (xdc_Char)0x20,  /* [1918] */
    (xdc_Char)0x77,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x73,  /* [1921] */
    (xdc_Char)0x20,  /* [1922] */
    (xdc_Char)0x75,  /* [1923] */
    (xdc_Char)0x73,  /* [1924] */
    (xdc_Char)0x65,  /* [1925] */
    (xdc_Char)0x64,  /* [1926] */
    (xdc_Char)0x2e,  /* [1927] */
    (xdc_Char)0x0,  /* [1928] */
    (xdc_Char)0x41,  /* [1929] */
    (xdc_Char)0x5f,  /* [1930] */
    (xdc_Char)0x62,  /* [1931] */
    (xdc_Char)0x61,  /* [1932] */
    (xdc_Char)0x64,  /* [1933] */
    (xdc_Char)0x54,  /* [1934] */
    (xdc_Char)0x69,  /* [1935] */
    (xdc_Char)0x6d,  /* [1936] */
    (xdc_Char)0x65,  /* [1937] */
    (xdc_Char)0x6f,  /* [1938] */
    (xdc_Char)0x75,  /* [1939] */
    (xdc_Char)0x74,  /* [1940] */
    (xdc_Char)0x3a,  /* [1941] */
    (xdc_Char)0x20,  /* [1942] */
    (xdc_Char)0x43,  /* [1943] */
    (xdc_Char)0x61,  /* [1944] */
    (xdc_Char)0x6e,  /* [1945] */
    (xdc_Char)0x27,  /* [1946] */
    (xdc_Char)0x74,  /* [1947] */
    (xdc_Char)0x20,  /* [1948] */
    (xdc_Char)0x73,  /* [1949] */
    (xdc_Char)0x6c,  /* [1950] */
    (xdc_Char)0x65,  /* [1951] */
    (xdc_Char)0x65,  /* [1952] */
    (xdc_Char)0x70,  /* [1953] */
    (xdc_Char)0x20,  /* [1954] */
    (xdc_Char)0x46,  /* [1955] */
    (xdc_Char)0x4f,  /* [1956] */
    (xdc_Char)0x52,  /* [1957] */
    (xdc_Char)0x45,  /* [1958] */
    (xdc_Char)0x56,  /* [1959] */
    (xdc_Char)0x45,  /* [1960] */
    (xdc_Char)0x52,  /* [1961] */
    (xdc_Char)0x2e,  /* [1962] */
    (xdc_Char)0x0,  /* [1963] */
    (xdc_Char)0x41,  /* [1964] */
    (xdc_Char)0x5f,  /* [1965] */
    (xdc_Char)0x62,  /* [1966] */
    (xdc_Char)0x61,  /* [1967] */
    (xdc_Char)0x64,  /* [1968] */
    (xdc_Char)0x41,  /* [1969] */
    (xdc_Char)0x66,  /* [1970] */
    (xdc_Char)0x66,  /* [1971] */
    (xdc_Char)0x69,  /* [1972] */
    (xdc_Char)0x6e,  /* [1973] */
    (xdc_Char)0x69,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x79,  /* [1976] */
    (xdc_Char)0x3a,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x49,  /* [1979] */
    (xdc_Char)0x6e,  /* [1980] */
    (xdc_Char)0x76,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x6c,  /* [1983] */
    (xdc_Char)0x69,  /* [1984] */
    (xdc_Char)0x64,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x61,  /* [1987] */
    (xdc_Char)0x66,  /* [1988] */
    (xdc_Char)0x66,  /* [1989] */
    (xdc_Char)0x69,  /* [1990] */
    (xdc_Char)0x6e,  /* [1991] */
    (xdc_Char)0x69,  /* [1992] */
    (xdc_Char)0x74,  /* [1993] */
    (xdc_Char)0x79,  /* [1994] */
    (xdc_Char)0x2e,  /* [1995] */
    (xdc_Char)0x0,  /* [1996] */
    (xdc_Char)0x41,  /* [1997] */
    (xdc_Char)0x5f,  /* [1998] */
    (xdc_Char)0x73,  /* [1999] */
    (xdc_Char)0x6c,  /* [2000] */
    (xdc_Char)0x65,  /* [2001] */
    (xdc_Char)0x65,  /* [2002] */
    (xdc_Char)0x70,  /* [2003] */
    (xdc_Char)0x54,  /* [2004] */
    (xdc_Char)0x61,  /* [2005] */
    (xdc_Char)0x73,  /* [2006] */
    (xdc_Char)0x6b,  /* [2007] */
    (xdc_Char)0x44,  /* [2008] */
    (xdc_Char)0x69,  /* [2009] */
    (xdc_Char)0x73,  /* [2010] */
    (xdc_Char)0x61,  /* [2011] */
    (xdc_Char)0x62,  /* [2012] */
    (xdc_Char)0x6c,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x64,  /* [2015] */
    (xdc_Char)0x3a,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x43,  /* [2018] */
    (xdc_Char)0x61,  /* [2019] */
    (xdc_Char)0x6e,  /* [2020] */
    (xdc_Char)0x6e,  /* [2021] */
    (xdc_Char)0x6f,  /* [2022] */
    (xdc_Char)0x74,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x63,  /* [2025] */
    (xdc_Char)0x61,  /* [2026] */
    (xdc_Char)0x6c,  /* [2027] */
    (xdc_Char)0x6c,  /* [2028] */
    (xdc_Char)0x20,  /* [2029] */
    (xdc_Char)0x54,  /* [2030] */
    (xdc_Char)0x61,  /* [2031] */
    (xdc_Char)0x73,  /* [2032] */
    (xdc_Char)0x6b,  /* [2033] */
    (xdc_Char)0x5f,  /* [2034] */
    (xdc_Char)0x73,  /* [2035] */
    (xdc_Char)0x6c,  /* [2036] */
    (xdc_Char)0x65,  /* [2037] */
    (xdc_Char)0x65,  /* [2038] */
    (xdc_Char)0x70,  /* [2039] */
    (xdc_Char)0x28,  /* [2040] */
    (xdc_Char)0x29,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x77,  /* [2043] */
    (xdc_Char)0x68,  /* [2044] */
    (xdc_Char)0x69,  /* [2045] */
    (xdc_Char)0x6c,  /* [2046] */
    (xdc_Char)0x65,  /* [2047] */
    (xdc_Char)0x20,  /* [2048] */
    (xdc_Char)0x74,  /* [2049] */
    (xdc_Char)0x68,  /* [2050] */
    (xdc_Char)0x65,  /* [2051] */
    (xdc_Char)0x20,  /* [2052] */
    (xdc_Char)0x54,  /* [2053] */
    (xdc_Char)0x61,  /* [2054] */
    (xdc_Char)0x73,  /* [2055] */
    (xdc_Char)0x6b,  /* [2056] */
    (xdc_Char)0x20,  /* [2057] */
    (xdc_Char)0x73,  /* [2058] */
    (xdc_Char)0x63,  /* [2059] */
    (xdc_Char)0x68,  /* [2060] */
    (xdc_Char)0x65,  /* [2061] */
    (xdc_Char)0x64,  /* [2062] */
    (xdc_Char)0x75,  /* [2063] */
    (xdc_Char)0x6c,  /* [2064] */
    (xdc_Char)0x65,  /* [2065] */
    (xdc_Char)0x72,  /* [2066] */
    (xdc_Char)0x20,  /* [2067] */
    (xdc_Char)0x69,  /* [2068] */
    (xdc_Char)0x73,  /* [2069] */
    (xdc_Char)0x20,  /* [2070] */
    (xdc_Char)0x64,  /* [2071] */
    (xdc_Char)0x69,  /* [2072] */
    (xdc_Char)0x73,  /* [2073] */
    (xdc_Char)0x61,  /* [2074] */
    (xdc_Char)0x62,  /* [2075] */
    (xdc_Char)0x6c,  /* [2076] */
    (xdc_Char)0x65,  /* [2077] */
    (xdc_Char)0x64,  /* [2078] */
    (xdc_Char)0x2e,  /* [2079] */
    (xdc_Char)0x0,  /* [2080] */
    (xdc_Char)0x41,  /* [2081] */
    (xdc_Char)0x5f,  /* [2082] */
    (xdc_Char)0x69,  /* [2083] */
    (xdc_Char)0x6e,  /* [2084] */
    (xdc_Char)0x76,  /* [2085] */
    (xdc_Char)0x61,  /* [2086] */
    (xdc_Char)0x6c,  /* [2087] */
    (xdc_Char)0x69,  /* [2088] */
    (xdc_Char)0x64,  /* [2089] */
    (xdc_Char)0x43,  /* [2090] */
    (xdc_Char)0x6f,  /* [2091] */
    (xdc_Char)0x72,  /* [2092] */
    (xdc_Char)0x65,  /* [2093] */
    (xdc_Char)0x49,  /* [2094] */
    (xdc_Char)0x64,  /* [2095] */
    (xdc_Char)0x3a,  /* [2096] */
    (xdc_Char)0x20,  /* [2097] */
    (xdc_Char)0x43,  /* [2098] */
    (xdc_Char)0x61,  /* [2099] */
    (xdc_Char)0x6e,  /* [2100] */
    (xdc_Char)0x6e,  /* [2101] */
    (xdc_Char)0x6f,  /* [2102] */
    (xdc_Char)0x74,  /* [2103] */
    (xdc_Char)0x20,  /* [2104] */
    (xdc_Char)0x70,  /* [2105] */
    (xdc_Char)0x61,  /* [2106] */
    (xdc_Char)0x73,  /* [2107] */
    (xdc_Char)0x73,  /* [2108] */
    (xdc_Char)0x20,  /* [2109] */
    (xdc_Char)0x61,  /* [2110] */
    (xdc_Char)0x20,  /* [2111] */
    (xdc_Char)0x6e,  /* [2112] */
    (xdc_Char)0x6f,  /* [2113] */
    (xdc_Char)0x6e,  /* [2114] */
    (xdc_Char)0x2d,  /* [2115] */
    (xdc_Char)0x7a,  /* [2116] */
    (xdc_Char)0x65,  /* [2117] */
    (xdc_Char)0x72,  /* [2118] */
    (xdc_Char)0x6f,  /* [2119] */
    (xdc_Char)0x20,  /* [2120] */
    (xdc_Char)0x43,  /* [2121] */
    (xdc_Char)0x6f,  /* [2122] */
    (xdc_Char)0x72,  /* [2123] */
    (xdc_Char)0x65,  /* [2124] */
    (xdc_Char)0x49,  /* [2125] */
    (xdc_Char)0x64,  /* [2126] */
    (xdc_Char)0x20,  /* [2127] */
    (xdc_Char)0x69,  /* [2128] */
    (xdc_Char)0x6e,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x61,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x6e,  /* [2133] */
    (xdc_Char)0x6f,  /* [2134] */
    (xdc_Char)0x6e,  /* [2135] */
    (xdc_Char)0x2d,  /* [2136] */
    (xdc_Char)0x53,  /* [2137] */
    (xdc_Char)0x4d,  /* [2138] */
    (xdc_Char)0x50,  /* [2139] */
    (xdc_Char)0x20,  /* [2140] */
    (xdc_Char)0x61,  /* [2141] */
    (xdc_Char)0x70,  /* [2142] */
    (xdc_Char)0x70,  /* [2143] */
    (xdc_Char)0x6c,  /* [2144] */
    (xdc_Char)0x69,  /* [2145] */
    (xdc_Char)0x63,  /* [2146] */
    (xdc_Char)0x61,  /* [2147] */
    (xdc_Char)0x74,  /* [2148] */
    (xdc_Char)0x69,  /* [2149] */
    (xdc_Char)0x6f,  /* [2150] */
    (xdc_Char)0x6e,  /* [2151] */
    (xdc_Char)0x2e,  /* [2152] */
    (xdc_Char)0x0,  /* [2153] */
    (xdc_Char)0x41,  /* [2154] */
    (xdc_Char)0x5f,  /* [2155] */
    (xdc_Char)0x62,  /* [2156] */
    (xdc_Char)0x61,  /* [2157] */
    (xdc_Char)0x64,  /* [2158] */
    (xdc_Char)0x43,  /* [2159] */
    (xdc_Char)0x6f,  /* [2160] */
    (xdc_Char)0x6e,  /* [2161] */
    (xdc_Char)0x74,  /* [2162] */
    (xdc_Char)0x65,  /* [2163] */
    (xdc_Char)0x78,  /* [2164] */
    (xdc_Char)0x74,  /* [2165] */
    (xdc_Char)0x3a,  /* [2166] */
    (xdc_Char)0x20,  /* [2167] */
    (xdc_Char)0x62,  /* [2168] */
    (xdc_Char)0x61,  /* [2169] */
    (xdc_Char)0x64,  /* [2170] */
    (xdc_Char)0x20,  /* [2171] */
    (xdc_Char)0x63,  /* [2172] */
    (xdc_Char)0x61,  /* [2173] */
    (xdc_Char)0x6c,  /* [2174] */
    (xdc_Char)0x6c,  /* [2175] */
    (xdc_Char)0x69,  /* [2176] */
    (xdc_Char)0x6e,  /* [2177] */
    (xdc_Char)0x67,  /* [2178] */
    (xdc_Char)0x20,  /* [2179] */
    (xdc_Char)0x63,  /* [2180] */
    (xdc_Char)0x6f,  /* [2181] */
    (xdc_Char)0x6e,  /* [2182] */
    (xdc_Char)0x74,  /* [2183] */
    (xdc_Char)0x65,  /* [2184] */
    (xdc_Char)0x78,  /* [2185] */
    (xdc_Char)0x74,  /* [2186] */
    (xdc_Char)0x2e,  /* [2187] */
    (xdc_Char)0x20,  /* [2188] */
    (xdc_Char)0x4d,  /* [2189] */
    (xdc_Char)0x61,  /* [2190] */
    (xdc_Char)0x79,  /* [2191] */
    (xdc_Char)0x20,  /* [2192] */
    (xdc_Char)0x6e,  /* [2193] */
    (xdc_Char)0x6f,  /* [2194] */
    (xdc_Char)0x74,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x62,  /* [2197] */
    (xdc_Char)0x65,  /* [2198] */
    (xdc_Char)0x20,  /* [2199] */
    (xdc_Char)0x65,  /* [2200] */
    (xdc_Char)0x6e,  /* [2201] */
    (xdc_Char)0x74,  /* [2202] */
    (xdc_Char)0x65,  /* [2203] */
    (xdc_Char)0x72,  /* [2204] */
    (xdc_Char)0x65,  /* [2205] */
    (xdc_Char)0x64,  /* [2206] */
    (xdc_Char)0x20,  /* [2207] */
    (xdc_Char)0x66,  /* [2208] */
    (xdc_Char)0x72,  /* [2209] */
    (xdc_Char)0x6f,  /* [2210] */
    (xdc_Char)0x6d,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x61,  /* [2213] */
    (xdc_Char)0x20,  /* [2214] */
    (xdc_Char)0x68,  /* [2215] */
    (xdc_Char)0x61,  /* [2216] */
    (xdc_Char)0x72,  /* [2217] */
    (xdc_Char)0x64,  /* [2218] */
    (xdc_Char)0x77,  /* [2219] */
    (xdc_Char)0x61,  /* [2220] */
    (xdc_Char)0x72,  /* [2221] */
    (xdc_Char)0x65,  /* [2222] */
    (xdc_Char)0x20,  /* [2223] */
    (xdc_Char)0x69,  /* [2224] */
    (xdc_Char)0x6e,  /* [2225] */
    (xdc_Char)0x74,  /* [2226] */
    (xdc_Char)0x65,  /* [2227] */
    (xdc_Char)0x72,  /* [2228] */
    (xdc_Char)0x72,  /* [2229] */
    (xdc_Char)0x75,  /* [2230] */
    (xdc_Char)0x70,  /* [2231] */
    (xdc_Char)0x74,  /* [2232] */
    (xdc_Char)0x20,  /* [2233] */
    (xdc_Char)0x74,  /* [2234] */
    (xdc_Char)0x68,  /* [2235] */
    (xdc_Char)0x72,  /* [2236] */
    (xdc_Char)0x65,  /* [2237] */
    (xdc_Char)0x61,  /* [2238] */
    (xdc_Char)0x64,  /* [2239] */
    (xdc_Char)0x2e,  /* [2240] */
    (xdc_Char)0x0,  /* [2241] */
    (xdc_Char)0x41,  /* [2242] */
    (xdc_Char)0x5f,  /* [2243] */
    (xdc_Char)0x62,  /* [2244] */
    (xdc_Char)0x61,  /* [2245] */
    (xdc_Char)0x64,  /* [2246] */
    (xdc_Char)0x43,  /* [2247] */
    (xdc_Char)0x6f,  /* [2248] */
    (xdc_Char)0x6e,  /* [2249] */
    (xdc_Char)0x74,  /* [2250] */
    (xdc_Char)0x65,  /* [2251] */
    (xdc_Char)0x78,  /* [2252] */
    (xdc_Char)0x74,  /* [2253] */
    (xdc_Char)0x3a,  /* [2254] */
    (xdc_Char)0x20,  /* [2255] */
    (xdc_Char)0x62,  /* [2256] */
    (xdc_Char)0x61,  /* [2257] */
    (xdc_Char)0x64,  /* [2258] */
    (xdc_Char)0x20,  /* [2259] */
    (xdc_Char)0x63,  /* [2260] */
    (xdc_Char)0x61,  /* [2261] */
    (xdc_Char)0x6c,  /* [2262] */
    (xdc_Char)0x6c,  /* [2263] */
    (xdc_Char)0x69,  /* [2264] */
    (xdc_Char)0x6e,  /* [2265] */
    (xdc_Char)0x67,  /* [2266] */
    (xdc_Char)0x20,  /* [2267] */
    (xdc_Char)0x63,  /* [2268] */
    (xdc_Char)0x6f,  /* [2269] */
    (xdc_Char)0x6e,  /* [2270] */
    (xdc_Char)0x74,  /* [2271] */
    (xdc_Char)0x65,  /* [2272] */
    (xdc_Char)0x78,  /* [2273] */
    (xdc_Char)0x74,  /* [2274] */
    (xdc_Char)0x2e,  /* [2275] */
    (xdc_Char)0x20,  /* [2276] */
    (xdc_Char)0x4d,  /* [2277] */
    (xdc_Char)0x61,  /* [2278] */
    (xdc_Char)0x79,  /* [2279] */
    (xdc_Char)0x20,  /* [2280] */
    (xdc_Char)0x6e,  /* [2281] */
    (xdc_Char)0x6f,  /* [2282] */
    (xdc_Char)0x74,  /* [2283] */
    (xdc_Char)0x20,  /* [2284] */
    (xdc_Char)0x62,  /* [2285] */
    (xdc_Char)0x65,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x65,  /* [2288] */
    (xdc_Char)0x6e,  /* [2289] */
    (xdc_Char)0x74,  /* [2290] */
    (xdc_Char)0x65,  /* [2291] */
    (xdc_Char)0x72,  /* [2292] */
    (xdc_Char)0x65,  /* [2293] */
    (xdc_Char)0x64,  /* [2294] */
    (xdc_Char)0x20,  /* [2295] */
    (xdc_Char)0x66,  /* [2296] */
    (xdc_Char)0x72,  /* [2297] */
    (xdc_Char)0x6f,  /* [2298] */
    (xdc_Char)0x6d,  /* [2299] */
    (xdc_Char)0x20,  /* [2300] */
    (xdc_Char)0x61,  /* [2301] */
    (xdc_Char)0x20,  /* [2302] */
    (xdc_Char)0x73,  /* [2303] */
    (xdc_Char)0x6f,  /* [2304] */
    (xdc_Char)0x66,  /* [2305] */
    (xdc_Char)0x74,  /* [2306] */
    (xdc_Char)0x77,  /* [2307] */
    (xdc_Char)0x61,  /* [2308] */
    (xdc_Char)0x72,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x20,  /* [2311] */
    (xdc_Char)0x6f,  /* [2312] */
    (xdc_Char)0x72,  /* [2313] */
    (xdc_Char)0x20,  /* [2314] */
    (xdc_Char)0x68,  /* [2315] */
    (xdc_Char)0x61,  /* [2316] */
    (xdc_Char)0x72,  /* [2317] */
    (xdc_Char)0x64,  /* [2318] */
    (xdc_Char)0x77,  /* [2319] */
    (xdc_Char)0x61,  /* [2320] */
    (xdc_Char)0x72,  /* [2321] */
    (xdc_Char)0x65,  /* [2322] */
    (xdc_Char)0x20,  /* [2323] */
    (xdc_Char)0x69,  /* [2324] */
    (xdc_Char)0x6e,  /* [2325] */
    (xdc_Char)0x74,  /* [2326] */
    (xdc_Char)0x65,  /* [2327] */
    (xdc_Char)0x72,  /* [2328] */
    (xdc_Char)0x72,  /* [2329] */
    (xdc_Char)0x75,  /* [2330] */
    (xdc_Char)0x70,  /* [2331] */
    (xdc_Char)0x74,  /* [2332] */
    (xdc_Char)0x20,  /* [2333] */
    (xdc_Char)0x74,  /* [2334] */
    (xdc_Char)0x68,  /* [2335] */
    (xdc_Char)0x72,  /* [2336] */
    (xdc_Char)0x65,  /* [2337] */
    (xdc_Char)0x61,  /* [2338] */
    (xdc_Char)0x64,  /* [2339] */
    (xdc_Char)0x2e,  /* [2340] */
    (xdc_Char)0x0,  /* [2341] */
    (xdc_Char)0x41,  /* [2342] */
    (xdc_Char)0x5f,  /* [2343] */
    (xdc_Char)0x62,  /* [2344] */
    (xdc_Char)0x61,  /* [2345] */
    (xdc_Char)0x64,  /* [2346] */
    (xdc_Char)0x43,  /* [2347] */
    (xdc_Char)0x6f,  /* [2348] */
    (xdc_Char)0x6e,  /* [2349] */
    (xdc_Char)0x74,  /* [2350] */
    (xdc_Char)0x65,  /* [2351] */
    (xdc_Char)0x78,  /* [2352] */
    (xdc_Char)0x74,  /* [2353] */
    (xdc_Char)0x3a,  /* [2354] */
    (xdc_Char)0x20,  /* [2355] */
    (xdc_Char)0x62,  /* [2356] */
    (xdc_Char)0x61,  /* [2357] */
    (xdc_Char)0x64,  /* [2358] */
    (xdc_Char)0x20,  /* [2359] */
    (xdc_Char)0x63,  /* [2360] */
    (xdc_Char)0x61,  /* [2361] */
    (xdc_Char)0x6c,  /* [2362] */
    (xdc_Char)0x6c,  /* [2363] */
    (xdc_Char)0x69,  /* [2364] */
    (xdc_Char)0x6e,  /* [2365] */
    (xdc_Char)0x67,  /* [2366] */
    (xdc_Char)0x20,  /* [2367] */
    (xdc_Char)0x63,  /* [2368] */
    (xdc_Char)0x6f,  /* [2369] */
    (xdc_Char)0x6e,  /* [2370] */
    (xdc_Char)0x74,  /* [2371] */
    (xdc_Char)0x65,  /* [2372] */
    (xdc_Char)0x78,  /* [2373] */
    (xdc_Char)0x74,  /* [2374] */
    (xdc_Char)0x2e,  /* [2375] */
    (xdc_Char)0x20,  /* [2376] */
    (xdc_Char)0x53,  /* [2377] */
    (xdc_Char)0x65,  /* [2378] */
    (xdc_Char)0x65,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x47,  /* [2381] */
    (xdc_Char)0x61,  /* [2382] */
    (xdc_Char)0x74,  /* [2383] */
    (xdc_Char)0x65,  /* [2384] */
    (xdc_Char)0x4d,  /* [2385] */
    (xdc_Char)0x75,  /* [2386] */
    (xdc_Char)0x74,  /* [2387] */
    (xdc_Char)0x65,  /* [2388] */
    (xdc_Char)0x78,  /* [2389] */
    (xdc_Char)0x50,  /* [2390] */
    (xdc_Char)0x72,  /* [2391] */
    (xdc_Char)0x69,  /* [2392] */
    (xdc_Char)0x20,  /* [2393] */
    (xdc_Char)0x41,  /* [2394] */
    (xdc_Char)0x50,  /* [2395] */
    (xdc_Char)0x49,  /* [2396] */
    (xdc_Char)0x20,  /* [2397] */
    (xdc_Char)0x64,  /* [2398] */
    (xdc_Char)0x6f,  /* [2399] */
    (xdc_Char)0x63,  /* [2400] */
    (xdc_Char)0x20,  /* [2401] */
    (xdc_Char)0x66,  /* [2402] */
    (xdc_Char)0x6f,  /* [2403] */
    (xdc_Char)0x72,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x64,  /* [2406] */
    (xdc_Char)0x65,  /* [2407] */
    (xdc_Char)0x74,  /* [2408] */
    (xdc_Char)0x61,  /* [2409] */
    (xdc_Char)0x69,  /* [2410] */
    (xdc_Char)0x6c,  /* [2411] */
    (xdc_Char)0x73,  /* [2412] */
    (xdc_Char)0x2e,  /* [2413] */
    (xdc_Char)0x0,  /* [2414] */
    (xdc_Char)0x41,  /* [2415] */
    (xdc_Char)0x5f,  /* [2416] */
    (xdc_Char)0x65,  /* [2417] */
    (xdc_Char)0x6e,  /* [2418] */
    (xdc_Char)0x74,  /* [2419] */
    (xdc_Char)0x65,  /* [2420] */
    (xdc_Char)0x72,  /* [2421] */
    (xdc_Char)0x54,  /* [2422] */
    (xdc_Char)0x61,  /* [2423] */
    (xdc_Char)0x73,  /* [2424] */
    (xdc_Char)0x6b,  /* [2425] */
    (xdc_Char)0x44,  /* [2426] */
    (xdc_Char)0x69,  /* [2427] */
    (xdc_Char)0x73,  /* [2428] */
    (xdc_Char)0x61,  /* [2429] */
    (xdc_Char)0x62,  /* [2430] */
    (xdc_Char)0x6c,  /* [2431] */
    (xdc_Char)0x65,  /* [2432] */
    (xdc_Char)0x64,  /* [2433] */
    (xdc_Char)0x3a,  /* [2434] */
    (xdc_Char)0x20,  /* [2435] */
    (xdc_Char)0x43,  /* [2436] */
    (xdc_Char)0x61,  /* [2437] */
    (xdc_Char)0x6e,  /* [2438] */
    (xdc_Char)0x6e,  /* [2439] */
    (xdc_Char)0x6f,  /* [2440] */
    (xdc_Char)0x74,  /* [2441] */
    (xdc_Char)0x20,  /* [2442] */
    (xdc_Char)0x63,  /* [2443] */
    (xdc_Char)0x61,  /* [2444] */
    (xdc_Char)0x6c,  /* [2445] */
    (xdc_Char)0x6c,  /* [2446] */
    (xdc_Char)0x20,  /* [2447] */
    (xdc_Char)0x47,  /* [2448] */
    (xdc_Char)0x61,  /* [2449] */
    (xdc_Char)0x74,  /* [2450] */
    (xdc_Char)0x65,  /* [2451] */
    (xdc_Char)0x4d,  /* [2452] */
    (xdc_Char)0x75,  /* [2453] */
    (xdc_Char)0x74,  /* [2454] */
    (xdc_Char)0x65,  /* [2455] */
    (xdc_Char)0x78,  /* [2456] */
    (xdc_Char)0x50,  /* [2457] */
    (xdc_Char)0x72,  /* [2458] */
    (xdc_Char)0x69,  /* [2459] */
    (xdc_Char)0x5f,  /* [2460] */
    (xdc_Char)0x65,  /* [2461] */
    (xdc_Char)0x6e,  /* [2462] */
    (xdc_Char)0x74,  /* [2463] */
    (xdc_Char)0x65,  /* [2464] */
    (xdc_Char)0x72,  /* [2465] */
    (xdc_Char)0x28,  /* [2466] */
    (xdc_Char)0x29,  /* [2467] */
    (xdc_Char)0x20,  /* [2468] */
    (xdc_Char)0x77,  /* [2469] */
    (xdc_Char)0x68,  /* [2470] */
    (xdc_Char)0x69,  /* [2471] */
    (xdc_Char)0x6c,  /* [2472] */
    (xdc_Char)0x65,  /* [2473] */
    (xdc_Char)0x20,  /* [2474] */
    (xdc_Char)0x74,  /* [2475] */
    (xdc_Char)0x68,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x20,  /* [2478] */
    (xdc_Char)0x54,  /* [2479] */
    (xdc_Char)0x61,  /* [2480] */
    (xdc_Char)0x73,  /* [2481] */
    (xdc_Char)0x6b,  /* [2482] */
    (xdc_Char)0x20,  /* [2483] */
    (xdc_Char)0x6f,  /* [2484] */
    (xdc_Char)0x72,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x53,  /* [2487] */
    (xdc_Char)0x77,  /* [2488] */
    (xdc_Char)0x69,  /* [2489] */
    (xdc_Char)0x20,  /* [2490] */
    (xdc_Char)0x73,  /* [2491] */
    (xdc_Char)0x63,  /* [2492] */
    (xdc_Char)0x68,  /* [2493] */
    (xdc_Char)0x65,  /* [2494] */
    (xdc_Char)0x64,  /* [2495] */
    (xdc_Char)0x75,  /* [2496] */
    (xdc_Char)0x6c,  /* [2497] */
    (xdc_Char)0x65,  /* [2498] */
    (xdc_Char)0x72,  /* [2499] */
    (xdc_Char)0x20,  /* [2500] */
    (xdc_Char)0x69,  /* [2501] */
    (xdc_Char)0x73,  /* [2502] */
    (xdc_Char)0x20,  /* [2503] */
    (xdc_Char)0x64,  /* [2504] */
    (xdc_Char)0x69,  /* [2505] */
    (xdc_Char)0x73,  /* [2506] */
    (xdc_Char)0x61,  /* [2507] */
    (xdc_Char)0x62,  /* [2508] */
    (xdc_Char)0x6c,  /* [2509] */
    (xdc_Char)0x65,  /* [2510] */
    (xdc_Char)0x64,  /* [2511] */
    (xdc_Char)0x2e,  /* [2512] */
    (xdc_Char)0x0,  /* [2513] */
    (xdc_Char)0x41,  /* [2514] */
    (xdc_Char)0x5f,  /* [2515] */
    (xdc_Char)0x62,  /* [2516] */
    (xdc_Char)0x61,  /* [2517] */
    (xdc_Char)0x64,  /* [2518] */
    (xdc_Char)0x43,  /* [2519] */
    (xdc_Char)0x6f,  /* [2520] */
    (xdc_Char)0x6e,  /* [2521] */
    (xdc_Char)0x74,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x78,  /* [2524] */
    (xdc_Char)0x74,  /* [2525] */
    (xdc_Char)0x3a,  /* [2526] */
    (xdc_Char)0x20,  /* [2527] */
    (xdc_Char)0x62,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x64,  /* [2530] */
    (xdc_Char)0x20,  /* [2531] */
    (xdc_Char)0x63,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x6c,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x69,  /* [2536] */
    (xdc_Char)0x6e,  /* [2537] */
    (xdc_Char)0x67,  /* [2538] */
    (xdc_Char)0x20,  /* [2539] */
    (xdc_Char)0x63,  /* [2540] */
    (xdc_Char)0x6f,  /* [2541] */
    (xdc_Char)0x6e,  /* [2542] */
    (xdc_Char)0x74,  /* [2543] */
    (xdc_Char)0x65,  /* [2544] */
    (xdc_Char)0x78,  /* [2545] */
    (xdc_Char)0x74,  /* [2546] */
    (xdc_Char)0x2e,  /* [2547] */
    (xdc_Char)0x20,  /* [2548] */
    (xdc_Char)0x53,  /* [2549] */
    (xdc_Char)0x65,  /* [2550] */
    (xdc_Char)0x65,  /* [2551] */
    (xdc_Char)0x20,  /* [2552] */
    (xdc_Char)0x47,  /* [2553] */
    (xdc_Char)0x61,  /* [2554] */
    (xdc_Char)0x74,  /* [2555] */
    (xdc_Char)0x65,  /* [2556] */
    (xdc_Char)0x4d,  /* [2557] */
    (xdc_Char)0x75,  /* [2558] */
    (xdc_Char)0x74,  /* [2559] */
    (xdc_Char)0x65,  /* [2560] */
    (xdc_Char)0x78,  /* [2561] */
    (xdc_Char)0x20,  /* [2562] */
    (xdc_Char)0x41,  /* [2563] */
    (xdc_Char)0x50,  /* [2564] */
    (xdc_Char)0x49,  /* [2565] */
    (xdc_Char)0x20,  /* [2566] */
    (xdc_Char)0x64,  /* [2567] */
    (xdc_Char)0x6f,  /* [2568] */
    (xdc_Char)0x63,  /* [2569] */
    (xdc_Char)0x20,  /* [2570] */
    (xdc_Char)0x66,  /* [2571] */
    (xdc_Char)0x6f,  /* [2572] */
    (xdc_Char)0x72,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x64,  /* [2575] */
    (xdc_Char)0x65,  /* [2576] */
    (xdc_Char)0x74,  /* [2577] */
    (xdc_Char)0x61,  /* [2578] */
    (xdc_Char)0x69,  /* [2579] */
    (xdc_Char)0x6c,  /* [2580] */
    (xdc_Char)0x73,  /* [2581] */
    (xdc_Char)0x2e,  /* [2582] */
    (xdc_Char)0x0,  /* [2583] */
    (xdc_Char)0x41,  /* [2584] */
    (xdc_Char)0x5f,  /* [2585] */
    (xdc_Char)0x62,  /* [2586] */
    (xdc_Char)0x61,  /* [2587] */
    (xdc_Char)0x64,  /* [2588] */
    (xdc_Char)0x43,  /* [2589] */
    (xdc_Char)0x6f,  /* [2590] */
    (xdc_Char)0x6e,  /* [2591] */
    (xdc_Char)0x74,  /* [2592] */
    (xdc_Char)0x65,  /* [2593] */
    (xdc_Char)0x78,  /* [2594] */
    (xdc_Char)0x74,  /* [2595] */
    (xdc_Char)0x3a,  /* [2596] */
    (xdc_Char)0x20,  /* [2597] */
    (xdc_Char)0x62,  /* [2598] */
    (xdc_Char)0x61,  /* [2599] */
    (xdc_Char)0x64,  /* [2600] */
    (xdc_Char)0x20,  /* [2601] */
    (xdc_Char)0x63,  /* [2602] */
    (xdc_Char)0x61,  /* [2603] */
    (xdc_Char)0x6c,  /* [2604] */
    (xdc_Char)0x6c,  /* [2605] */
    (xdc_Char)0x69,  /* [2606] */
    (xdc_Char)0x6e,  /* [2607] */
    (xdc_Char)0x67,  /* [2608] */
    (xdc_Char)0x20,  /* [2609] */
    (xdc_Char)0x63,  /* [2610] */
    (xdc_Char)0x6f,  /* [2611] */
    (xdc_Char)0x6e,  /* [2612] */
    (xdc_Char)0x74,  /* [2613] */
    (xdc_Char)0x65,  /* [2614] */
    (xdc_Char)0x78,  /* [2615] */
    (xdc_Char)0x74,  /* [2616] */
    (xdc_Char)0x2e,  /* [2617] */
    (xdc_Char)0x20,  /* [2618] */
    (xdc_Char)0x53,  /* [2619] */
    (xdc_Char)0x65,  /* [2620] */
    (xdc_Char)0x65,  /* [2621] */
    (xdc_Char)0x20,  /* [2622] */
    (xdc_Char)0x47,  /* [2623] */
    (xdc_Char)0x61,  /* [2624] */
    (xdc_Char)0x74,  /* [2625] */
    (xdc_Char)0x65,  /* [2626] */
    (xdc_Char)0x53,  /* [2627] */
    (xdc_Char)0x70,  /* [2628] */
    (xdc_Char)0x69,  /* [2629] */
    (xdc_Char)0x6e,  /* [2630] */
    (xdc_Char)0x6c,  /* [2631] */
    (xdc_Char)0x6f,  /* [2632] */
    (xdc_Char)0x63,  /* [2633] */
    (xdc_Char)0x6b,  /* [2634] */
    (xdc_Char)0x20,  /* [2635] */
    (xdc_Char)0x41,  /* [2636] */
    (xdc_Char)0x50,  /* [2637] */
    (xdc_Char)0x49,  /* [2638] */
    (xdc_Char)0x20,  /* [2639] */
    (xdc_Char)0x64,  /* [2640] */
    (xdc_Char)0x6f,  /* [2641] */
    (xdc_Char)0x63,  /* [2642] */
    (xdc_Char)0x20,  /* [2643] */
    (xdc_Char)0x66,  /* [2644] */
    (xdc_Char)0x6f,  /* [2645] */
    (xdc_Char)0x72,  /* [2646] */
    (xdc_Char)0x20,  /* [2647] */
    (xdc_Char)0x64,  /* [2648] */
    (xdc_Char)0x65,  /* [2649] */
    (xdc_Char)0x74,  /* [2650] */
    (xdc_Char)0x61,  /* [2651] */
    (xdc_Char)0x69,  /* [2652] */
    (xdc_Char)0x6c,  /* [2653] */
    (xdc_Char)0x73,  /* [2654] */
    (xdc_Char)0x2e,  /* [2655] */
    (xdc_Char)0x0,  /* [2656] */
    (xdc_Char)0x41,  /* [2657] */
    (xdc_Char)0x5f,  /* [2658] */
    (xdc_Char)0x69,  /* [2659] */
    (xdc_Char)0x6e,  /* [2660] */
    (xdc_Char)0x76,  /* [2661] */
    (xdc_Char)0x61,  /* [2662] */
    (xdc_Char)0x6c,  /* [2663] */
    (xdc_Char)0x69,  /* [2664] */
    (xdc_Char)0x64,  /* [2665] */
    (xdc_Char)0x51,  /* [2666] */
    (xdc_Char)0x75,  /* [2667] */
    (xdc_Char)0x61,  /* [2668] */
    (xdc_Char)0x6c,  /* [2669] */
    (xdc_Char)0x69,  /* [2670] */
    (xdc_Char)0x74,  /* [2671] */
    (xdc_Char)0x79,  /* [2672] */
    (xdc_Char)0x3a,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x53,  /* [2675] */
    (xdc_Char)0x65,  /* [2676] */
    (xdc_Char)0x65,  /* [2677] */
    (xdc_Char)0x20,  /* [2678] */
    (xdc_Char)0x47,  /* [2679] */
    (xdc_Char)0x61,  /* [2680] */
    (xdc_Char)0x74,  /* [2681] */
    (xdc_Char)0x65,  /* [2682] */
    (xdc_Char)0x53,  /* [2683] */
    (xdc_Char)0x70,  /* [2684] */
    (xdc_Char)0x69,  /* [2685] */
    (xdc_Char)0x6e,  /* [2686] */
    (xdc_Char)0x6c,  /* [2687] */
    (xdc_Char)0x6f,  /* [2688] */
    (xdc_Char)0x63,  /* [2689] */
    (xdc_Char)0x6b,  /* [2690] */
    (xdc_Char)0x20,  /* [2691] */
    (xdc_Char)0x41,  /* [2692] */
    (xdc_Char)0x50,  /* [2693] */
    (xdc_Char)0x49,  /* [2694] */
    (xdc_Char)0x20,  /* [2695] */
    (xdc_Char)0x64,  /* [2696] */
    (xdc_Char)0x6f,  /* [2697] */
    (xdc_Char)0x63,  /* [2698] */
    (xdc_Char)0x20,  /* [2699] */
    (xdc_Char)0x66,  /* [2700] */
    (xdc_Char)0x6f,  /* [2701] */
    (xdc_Char)0x72,  /* [2702] */
    (xdc_Char)0x20,  /* [2703] */
    (xdc_Char)0x64,  /* [2704] */
    (xdc_Char)0x65,  /* [2705] */
    (xdc_Char)0x74,  /* [2706] */
    (xdc_Char)0x61,  /* [2707] */
    (xdc_Char)0x69,  /* [2708] */
    (xdc_Char)0x6c,  /* [2709] */
    (xdc_Char)0x73,  /* [2710] */
    (xdc_Char)0x2e,  /* [2711] */
    (xdc_Char)0x0,  /* [2712] */
    (xdc_Char)0x41,  /* [2713] */
    (xdc_Char)0x5f,  /* [2714] */
    (xdc_Char)0x69,  /* [2715] */
    (xdc_Char)0x70,  /* [2716] */
    (xdc_Char)0x63,  /* [2717] */
    (xdc_Char)0x46,  /* [2718] */
    (xdc_Char)0x61,  /* [2719] */
    (xdc_Char)0x69,  /* [2720] */
    (xdc_Char)0x6c,  /* [2721] */
    (xdc_Char)0x65,  /* [2722] */
    (xdc_Char)0x64,  /* [2723] */
    (xdc_Char)0x3a,  /* [2724] */
    (xdc_Char)0x20,  /* [2725] */
    (xdc_Char)0x55,  /* [2726] */
    (xdc_Char)0x6e,  /* [2727] */
    (xdc_Char)0x65,  /* [2728] */
    (xdc_Char)0x78,  /* [2729] */
    (xdc_Char)0x70,  /* [2730] */
    (xdc_Char)0x65,  /* [2731] */
    (xdc_Char)0x63,  /* [2732] */
    (xdc_Char)0x74,  /* [2733] */
    (xdc_Char)0x65,  /* [2734] */
    (xdc_Char)0x64,  /* [2735] */
    (xdc_Char)0x20,  /* [2736] */
    (xdc_Char)0x4d,  /* [2737] */
    (xdc_Char)0x65,  /* [2738] */
    (xdc_Char)0x73,  /* [2739] */
    (xdc_Char)0x73,  /* [2740] */
    (xdc_Char)0x61,  /* [2741] */
    (xdc_Char)0x67,  /* [2742] */
    (xdc_Char)0x65,  /* [2743] */
    (xdc_Char)0x51,  /* [2744] */
    (xdc_Char)0x20,  /* [2745] */
    (xdc_Char)0x66,  /* [2746] */
    (xdc_Char)0x61,  /* [2747] */
    (xdc_Char)0x69,  /* [2748] */
    (xdc_Char)0x6c,  /* [2749] */
    (xdc_Char)0x65,  /* [2750] */
    (xdc_Char)0x64,  /* [2751] */
    (xdc_Char)0x0,  /* [2752] */
    (xdc_Char)0x41,  /* [2753] */
    (xdc_Char)0x5f,  /* [2754] */
    (xdc_Char)0x69,  /* [2755] */
    (xdc_Char)0x6e,  /* [2756] */
    (xdc_Char)0x76,  /* [2757] */
    (xdc_Char)0x61,  /* [2758] */
    (xdc_Char)0x6c,  /* [2759] */
    (xdc_Char)0x69,  /* [2760] */
    (xdc_Char)0x64,  /* [2761] */
    (xdc_Char)0x48,  /* [2762] */
    (xdc_Char)0x64,  /* [2763] */
    (xdc_Char)0x72,  /* [2764] */
    (xdc_Char)0x54,  /* [2765] */
    (xdc_Char)0x79,  /* [2766] */
    (xdc_Char)0x70,  /* [2767] */
    (xdc_Char)0x65,  /* [2768] */
    (xdc_Char)0x3a,  /* [2769] */
    (xdc_Char)0x20,  /* [2770] */
    (xdc_Char)0x49,  /* [2771] */
    (xdc_Char)0x6e,  /* [2772] */
    (xdc_Char)0x76,  /* [2773] */
    (xdc_Char)0x61,  /* [2774] */
    (xdc_Char)0x6c,  /* [2775] */
    (xdc_Char)0x69,  /* [2776] */
    (xdc_Char)0x64,  /* [2777] */
    (xdc_Char)0x20,  /* [2778] */
    (xdc_Char)0x48,  /* [2779] */
    (xdc_Char)0x64,  /* [2780] */
    (xdc_Char)0x72,  /* [2781] */
    (xdc_Char)0x54,  /* [2782] */
    (xdc_Char)0x79,  /* [2783] */
    (xdc_Char)0x70,  /* [2784] */
    (xdc_Char)0x65,  /* [2785] */
    (xdc_Char)0x20,  /* [2786] */
    (xdc_Char)0x73,  /* [2787] */
    (xdc_Char)0x70,  /* [2788] */
    (xdc_Char)0x65,  /* [2789] */
    (xdc_Char)0x63,  /* [2790] */
    (xdc_Char)0x69,  /* [2791] */
    (xdc_Char)0x66,  /* [2792] */
    (xdc_Char)0x69,  /* [2793] */
    (xdc_Char)0x65,  /* [2794] */
    (xdc_Char)0x64,  /* [2795] */
    (xdc_Char)0x0,  /* [2796] */
    (xdc_Char)0x41,  /* [2797] */
    (xdc_Char)0x5f,  /* [2798] */
    (xdc_Char)0x69,  /* [2799] */
    (xdc_Char)0x6e,  /* [2800] */
    (xdc_Char)0x76,  /* [2801] */
    (xdc_Char)0x61,  /* [2802] */
    (xdc_Char)0x6c,  /* [2803] */
    (xdc_Char)0x69,  /* [2804] */
    (xdc_Char)0x64,  /* [2805] */
    (xdc_Char)0x53,  /* [2806] */
    (xdc_Char)0x65,  /* [2807] */
    (xdc_Char)0x72,  /* [2808] */
    (xdc_Char)0x76,  /* [2809] */
    (xdc_Char)0x69,  /* [2810] */
    (xdc_Char)0x63,  /* [2811] */
    (xdc_Char)0x65,  /* [2812] */
    (xdc_Char)0x49,  /* [2813] */
    (xdc_Char)0x64,  /* [2814] */
    (xdc_Char)0x3a,  /* [2815] */
    (xdc_Char)0x20,  /* [2816] */
    (xdc_Char)0x53,  /* [2817] */
    (xdc_Char)0x65,  /* [2818] */
    (xdc_Char)0x72,  /* [2819] */
    (xdc_Char)0x76,  /* [2820] */
    (xdc_Char)0x69,  /* [2821] */
    (xdc_Char)0x63,  /* [2822] */
    (xdc_Char)0x65,  /* [2823] */
    (xdc_Char)0x49,  /* [2824] */
    (xdc_Char)0x64,  /* [2825] */
    (xdc_Char)0x20,  /* [2826] */
    (xdc_Char)0x6f,  /* [2827] */
    (xdc_Char)0x75,  /* [2828] */
    (xdc_Char)0x74,  /* [2829] */
    (xdc_Char)0x20,  /* [2830] */
    (xdc_Char)0x6f,  /* [2831] */
    (xdc_Char)0x66,  /* [2832] */
    (xdc_Char)0x20,  /* [2833] */
    (xdc_Char)0x72,  /* [2834] */
    (xdc_Char)0x61,  /* [2835] */
    (xdc_Char)0x6e,  /* [2836] */
    (xdc_Char)0x67,  /* [2837] */
    (xdc_Char)0x65,  /* [2838] */
    (xdc_Char)0x0,  /* [2839] */
    (xdc_Char)0x41,  /* [2840] */
    (xdc_Char)0x5f,  /* [2841] */
    (xdc_Char)0x69,  /* [2842] */
    (xdc_Char)0x6e,  /* [2843] */
    (xdc_Char)0x76,  /* [2844] */
    (xdc_Char)0x61,  /* [2845] */
    (xdc_Char)0x6c,  /* [2846] */
    (xdc_Char)0x69,  /* [2847] */
    (xdc_Char)0x64,  /* [2848] */
    (xdc_Char)0x50,  /* [2849] */
    (xdc_Char)0x72,  /* [2850] */
    (xdc_Char)0x6f,  /* [2851] */
    (xdc_Char)0x63,  /* [2852] */
    (xdc_Char)0x65,  /* [2853] */
    (xdc_Char)0x73,  /* [2854] */
    (xdc_Char)0x73,  /* [2855] */
    (xdc_Char)0x43,  /* [2856] */
    (xdc_Char)0x61,  /* [2857] */
    (xdc_Char)0x6c,  /* [2858] */
    (xdc_Char)0x6c,  /* [2859] */
    (xdc_Char)0x62,  /* [2860] */
    (xdc_Char)0x61,  /* [2861] */
    (xdc_Char)0x63,  /* [2862] */
    (xdc_Char)0x6b,  /* [2863] */
    (xdc_Char)0x46,  /* [2864] */
    (xdc_Char)0x78,  /* [2865] */
    (xdc_Char)0x6e,  /* [2866] */
    (xdc_Char)0x3a,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x43,  /* [2869] */
    (xdc_Char)0x61,  /* [2870] */
    (xdc_Char)0x6c,  /* [2871] */
    (xdc_Char)0x6c,  /* [2872] */
    (xdc_Char)0x62,  /* [2873] */
    (xdc_Char)0x61,  /* [2874] */
    (xdc_Char)0x63,  /* [2875] */
    (xdc_Char)0x6b,  /* [2876] */
    (xdc_Char)0x20,  /* [2877] */
    (xdc_Char)0x63,  /* [2878] */
    (xdc_Char)0x61,  /* [2879] */
    (xdc_Char)0x6e,  /* [2880] */
    (xdc_Char)0x6e,  /* [2881] */
    (xdc_Char)0x6f,  /* [2882] */
    (xdc_Char)0x74,  /* [2883] */
    (xdc_Char)0x20,  /* [2884] */
    (xdc_Char)0x62,  /* [2885] */
    (xdc_Char)0x65,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x4e,  /* [2888] */
    (xdc_Char)0x55,  /* [2889] */
    (xdc_Char)0x4c,  /* [2890] */
    (xdc_Char)0x4c,  /* [2891] */
    (xdc_Char)0x0,  /* [2892] */
    (xdc_Char)0x41,  /* [2893] */
    (xdc_Char)0x5f,  /* [2894] */
    (xdc_Char)0x7a,  /* [2895] */
    (xdc_Char)0x65,  /* [2896] */
    (xdc_Char)0x72,  /* [2897] */
    (xdc_Char)0x6f,  /* [2898] */
    (xdc_Char)0x54,  /* [2899] */
    (xdc_Char)0x69,  /* [2900] */
    (xdc_Char)0x6d,  /* [2901] */
    (xdc_Char)0x65,  /* [2902] */
    (xdc_Char)0x6f,  /* [2903] */
    (xdc_Char)0x75,  /* [2904] */
    (xdc_Char)0x74,  /* [2905] */
    (xdc_Char)0x3a,  /* [2906] */
    (xdc_Char)0x20,  /* [2907] */
    (xdc_Char)0x54,  /* [2908] */
    (xdc_Char)0x69,  /* [2909] */
    (xdc_Char)0x6d,  /* [2910] */
    (xdc_Char)0x65,  /* [2911] */
    (xdc_Char)0x6f,  /* [2912] */
    (xdc_Char)0x75,  /* [2913] */
    (xdc_Char)0x74,  /* [2914] */
    (xdc_Char)0x20,  /* [2915] */
    (xdc_Char)0x76,  /* [2916] */
    (xdc_Char)0x61,  /* [2917] */
    (xdc_Char)0x6c,  /* [2918] */
    (xdc_Char)0x75,  /* [2919] */
    (xdc_Char)0x65,  /* [2920] */
    (xdc_Char)0x20,  /* [2921] */
    (xdc_Char)0x61,  /* [2922] */
    (xdc_Char)0x6e,  /* [2923] */
    (xdc_Char)0x6e,  /* [2924] */
    (xdc_Char)0x6f,  /* [2925] */
    (xdc_Char)0x74,  /* [2926] */
    (xdc_Char)0x20,  /* [2927] */
    (xdc_Char)0x62,  /* [2928] */
    (xdc_Char)0x65,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x7a,  /* [2931] */
    (xdc_Char)0x65,  /* [2932] */
    (xdc_Char)0x72,  /* [2933] */
    (xdc_Char)0x6f,  /* [2934] */
    (xdc_Char)0x0,  /* [2935] */
    (xdc_Char)0x41,  /* [2936] */
    (xdc_Char)0x5f,  /* [2937] */
    (xdc_Char)0x69,  /* [2938] */
    (xdc_Char)0x6e,  /* [2939] */
    (xdc_Char)0x76,  /* [2940] */
    (xdc_Char)0x61,  /* [2941] */
    (xdc_Char)0x6c,  /* [2942] */
    (xdc_Char)0x69,  /* [2943] */
    (xdc_Char)0x64,  /* [2944] */
    (xdc_Char)0x4b,  /* [2945] */
    (xdc_Char)0x65,  /* [2946] */
    (xdc_Char)0x79,  /* [2947] */
    (xdc_Char)0x3a,  /* [2948] */
    (xdc_Char)0x20,  /* [2949] */
    (xdc_Char)0x74,  /* [2950] */
    (xdc_Char)0x68,  /* [2951] */
    (xdc_Char)0x65,  /* [2952] */
    (xdc_Char)0x20,  /* [2953] */
    (xdc_Char)0x6b,  /* [2954] */
    (xdc_Char)0x65,  /* [2955] */
    (xdc_Char)0x79,  /* [2956] */
    (xdc_Char)0x20,  /* [2957] */
    (xdc_Char)0x6d,  /* [2958] */
    (xdc_Char)0x75,  /* [2959] */
    (xdc_Char)0x73,  /* [2960] */
    (xdc_Char)0x74,  /* [2961] */
    (xdc_Char)0x20,  /* [2962] */
    (xdc_Char)0x62,  /* [2963] */
    (xdc_Char)0x65,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x73,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x74,  /* [2968] */
    (xdc_Char)0x20,  /* [2969] */
    (xdc_Char)0x74,  /* [2970] */
    (xdc_Char)0x6f,  /* [2971] */
    (xdc_Char)0x20,  /* [2972] */
    (xdc_Char)0x61,  /* [2973] */
    (xdc_Char)0x20,  /* [2974] */
    (xdc_Char)0x6e,  /* [2975] */
    (xdc_Char)0x6f,  /* [2976] */
    (xdc_Char)0x6e,  /* [2977] */
    (xdc_Char)0x2d,  /* [2978] */
    (xdc_Char)0x64,  /* [2979] */
    (xdc_Char)0x65,  /* [2980] */
    (xdc_Char)0x66,  /* [2981] */
    (xdc_Char)0x61,  /* [2982] */
    (xdc_Char)0x75,  /* [2983] */
    (xdc_Char)0x6c,  /* [2984] */
    (xdc_Char)0x74,  /* [2985] */
    (xdc_Char)0x20,  /* [2986] */
    (xdc_Char)0x76,  /* [2987] */
    (xdc_Char)0x61,  /* [2988] */
    (xdc_Char)0x6c,  /* [2989] */
    (xdc_Char)0x75,  /* [2990] */
    (xdc_Char)0x65,  /* [2991] */
    (xdc_Char)0x0,  /* [2992] */
    (xdc_Char)0x41,  /* [2993] */
    (xdc_Char)0x5f,  /* [2994] */
    (xdc_Char)0x6e,  /* [2995] */
    (xdc_Char)0x75,  /* [2996] */
    (xdc_Char)0x6c,  /* [2997] */
    (xdc_Char)0x6c,  /* [2998] */
    (xdc_Char)0x48,  /* [2999] */
    (xdc_Char)0x61,  /* [3000] */
    (xdc_Char)0x6e,  /* [3001] */
    (xdc_Char)0x64,  /* [3002] */
    (xdc_Char)0x6c,  /* [3003] */
    (xdc_Char)0x65,  /* [3004] */
    (xdc_Char)0x3a,  /* [3005] */
    (xdc_Char)0x20,  /* [3006] */
    (xdc_Char)0x4e,  /* [3007] */
    (xdc_Char)0x75,  /* [3008] */
    (xdc_Char)0x6c,  /* [3009] */
    (xdc_Char)0x6c,  /* [3010] */
    (xdc_Char)0x20,  /* [3011] */
    (xdc_Char)0x68,  /* [3012] */
    (xdc_Char)0x61,  /* [3013] */
    (xdc_Char)0x6e,  /* [3014] */
    (xdc_Char)0x64,  /* [3015] */
    (xdc_Char)0x6c,  /* [3016] */
    (xdc_Char)0x65,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x70,  /* [3019] */
    (xdc_Char)0x61,  /* [3020] */
    (xdc_Char)0x73,  /* [3021] */
    (xdc_Char)0x73,  /* [3022] */
    (xdc_Char)0x65,  /* [3023] */
    (xdc_Char)0x64,  /* [3024] */
    (xdc_Char)0x20,  /* [3025] */
    (xdc_Char)0x74,  /* [3026] */
    (xdc_Char)0x6f,  /* [3027] */
    (xdc_Char)0x20,  /* [3028] */
    (xdc_Char)0x63,  /* [3029] */
    (xdc_Char)0x72,  /* [3030] */
    (xdc_Char)0x65,  /* [3031] */
    (xdc_Char)0x61,  /* [3032] */
    (xdc_Char)0x74,  /* [3033] */
    (xdc_Char)0x65,  /* [3034] */
    (xdc_Char)0x0,  /* [3035] */
    (xdc_Char)0x41,  /* [3036] */
    (xdc_Char)0x5f,  /* [3037] */
    (xdc_Char)0x49,  /* [3038] */
    (xdc_Char)0x70,  /* [3039] */
    (xdc_Char)0x63,  /* [3040] */
    (xdc_Char)0x4d,  /* [3041] */
    (xdc_Char)0x50,  /* [3042] */
    (xdc_Char)0x46,  /* [3043] */
    (xdc_Char)0x61,  /* [3044] */
    (xdc_Char)0x69,  /* [3045] */
    (xdc_Char)0x6c,  /* [3046] */
    (xdc_Char)0x75,  /* [3047] */
    (xdc_Char)0x72,  /* [3048] */
    (xdc_Char)0x65,  /* [3049] */
    (xdc_Char)0x3a,  /* [3050] */
    (xdc_Char)0x20,  /* [3051] */
    (xdc_Char)0x55,  /* [3052] */
    (xdc_Char)0x6e,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x78,  /* [3055] */
    (xdc_Char)0x70,  /* [3056] */
    (xdc_Char)0x65,  /* [3057] */
    (xdc_Char)0x63,  /* [3058] */
    (xdc_Char)0x74,  /* [3059] */
    (xdc_Char)0x65,  /* [3060] */
    (xdc_Char)0x64,  /* [3061] */
    (xdc_Char)0x20,  /* [3062] */
    (xdc_Char)0x66,  /* [3063] */
    (xdc_Char)0x61,  /* [3064] */
    (xdc_Char)0x69,  /* [3065] */
    (xdc_Char)0x6c,  /* [3066] */
    (xdc_Char)0x75,  /* [3067] */
    (xdc_Char)0x72,  /* [3068] */
    (xdc_Char)0x65,  /* [3069] */
    (xdc_Char)0x20,  /* [3070] */
    (xdc_Char)0x77,  /* [3071] */
    (xdc_Char)0x69,  /* [3072] */
    (xdc_Char)0x74,  /* [3073] */
    (xdc_Char)0x68,  /* [3074] */
    (xdc_Char)0x20,  /* [3075] */
    (xdc_Char)0x74,  /* [3076] */
    (xdc_Char)0x68,  /* [3077] */
    (xdc_Char)0x65,  /* [3078] */
    (xdc_Char)0x20,  /* [3079] */
    (xdc_Char)0x49,  /* [3080] */
    (xdc_Char)0x70,  /* [3081] */
    (xdc_Char)0x63,  /* [3082] */
    (xdc_Char)0x4d,  /* [3083] */
    (xdc_Char)0x50,  /* [3084] */
    (xdc_Char)0x0,  /* [3085] */
    (xdc_Char)0x4c,  /* [3086] */
    (xdc_Char)0x6f,  /* [3087] */
    (xdc_Char)0x67,  /* [3088] */
    (xdc_Char)0x67,  /* [3089] */
    (xdc_Char)0x65,  /* [3090] */
    (xdc_Char)0x72,  /* [3091] */
    (xdc_Char)0x53,  /* [3092] */
    (xdc_Char)0x74,  /* [3093] */
    (xdc_Char)0x72,  /* [3094] */
    (xdc_Char)0x65,  /* [3095] */
    (xdc_Char)0x61,  /* [3096] */
    (xdc_Char)0x6d,  /* [3097] */
    (xdc_Char)0x65,  /* [3098] */
    (xdc_Char)0x72,  /* [3099] */
    (xdc_Char)0x32,  /* [3100] */
    (xdc_Char)0x5f,  /* [3101] */
    (xdc_Char)0x63,  /* [3102] */
    (xdc_Char)0x72,  /* [3103] */
    (xdc_Char)0x65,  /* [3104] */
    (xdc_Char)0x61,  /* [3105] */
    (xdc_Char)0x74,  /* [3106] */
    (xdc_Char)0x65,  /* [3107] */
    (xdc_Char)0x27,  /* [3108] */
    (xdc_Char)0x73,  /* [3109] */
    (xdc_Char)0x20,  /* [3110] */
    (xdc_Char)0x62,  /* [3111] */
    (xdc_Char)0x75,  /* [3112] */
    (xdc_Char)0x66,  /* [3113] */
    (xdc_Char)0x66,  /* [3114] */
    (xdc_Char)0x65,  /* [3115] */
    (xdc_Char)0x72,  /* [3116] */
    (xdc_Char)0x20,  /* [3117] */
    (xdc_Char)0x72,  /* [3118] */
    (xdc_Char)0x65,  /* [3119] */
    (xdc_Char)0x74,  /* [3120] */
    (xdc_Char)0x75,  /* [3121] */
    (xdc_Char)0x72,  /* [3122] */
    (xdc_Char)0x6e,  /* [3123] */
    (xdc_Char)0x65,  /* [3124] */
    (xdc_Char)0x64,  /* [3125] */
    (xdc_Char)0x20,  /* [3126] */
    (xdc_Char)0x62,  /* [3127] */
    (xdc_Char)0x79,  /* [3128] */
    (xdc_Char)0x20,  /* [3129] */
    (xdc_Char)0x70,  /* [3130] */
    (xdc_Char)0x72,  /* [3131] */
    (xdc_Char)0x69,  /* [3132] */
    (xdc_Char)0x6d,  /* [3133] */
    (xdc_Char)0x65,  /* [3134] */
    (xdc_Char)0x46,  /* [3135] */
    (xdc_Char)0x78,  /* [3136] */
    (xdc_Char)0x6e,  /* [3137] */
    (xdc_Char)0x20,  /* [3138] */
    (xdc_Char)0x69,  /* [3139] */
    (xdc_Char)0x73,  /* [3140] */
    (xdc_Char)0x20,  /* [3141] */
    (xdc_Char)0x4e,  /* [3142] */
    (xdc_Char)0x55,  /* [3143] */
    (xdc_Char)0x4c,  /* [3144] */
    (xdc_Char)0x4c,  /* [3145] */
    (xdc_Char)0x0,  /* [3146] */
    (xdc_Char)0x41,  /* [3147] */
    (xdc_Char)0x5f,  /* [3148] */
    (xdc_Char)0x75,  /* [3149] */
    (xdc_Char)0x6e,  /* [3150] */
    (xdc_Char)0x73,  /* [3151] */
    (xdc_Char)0x75,  /* [3152] */
    (xdc_Char)0x70,  /* [3153] */
    (xdc_Char)0x70,  /* [3154] */
    (xdc_Char)0x6f,  /* [3155] */
    (xdc_Char)0x72,  /* [3156] */
    (xdc_Char)0x74,  /* [3157] */
    (xdc_Char)0x65,  /* [3158] */
    (xdc_Char)0x64,  /* [3159] */
    (xdc_Char)0x4d,  /* [3160] */
    (xdc_Char)0x61,  /* [3161] */
    (xdc_Char)0x73,  /* [3162] */
    (xdc_Char)0x6b,  /* [3163] */
    (xdc_Char)0x69,  /* [3164] */
    (xdc_Char)0x6e,  /* [3165] */
    (xdc_Char)0x67,  /* [3166] */
    (xdc_Char)0x4f,  /* [3167] */
    (xdc_Char)0x70,  /* [3168] */
    (xdc_Char)0x74,  /* [3169] */
    (xdc_Char)0x69,  /* [3170] */
    (xdc_Char)0x6f,  /* [3171] */
    (xdc_Char)0x6e,  /* [3172] */
    (xdc_Char)0x3a,  /* [3173] */
    (xdc_Char)0x20,  /* [3174] */
    (xdc_Char)0x75,  /* [3175] */
    (xdc_Char)0x6e,  /* [3176] */
    (xdc_Char)0x73,  /* [3177] */
    (xdc_Char)0x75,  /* [3178] */
    (xdc_Char)0x70,  /* [3179] */
    (xdc_Char)0x70,  /* [3180] */
    (xdc_Char)0x6f,  /* [3181] */
    (xdc_Char)0x72,  /* [3182] */
    (xdc_Char)0x74,  /* [3183] */
    (xdc_Char)0x65,  /* [3184] */
    (xdc_Char)0x64,  /* [3185] */
    (xdc_Char)0x20,  /* [3186] */
    (xdc_Char)0x6d,  /* [3187] */
    (xdc_Char)0x61,  /* [3188] */
    (xdc_Char)0x73,  /* [3189] */
    (xdc_Char)0x6b,  /* [3190] */
    (xdc_Char)0x53,  /* [3191] */
    (xdc_Char)0x65,  /* [3192] */
    (xdc_Char)0x74,  /* [3193] */
    (xdc_Char)0x74,  /* [3194] */
    (xdc_Char)0x69,  /* [3195] */
    (xdc_Char)0x6e,  /* [3196] */
    (xdc_Char)0x67,  /* [3197] */
    (xdc_Char)0x2e,  /* [3198] */
    (xdc_Char)0x0,  /* [3199] */
    (xdc_Char)0x62,  /* [3200] */
    (xdc_Char)0x75,  /* [3201] */
    (xdc_Char)0x66,  /* [3202] */
    (xdc_Char)0x20,  /* [3203] */
    (xdc_Char)0x70,  /* [3204] */
    (xdc_Char)0x61,  /* [3205] */
    (xdc_Char)0x72,  /* [3206] */
    (xdc_Char)0x61,  /* [3207] */
    (xdc_Char)0x6d,  /* [3208] */
    (xdc_Char)0x65,  /* [3209] */
    (xdc_Char)0x74,  /* [3210] */
    (xdc_Char)0x65,  /* [3211] */
    (xdc_Char)0x72,  /* [3212] */
    (xdc_Char)0x20,  /* [3213] */
    (xdc_Char)0x63,  /* [3214] */
    (xdc_Char)0x61,  /* [3215] */
    (xdc_Char)0x6e,  /* [3216] */
    (xdc_Char)0x6e,  /* [3217] */
    (xdc_Char)0x6f,  /* [3218] */
    (xdc_Char)0x74,  /* [3219] */
    (xdc_Char)0x20,  /* [3220] */
    (xdc_Char)0x62,  /* [3221] */
    (xdc_Char)0x65,  /* [3222] */
    (xdc_Char)0x20,  /* [3223] */
    (xdc_Char)0x6e,  /* [3224] */
    (xdc_Char)0x75,  /* [3225] */
    (xdc_Char)0x6c,  /* [3226] */
    (xdc_Char)0x6c,  /* [3227] */
    (xdc_Char)0x0,  /* [3228] */
    (xdc_Char)0x62,  /* [3229] */
    (xdc_Char)0x75,  /* [3230] */
    (xdc_Char)0x66,  /* [3231] */
    (xdc_Char)0x20,  /* [3232] */
    (xdc_Char)0x6e,  /* [3233] */
    (xdc_Char)0x6f,  /* [3234] */
    (xdc_Char)0x74,  /* [3235] */
    (xdc_Char)0x20,  /* [3236] */
    (xdc_Char)0x70,  /* [3237] */
    (xdc_Char)0x72,  /* [3238] */
    (xdc_Char)0x6f,  /* [3239] */
    (xdc_Char)0x70,  /* [3240] */
    (xdc_Char)0x65,  /* [3241] */
    (xdc_Char)0x72,  /* [3242] */
    (xdc_Char)0x6c,  /* [3243] */
    (xdc_Char)0x79,  /* [3244] */
    (xdc_Char)0x20,  /* [3245] */
    (xdc_Char)0x61,  /* [3246] */
    (xdc_Char)0x6c,  /* [3247] */
    (xdc_Char)0x69,  /* [3248] */
    (xdc_Char)0x67,  /* [3249] */
    (xdc_Char)0x6e,  /* [3250] */
    (xdc_Char)0x65,  /* [3251] */
    (xdc_Char)0x64,  /* [3252] */
    (xdc_Char)0x0,  /* [3253] */
    (xdc_Char)0x61,  /* [3254] */
    (xdc_Char)0x6c,  /* [3255] */
    (xdc_Char)0x69,  /* [3256] */
    (xdc_Char)0x67,  /* [3257] */
    (xdc_Char)0x6e,  /* [3258] */
    (xdc_Char)0x20,  /* [3259] */
    (xdc_Char)0x70,  /* [3260] */
    (xdc_Char)0x61,  /* [3261] */
    (xdc_Char)0x72,  /* [3262] */
    (xdc_Char)0x61,  /* [3263] */
    (xdc_Char)0x6d,  /* [3264] */
    (xdc_Char)0x65,  /* [3265] */
    (xdc_Char)0x74,  /* [3266] */
    (xdc_Char)0x65,  /* [3267] */
    (xdc_Char)0x72,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x6d,  /* [3270] */
    (xdc_Char)0x75,  /* [3271] */
    (xdc_Char)0x73,  /* [3272] */
    (xdc_Char)0x74,  /* [3273] */
    (xdc_Char)0x20,  /* [3274] */
    (xdc_Char)0x62,  /* [3275] */
    (xdc_Char)0x65,  /* [3276] */
    (xdc_Char)0x20,  /* [3277] */
    (xdc_Char)0x30,  /* [3278] */
    (xdc_Char)0x20,  /* [3279] */
    (xdc_Char)0x6f,  /* [3280] */
    (xdc_Char)0x72,  /* [3281] */
    (xdc_Char)0x20,  /* [3282] */
    (xdc_Char)0x61,  /* [3283] */
    (xdc_Char)0x20,  /* [3284] */
    (xdc_Char)0x70,  /* [3285] */
    (xdc_Char)0x6f,  /* [3286] */
    (xdc_Char)0x77,  /* [3287] */
    (xdc_Char)0x65,  /* [3288] */
    (xdc_Char)0x72,  /* [3289] */
    (xdc_Char)0x20,  /* [3290] */
    (xdc_Char)0x6f,  /* [3291] */
    (xdc_Char)0x66,  /* [3292] */
    (xdc_Char)0x20,  /* [3293] */
    (xdc_Char)0x32,  /* [3294] */
    (xdc_Char)0x20,  /* [3295] */
    (xdc_Char)0x3e,  /* [3296] */
    (xdc_Char)0x3d,  /* [3297] */
    (xdc_Char)0x20,  /* [3298] */
    (xdc_Char)0x74,  /* [3299] */
    (xdc_Char)0x68,  /* [3300] */
    (xdc_Char)0x65,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x76,  /* [3303] */
    (xdc_Char)0x61,  /* [3304] */
    (xdc_Char)0x6c,  /* [3305] */
    (xdc_Char)0x75,  /* [3306] */
    (xdc_Char)0x65,  /* [3307] */
    (xdc_Char)0x20,  /* [3308] */
    (xdc_Char)0x6f,  /* [3309] */
    (xdc_Char)0x66,  /* [3310] */
    (xdc_Char)0x20,  /* [3311] */
    (xdc_Char)0x4d,  /* [3312] */
    (xdc_Char)0x65,  /* [3313] */
    (xdc_Char)0x6d,  /* [3314] */
    (xdc_Char)0x6f,  /* [3315] */
    (xdc_Char)0x72,  /* [3316] */
    (xdc_Char)0x79,  /* [3317] */
    (xdc_Char)0x5f,  /* [3318] */
    (xdc_Char)0x67,  /* [3319] */
    (xdc_Char)0x65,  /* [3320] */
    (xdc_Char)0x74,  /* [3321] */
    (xdc_Char)0x4d,  /* [3322] */
    (xdc_Char)0x61,  /* [3323] */
    (xdc_Char)0x78,  /* [3324] */
    (xdc_Char)0x44,  /* [3325] */
    (xdc_Char)0x65,  /* [3326] */
    (xdc_Char)0x66,  /* [3327] */
    (xdc_Char)0x61,  /* [3328] */
    (xdc_Char)0x75,  /* [3329] */
    (xdc_Char)0x6c,  /* [3330] */
    (xdc_Char)0x74,  /* [3331] */
    (xdc_Char)0x54,  /* [3332] */
    (xdc_Char)0x79,  /* [3333] */
    (xdc_Char)0x70,  /* [3334] */
    (xdc_Char)0x65,  /* [3335] */
    (xdc_Char)0x41,  /* [3336] */
    (xdc_Char)0x6c,  /* [3337] */
    (xdc_Char)0x69,  /* [3338] */
    (xdc_Char)0x67,  /* [3339] */
    (xdc_Char)0x6e,  /* [3340] */
    (xdc_Char)0x28,  /* [3341] */
    (xdc_Char)0x29,  /* [3342] */
    (xdc_Char)0x0,  /* [3343] */
    (xdc_Char)0x61,  /* [3344] */
    (xdc_Char)0x6c,  /* [3345] */
    (xdc_Char)0x69,  /* [3346] */
    (xdc_Char)0x67,  /* [3347] */
    (xdc_Char)0x6e,  /* [3348] */
    (xdc_Char)0x20,  /* [3349] */
    (xdc_Char)0x70,  /* [3350] */
    (xdc_Char)0x61,  /* [3351] */
    (xdc_Char)0x72,  /* [3352] */
    (xdc_Char)0x61,  /* [3353] */
    (xdc_Char)0x6d,  /* [3354] */
    (xdc_Char)0x65,  /* [3355] */
    (xdc_Char)0x74,  /* [3356] */
    (xdc_Char)0x65,  /* [3357] */
    (xdc_Char)0x72,  /* [3358] */
    (xdc_Char)0x20,  /* [3359] */
    (xdc_Char)0x31,  /* [3360] */
    (xdc_Char)0x29,  /* [3361] */
    (xdc_Char)0x20,  /* [3362] */
    (xdc_Char)0x6d,  /* [3363] */
    (xdc_Char)0x75,  /* [3364] */
    (xdc_Char)0x73,  /* [3365] */
    (xdc_Char)0x74,  /* [3366] */
    (xdc_Char)0x20,  /* [3367] */
    (xdc_Char)0x62,  /* [3368] */
    (xdc_Char)0x65,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x30,  /* [3371] */
    (xdc_Char)0x20,  /* [3372] */
    (xdc_Char)0x6f,  /* [3373] */
    (xdc_Char)0x72,  /* [3374] */
    (xdc_Char)0x20,  /* [3375] */
    (xdc_Char)0x61,  /* [3376] */
    (xdc_Char)0x20,  /* [3377] */
    (xdc_Char)0x70,  /* [3378] */
    (xdc_Char)0x6f,  /* [3379] */
    (xdc_Char)0x77,  /* [3380] */
    (xdc_Char)0x65,  /* [3381] */
    (xdc_Char)0x72,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x6f,  /* [3384] */
    (xdc_Char)0x66,  /* [3385] */
    (xdc_Char)0x20,  /* [3386] */
    (xdc_Char)0x32,  /* [3387] */
    (xdc_Char)0x20,  /* [3388] */
    (xdc_Char)0x61,  /* [3389] */
    (xdc_Char)0x6e,  /* [3390] */
    (xdc_Char)0x64,  /* [3391] */
    (xdc_Char)0x20,  /* [3392] */
    (xdc_Char)0x32,  /* [3393] */
    (xdc_Char)0x29,  /* [3394] */
    (xdc_Char)0x20,  /* [3395] */
    (xdc_Char)0x6e,  /* [3396] */
    (xdc_Char)0x6f,  /* [3397] */
    (xdc_Char)0x74,  /* [3398] */
    (xdc_Char)0x20,  /* [3399] */
    (xdc_Char)0x67,  /* [3400] */
    (xdc_Char)0x72,  /* [3401] */
    (xdc_Char)0x65,  /* [3402] */
    (xdc_Char)0x61,  /* [3403] */
    (xdc_Char)0x74,  /* [3404] */
    (xdc_Char)0x65,  /* [3405] */
    (xdc_Char)0x72,  /* [3406] */
    (xdc_Char)0x20,  /* [3407] */
    (xdc_Char)0x74,  /* [3408] */
    (xdc_Char)0x68,  /* [3409] */
    (xdc_Char)0x61,  /* [3410] */
    (xdc_Char)0x6e,  /* [3411] */
    (xdc_Char)0x20,  /* [3412] */
    (xdc_Char)0x74,  /* [3413] */
    (xdc_Char)0x68,  /* [3414] */
    (xdc_Char)0x65,  /* [3415] */
    (xdc_Char)0x20,  /* [3416] */
    (xdc_Char)0x68,  /* [3417] */
    (xdc_Char)0x65,  /* [3418] */
    (xdc_Char)0x61,  /* [3419] */
    (xdc_Char)0x70,  /* [3420] */
    (xdc_Char)0x73,  /* [3421] */
    (xdc_Char)0x20,  /* [3422] */
    (xdc_Char)0x61,  /* [3423] */
    (xdc_Char)0x6c,  /* [3424] */
    (xdc_Char)0x69,  /* [3425] */
    (xdc_Char)0x67,  /* [3426] */
    (xdc_Char)0x6e,  /* [3427] */
    (xdc_Char)0x6d,  /* [3428] */
    (xdc_Char)0x65,  /* [3429] */
    (xdc_Char)0x6e,  /* [3430] */
    (xdc_Char)0x74,  /* [3431] */
    (xdc_Char)0x0,  /* [3432] */
    (xdc_Char)0x62,  /* [3433] */
    (xdc_Char)0x6c,  /* [3434] */
    (xdc_Char)0x6f,  /* [3435] */
    (xdc_Char)0x63,  /* [3436] */
    (xdc_Char)0x6b,  /* [3437] */
    (xdc_Char)0x53,  /* [3438] */
    (xdc_Char)0x69,  /* [3439] */
    (xdc_Char)0x7a,  /* [3440] */
    (xdc_Char)0x65,  /* [3441] */
    (xdc_Char)0x20,  /* [3442] */
    (xdc_Char)0x6d,  /* [3443] */
    (xdc_Char)0x75,  /* [3444] */
    (xdc_Char)0x73,  /* [3445] */
    (xdc_Char)0x74,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x62,  /* [3448] */
    (xdc_Char)0x65,  /* [3449] */
    (xdc_Char)0x20,  /* [3450] */
    (xdc_Char)0x6c,  /* [3451] */
    (xdc_Char)0x61,  /* [3452] */
    (xdc_Char)0x72,  /* [3453] */
    (xdc_Char)0x67,  /* [3454] */
    (xdc_Char)0x65,  /* [3455] */
    (xdc_Char)0x20,  /* [3456] */
    (xdc_Char)0x65,  /* [3457] */
    (xdc_Char)0x6e,  /* [3458] */
    (xdc_Char)0x6f,  /* [3459] */
    (xdc_Char)0x75,  /* [3460] */
    (xdc_Char)0x67,  /* [3461] */
    (xdc_Char)0x68,  /* [3462] */
    (xdc_Char)0x20,  /* [3463] */
    (xdc_Char)0x74,  /* [3464] */
    (xdc_Char)0x6f,  /* [3465] */
    (xdc_Char)0x20,  /* [3466] */
    (xdc_Char)0x68,  /* [3467] */
    (xdc_Char)0x6f,  /* [3468] */
    (xdc_Char)0x6c,  /* [3469] */
    (xdc_Char)0x64,  /* [3470] */
    (xdc_Char)0x20,  /* [3471] */
    (xdc_Char)0x61,  /* [3472] */
    (xdc_Char)0x74,  /* [3473] */
    (xdc_Char)0x6c,  /* [3474] */
    (xdc_Char)0x65,  /* [3475] */
    (xdc_Char)0x61,  /* [3476] */
    (xdc_Char)0x73,  /* [3477] */
    (xdc_Char)0x74,  /* [3478] */
    (xdc_Char)0x20,  /* [3479] */
    (xdc_Char)0x74,  /* [3480] */
    (xdc_Char)0x77,  /* [3481] */
    (xdc_Char)0x6f,  /* [3482] */
    (xdc_Char)0x20,  /* [3483] */
    (xdc_Char)0x70,  /* [3484] */
    (xdc_Char)0x6f,  /* [3485] */
    (xdc_Char)0x69,  /* [3486] */
    (xdc_Char)0x6e,  /* [3487] */
    (xdc_Char)0x74,  /* [3488] */
    (xdc_Char)0x65,  /* [3489] */
    (xdc_Char)0x72,  /* [3490] */
    (xdc_Char)0x73,  /* [3491] */
    (xdc_Char)0x0,  /* [3492] */
    (xdc_Char)0x6e,  /* [3493] */
    (xdc_Char)0x75,  /* [3494] */
    (xdc_Char)0x6d,  /* [3495] */
    (xdc_Char)0x42,  /* [3496] */
    (xdc_Char)0x6c,  /* [3497] */
    (xdc_Char)0x6f,  /* [3498] */
    (xdc_Char)0x63,  /* [3499] */
    (xdc_Char)0x6b,  /* [3500] */
    (xdc_Char)0x73,  /* [3501] */
    (xdc_Char)0x20,  /* [3502] */
    (xdc_Char)0x63,  /* [3503] */
    (xdc_Char)0x61,  /* [3504] */
    (xdc_Char)0x6e,  /* [3505] */
    (xdc_Char)0x6e,  /* [3506] */
    (xdc_Char)0x6f,  /* [3507] */
    (xdc_Char)0x74,  /* [3508] */
    (xdc_Char)0x20,  /* [3509] */
    (xdc_Char)0x62,  /* [3510] */
    (xdc_Char)0x65,  /* [3511] */
    (xdc_Char)0x20,  /* [3512] */
    (xdc_Char)0x7a,  /* [3513] */
    (xdc_Char)0x65,  /* [3514] */
    (xdc_Char)0x72,  /* [3515] */
    (xdc_Char)0x6f,  /* [3516] */
    (xdc_Char)0x0,  /* [3517] */
    (xdc_Char)0x62,  /* [3518] */
    (xdc_Char)0x75,  /* [3519] */
    (xdc_Char)0x66,  /* [3520] */
    (xdc_Char)0x53,  /* [3521] */
    (xdc_Char)0x69,  /* [3522] */
    (xdc_Char)0x7a,  /* [3523] */
    (xdc_Char)0x65,  /* [3524] */
    (xdc_Char)0x20,  /* [3525] */
    (xdc_Char)0x63,  /* [3526] */
    (xdc_Char)0x61,  /* [3527] */
    (xdc_Char)0x6e,  /* [3528] */
    (xdc_Char)0x6e,  /* [3529] */
    (xdc_Char)0x6f,  /* [3530] */
    (xdc_Char)0x74,  /* [3531] */
    (xdc_Char)0x20,  /* [3532] */
    (xdc_Char)0x62,  /* [3533] */
    (xdc_Char)0x65,  /* [3534] */
    (xdc_Char)0x20,  /* [3535] */
    (xdc_Char)0x7a,  /* [3536] */
    (xdc_Char)0x65,  /* [3537] */
    (xdc_Char)0x72,  /* [3538] */
    (xdc_Char)0x6f,  /* [3539] */
    (xdc_Char)0x0,  /* [3540] */
    (xdc_Char)0x48,  /* [3541] */
    (xdc_Char)0x65,  /* [3542] */
    (xdc_Char)0x61,  /* [3543] */
    (xdc_Char)0x70,  /* [3544] */
    (xdc_Char)0x42,  /* [3545] */
    (xdc_Char)0x75,  /* [3546] */
    (xdc_Char)0x66,  /* [3547] */
    (xdc_Char)0x5f,  /* [3548] */
    (xdc_Char)0x63,  /* [3549] */
    (xdc_Char)0x72,  /* [3550] */
    (xdc_Char)0x65,  /* [3551] */
    (xdc_Char)0x61,  /* [3552] */
    (xdc_Char)0x74,  /* [3553] */
    (xdc_Char)0x65,  /* [3554] */
    (xdc_Char)0x27,  /* [3555] */
    (xdc_Char)0x73,  /* [3556] */
    (xdc_Char)0x20,  /* [3557] */
    (xdc_Char)0x62,  /* [3558] */
    (xdc_Char)0x75,  /* [3559] */
    (xdc_Char)0x66,  /* [3560] */
    (xdc_Char)0x53,  /* [3561] */
    (xdc_Char)0x69,  /* [3562] */
    (xdc_Char)0x7a,  /* [3563] */
    (xdc_Char)0x65,  /* [3564] */
    (xdc_Char)0x20,  /* [3565] */
    (xdc_Char)0x70,  /* [3566] */
    (xdc_Char)0x61,  /* [3567] */
    (xdc_Char)0x72,  /* [3568] */
    (xdc_Char)0x61,  /* [3569] */
    (xdc_Char)0x6d,  /* [3570] */
    (xdc_Char)0x65,  /* [3571] */
    (xdc_Char)0x74,  /* [3572] */
    (xdc_Char)0x65,  /* [3573] */
    (xdc_Char)0x72,  /* [3574] */
    (xdc_Char)0x20,  /* [3575] */
    (xdc_Char)0x69,  /* [3576] */
    (xdc_Char)0x73,  /* [3577] */
    (xdc_Char)0x20,  /* [3578] */
    (xdc_Char)0x69,  /* [3579] */
    (xdc_Char)0x6e,  /* [3580] */
    (xdc_Char)0x76,  /* [3581] */
    (xdc_Char)0x61,  /* [3582] */
    (xdc_Char)0x6c,  /* [3583] */
    (xdc_Char)0x69,  /* [3584] */
    (xdc_Char)0x64,  /* [3585] */
    (xdc_Char)0x20,  /* [3586] */
    (xdc_Char)0x28,  /* [3587] */
    (xdc_Char)0x74,  /* [3588] */
    (xdc_Char)0x6f,  /* [3589] */
    (xdc_Char)0x6f,  /* [3590] */
    (xdc_Char)0x20,  /* [3591] */
    (xdc_Char)0x73,  /* [3592] */
    (xdc_Char)0x6d,  /* [3593] */
    (xdc_Char)0x61,  /* [3594] */
    (xdc_Char)0x6c,  /* [3595] */
    (xdc_Char)0x6c,  /* [3596] */
    (xdc_Char)0x29,  /* [3597] */
    (xdc_Char)0x0,  /* [3598] */
    (xdc_Char)0x43,  /* [3599] */
    (xdc_Char)0x61,  /* [3600] */
    (xdc_Char)0x6e,  /* [3601] */
    (xdc_Char)0x6e,  /* [3602] */
    (xdc_Char)0x6f,  /* [3603] */
    (xdc_Char)0x74,  /* [3604] */
    (xdc_Char)0x20,  /* [3605] */
    (xdc_Char)0x63,  /* [3606] */
    (xdc_Char)0x61,  /* [3607] */
    (xdc_Char)0x6c,  /* [3608] */
    (xdc_Char)0x6c,  /* [3609] */
    (xdc_Char)0x20,  /* [3610] */
    (xdc_Char)0x48,  /* [3611] */
    (xdc_Char)0x65,  /* [3612] */
    (xdc_Char)0x61,  /* [3613] */
    (xdc_Char)0x70,  /* [3614] */
    (xdc_Char)0x42,  /* [3615] */
    (xdc_Char)0x75,  /* [3616] */
    (xdc_Char)0x66,  /* [3617] */
    (xdc_Char)0x5f,  /* [3618] */
    (xdc_Char)0x66,  /* [3619] */
    (xdc_Char)0x72,  /* [3620] */
    (xdc_Char)0x65,  /* [3621] */
    (xdc_Char)0x65,  /* [3622] */
    (xdc_Char)0x20,  /* [3623] */
    (xdc_Char)0x77,  /* [3624] */
    (xdc_Char)0x68,  /* [3625] */
    (xdc_Char)0x65,  /* [3626] */
    (xdc_Char)0x6e,  /* [3627] */
    (xdc_Char)0x20,  /* [3628] */
    (xdc_Char)0x6e,  /* [3629] */
    (xdc_Char)0x6f,  /* [3630] */
    (xdc_Char)0x20,  /* [3631] */
    (xdc_Char)0x62,  /* [3632] */
    (xdc_Char)0x6c,  /* [3633] */
    (xdc_Char)0x6f,  /* [3634] */
    (xdc_Char)0x63,  /* [3635] */
    (xdc_Char)0x6b,  /* [3636] */
    (xdc_Char)0x73,  /* [3637] */
    (xdc_Char)0x20,  /* [3638] */
    (xdc_Char)0x68,  /* [3639] */
    (xdc_Char)0x61,  /* [3640] */
    (xdc_Char)0x76,  /* [3641] */
    (xdc_Char)0x65,  /* [3642] */
    (xdc_Char)0x20,  /* [3643] */
    (xdc_Char)0x62,  /* [3644] */
    (xdc_Char)0x65,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x6e,  /* [3647] */
    (xdc_Char)0x20,  /* [3648] */
    (xdc_Char)0x61,  /* [3649] */
    (xdc_Char)0x6c,  /* [3650] */
    (xdc_Char)0x6c,  /* [3651] */
    (xdc_Char)0x6f,  /* [3652] */
    (xdc_Char)0x63,  /* [3653] */
    (xdc_Char)0x61,  /* [3654] */
    (xdc_Char)0x74,  /* [3655] */
    (xdc_Char)0x65,  /* [3656] */
    (xdc_Char)0x64,  /* [3657] */
    (xdc_Char)0x0,  /* [3658] */
    (xdc_Char)0x41,  /* [3659] */
    (xdc_Char)0x5f,  /* [3660] */
    (xdc_Char)0x69,  /* [3661] */
    (xdc_Char)0x6e,  /* [3662] */
    (xdc_Char)0x76,  /* [3663] */
    (xdc_Char)0x61,  /* [3664] */
    (xdc_Char)0x6c,  /* [3665] */
    (xdc_Char)0x69,  /* [3666] */
    (xdc_Char)0x64,  /* [3667] */
    (xdc_Char)0x46,  /* [3668] */
    (xdc_Char)0x72,  /* [3669] */
    (xdc_Char)0x65,  /* [3670] */
    (xdc_Char)0x65,  /* [3671] */
    (xdc_Char)0x3a,  /* [3672] */
    (xdc_Char)0x20,  /* [3673] */
    (xdc_Char)0x49,  /* [3674] */
    (xdc_Char)0x6e,  /* [3675] */
    (xdc_Char)0x76,  /* [3676] */
    (xdc_Char)0x61,  /* [3677] */
    (xdc_Char)0x6c,  /* [3678] */
    (xdc_Char)0x69,  /* [3679] */
    (xdc_Char)0x64,  /* [3680] */
    (xdc_Char)0x20,  /* [3681] */
    (xdc_Char)0x66,  /* [3682] */
    (xdc_Char)0x72,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x65,  /* [3685] */
    (xdc_Char)0x0,  /* [3686] */
    (xdc_Char)0x41,  /* [3687] */
    (xdc_Char)0x5f,  /* [3688] */
    (xdc_Char)0x7a,  /* [3689] */
    (xdc_Char)0x65,  /* [3690] */
    (xdc_Char)0x72,  /* [3691] */
    (xdc_Char)0x6f,  /* [3692] */
    (xdc_Char)0x42,  /* [3693] */
    (xdc_Char)0x6c,  /* [3694] */
    (xdc_Char)0x6f,  /* [3695] */
    (xdc_Char)0x63,  /* [3696] */
    (xdc_Char)0x6b,  /* [3697] */
    (xdc_Char)0x3a,  /* [3698] */
    (xdc_Char)0x20,  /* [3699] */
    (xdc_Char)0x43,  /* [3700] */
    (xdc_Char)0x61,  /* [3701] */
    (xdc_Char)0x6e,  /* [3702] */
    (xdc_Char)0x6e,  /* [3703] */
    (xdc_Char)0x6f,  /* [3704] */
    (xdc_Char)0x74,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x61,  /* [3707] */
    (xdc_Char)0x6c,  /* [3708] */
    (xdc_Char)0x6c,  /* [3709] */
    (xdc_Char)0x6f,  /* [3710] */
    (xdc_Char)0x63,  /* [3711] */
    (xdc_Char)0x61,  /* [3712] */
    (xdc_Char)0x74,  /* [3713] */
    (xdc_Char)0x65,  /* [3714] */
    (xdc_Char)0x20,  /* [3715] */
    (xdc_Char)0x73,  /* [3716] */
    (xdc_Char)0x69,  /* [3717] */
    (xdc_Char)0x7a,  /* [3718] */
    (xdc_Char)0x65,  /* [3719] */
    (xdc_Char)0x20,  /* [3720] */
    (xdc_Char)0x30,  /* [3721] */
    (xdc_Char)0x0,  /* [3722] */
    (xdc_Char)0x41,  /* [3723] */
    (xdc_Char)0x5f,  /* [3724] */
    (xdc_Char)0x68,  /* [3725] */
    (xdc_Char)0x65,  /* [3726] */
    (xdc_Char)0x61,  /* [3727] */
    (xdc_Char)0x70,  /* [3728] */
    (xdc_Char)0x53,  /* [3729] */
    (xdc_Char)0x69,  /* [3730] */
    (xdc_Char)0x7a,  /* [3731] */
    (xdc_Char)0x65,  /* [3732] */
    (xdc_Char)0x3a,  /* [3733] */
    (xdc_Char)0x20,  /* [3734] */
    (xdc_Char)0x52,  /* [3735] */
    (xdc_Char)0x65,  /* [3736] */
    (xdc_Char)0x71,  /* [3737] */
    (xdc_Char)0x75,  /* [3738] */
    (xdc_Char)0x65,  /* [3739] */
    (xdc_Char)0x73,  /* [3740] */
    (xdc_Char)0x74,  /* [3741] */
    (xdc_Char)0x65,  /* [3742] */
    (xdc_Char)0x64,  /* [3743] */
    (xdc_Char)0x20,  /* [3744] */
    (xdc_Char)0x68,  /* [3745] */
    (xdc_Char)0x65,  /* [3746] */
    (xdc_Char)0x61,  /* [3747] */
    (xdc_Char)0x70,  /* [3748] */
    (xdc_Char)0x20,  /* [3749] */
    (xdc_Char)0x73,  /* [3750] */
    (xdc_Char)0x69,  /* [3751] */
    (xdc_Char)0x7a,  /* [3752] */
    (xdc_Char)0x65,  /* [3753] */
    (xdc_Char)0x20,  /* [3754] */
    (xdc_Char)0x69,  /* [3755] */
    (xdc_Char)0x73,  /* [3756] */
    (xdc_Char)0x20,  /* [3757] */
    (xdc_Char)0x74,  /* [3758] */
    (xdc_Char)0x6f,  /* [3759] */
    (xdc_Char)0x6f,  /* [3760] */
    (xdc_Char)0x20,  /* [3761] */
    (xdc_Char)0x73,  /* [3762] */
    (xdc_Char)0x6d,  /* [3763] */
    (xdc_Char)0x61,  /* [3764] */
    (xdc_Char)0x6c,  /* [3765] */
    (xdc_Char)0x6c,  /* [3766] */
    (xdc_Char)0x0,  /* [3767] */
    (xdc_Char)0x41,  /* [3768] */
    (xdc_Char)0x5f,  /* [3769] */
    (xdc_Char)0x61,  /* [3770] */
    (xdc_Char)0x6c,  /* [3771] */
    (xdc_Char)0x69,  /* [3772] */
    (xdc_Char)0x67,  /* [3773] */
    (xdc_Char)0x6e,  /* [3774] */
    (xdc_Char)0x3a,  /* [3775] */
    (xdc_Char)0x20,  /* [3776] */
    (xdc_Char)0x52,  /* [3777] */
    (xdc_Char)0x65,  /* [3778] */
    (xdc_Char)0x71,  /* [3779] */
    (xdc_Char)0x75,  /* [3780] */
    (xdc_Char)0x65,  /* [3781] */
    (xdc_Char)0x73,  /* [3782] */
    (xdc_Char)0x74,  /* [3783] */
    (xdc_Char)0x65,  /* [3784] */
    (xdc_Char)0x64,  /* [3785] */
    (xdc_Char)0x20,  /* [3786] */
    (xdc_Char)0x61,  /* [3787] */
    (xdc_Char)0x6c,  /* [3788] */
    (xdc_Char)0x69,  /* [3789] */
    (xdc_Char)0x67,  /* [3790] */
    (xdc_Char)0x6e,  /* [3791] */
    (xdc_Char)0x20,  /* [3792] */
    (xdc_Char)0x69,  /* [3793] */
    (xdc_Char)0x73,  /* [3794] */
    (xdc_Char)0x20,  /* [3795] */
    (xdc_Char)0x6e,  /* [3796] */
    (xdc_Char)0x6f,  /* [3797] */
    (xdc_Char)0x74,  /* [3798] */
    (xdc_Char)0x20,  /* [3799] */
    (xdc_Char)0x61,  /* [3800] */
    (xdc_Char)0x20,  /* [3801] */
    (xdc_Char)0x70,  /* [3802] */
    (xdc_Char)0x6f,  /* [3803] */
    (xdc_Char)0x77,  /* [3804] */
    (xdc_Char)0x65,  /* [3805] */
    (xdc_Char)0x72,  /* [3806] */
    (xdc_Char)0x20,  /* [3807] */
    (xdc_Char)0x6f,  /* [3808] */
    (xdc_Char)0x66,  /* [3809] */
    (xdc_Char)0x20,  /* [3810] */
    (xdc_Char)0x32,  /* [3811] */
    (xdc_Char)0x0,  /* [3812] */
    (xdc_Char)0x49,  /* [3813] */
    (xdc_Char)0x6e,  /* [3814] */
    (xdc_Char)0x76,  /* [3815] */
    (xdc_Char)0x61,  /* [3816] */
    (xdc_Char)0x6c,  /* [3817] */
    (xdc_Char)0x69,  /* [3818] */
    (xdc_Char)0x64,  /* [3819] */
    (xdc_Char)0x20,  /* [3820] */
    (xdc_Char)0x62,  /* [3821] */
    (xdc_Char)0x6c,  /* [3822] */
    (xdc_Char)0x6f,  /* [3823] */
    (xdc_Char)0x63,  /* [3824] */
    (xdc_Char)0x6b,  /* [3825] */
    (xdc_Char)0x20,  /* [3826] */
    (xdc_Char)0x61,  /* [3827] */
    (xdc_Char)0x64,  /* [3828] */
    (xdc_Char)0x64,  /* [3829] */
    (xdc_Char)0x72,  /* [3830] */
    (xdc_Char)0x65,  /* [3831] */
    (xdc_Char)0x73,  /* [3832] */
    (xdc_Char)0x73,  /* [3833] */
    (xdc_Char)0x20,  /* [3834] */
    (xdc_Char)0x6f,  /* [3835] */
    (xdc_Char)0x6e,  /* [3836] */
    (xdc_Char)0x20,  /* [3837] */
    (xdc_Char)0x74,  /* [3838] */
    (xdc_Char)0x68,  /* [3839] */
    (xdc_Char)0x65,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x66,  /* [3842] */
    (xdc_Char)0x72,  /* [3843] */
    (xdc_Char)0x65,  /* [3844] */
    (xdc_Char)0x65,  /* [3845] */
    (xdc_Char)0x2e,  /* [3846] */
    (xdc_Char)0x20,  /* [3847] */
    (xdc_Char)0x46,  /* [3848] */
    (xdc_Char)0x61,  /* [3849] */
    (xdc_Char)0x69,  /* [3850] */
    (xdc_Char)0x6c,  /* [3851] */
    (xdc_Char)0x65,  /* [3852] */
    (xdc_Char)0x64,  /* [3853] */
    (xdc_Char)0x20,  /* [3854] */
    (xdc_Char)0x74,  /* [3855] */
    (xdc_Char)0x6f,  /* [3856] */
    (xdc_Char)0x20,  /* [3857] */
    (xdc_Char)0x66,  /* [3858] */
    (xdc_Char)0x72,  /* [3859] */
    (xdc_Char)0x65,  /* [3860] */
    (xdc_Char)0x65,  /* [3861] */
    (xdc_Char)0x20,  /* [3862] */
    (xdc_Char)0x62,  /* [3863] */
    (xdc_Char)0x6c,  /* [3864] */
    (xdc_Char)0x6f,  /* [3865] */
    (xdc_Char)0x63,  /* [3866] */
    (xdc_Char)0x6b,  /* [3867] */
    (xdc_Char)0x20,  /* [3868] */
    (xdc_Char)0x62,  /* [3869] */
    (xdc_Char)0x61,  /* [3870] */
    (xdc_Char)0x63,  /* [3871] */
    (xdc_Char)0x6b,  /* [3872] */
    (xdc_Char)0x20,  /* [3873] */
    (xdc_Char)0x74,  /* [3874] */
    (xdc_Char)0x6f,  /* [3875] */
    (xdc_Char)0x20,  /* [3876] */
    (xdc_Char)0x68,  /* [3877] */
    (xdc_Char)0x65,  /* [3878] */
    (xdc_Char)0x61,  /* [3879] */
    (xdc_Char)0x70,  /* [3880] */
    (xdc_Char)0x2e,  /* [3881] */
    (xdc_Char)0x0,  /* [3882] */
    (xdc_Char)0x41,  /* [3883] */
    (xdc_Char)0x5f,  /* [3884] */
    (xdc_Char)0x64,  /* [3885] */
    (xdc_Char)0x6f,  /* [3886] */
    (xdc_Char)0x75,  /* [3887] */
    (xdc_Char)0x62,  /* [3888] */
    (xdc_Char)0x6c,  /* [3889] */
    (xdc_Char)0x65,  /* [3890] */
    (xdc_Char)0x46,  /* [3891] */
    (xdc_Char)0x72,  /* [3892] */
    (xdc_Char)0x65,  /* [3893] */
    (xdc_Char)0x65,  /* [3894] */
    (xdc_Char)0x3a,  /* [3895] */
    (xdc_Char)0x20,  /* [3896] */
    (xdc_Char)0x42,  /* [3897] */
    (xdc_Char)0x75,  /* [3898] */
    (xdc_Char)0x66,  /* [3899] */
    (xdc_Char)0x66,  /* [3900] */
    (xdc_Char)0x65,  /* [3901] */
    (xdc_Char)0x72,  /* [3902] */
    (xdc_Char)0x20,  /* [3903] */
    (xdc_Char)0x61,  /* [3904] */
    (xdc_Char)0x6c,  /* [3905] */
    (xdc_Char)0x72,  /* [3906] */
    (xdc_Char)0x65,  /* [3907] */
    (xdc_Char)0x61,  /* [3908] */
    (xdc_Char)0x64,  /* [3909] */
    (xdc_Char)0x79,  /* [3910] */
    (xdc_Char)0x20,  /* [3911] */
    (xdc_Char)0x66,  /* [3912] */
    (xdc_Char)0x72,  /* [3913] */
    (xdc_Char)0x65,  /* [3914] */
    (xdc_Char)0x65,  /* [3915] */
    (xdc_Char)0x0,  /* [3916] */
    (xdc_Char)0x41,  /* [3917] */
    (xdc_Char)0x5f,  /* [3918] */
    (xdc_Char)0x62,  /* [3919] */
    (xdc_Char)0x75,  /* [3920] */
    (xdc_Char)0x66,  /* [3921] */
    (xdc_Char)0x4f,  /* [3922] */
    (xdc_Char)0x76,  /* [3923] */
    (xdc_Char)0x65,  /* [3924] */
    (xdc_Char)0x72,  /* [3925] */
    (xdc_Char)0x66,  /* [3926] */
    (xdc_Char)0x6c,  /* [3927] */
    (xdc_Char)0x6f,  /* [3928] */
    (xdc_Char)0x77,  /* [3929] */
    (xdc_Char)0x3a,  /* [3930] */
    (xdc_Char)0x20,  /* [3931] */
    (xdc_Char)0x42,  /* [3932] */
    (xdc_Char)0x75,  /* [3933] */
    (xdc_Char)0x66,  /* [3934] */
    (xdc_Char)0x66,  /* [3935] */
    (xdc_Char)0x65,  /* [3936] */
    (xdc_Char)0x72,  /* [3937] */
    (xdc_Char)0x20,  /* [3938] */
    (xdc_Char)0x6f,  /* [3939] */
    (xdc_Char)0x76,  /* [3940] */
    (xdc_Char)0x65,  /* [3941] */
    (xdc_Char)0x72,  /* [3942] */
    (xdc_Char)0x66,  /* [3943] */
    (xdc_Char)0x6c,  /* [3944] */
    (xdc_Char)0x6f,  /* [3945] */
    (xdc_Char)0x77,  /* [3946] */
    (xdc_Char)0x0,  /* [3947] */
    (xdc_Char)0x41,  /* [3948] */
    (xdc_Char)0x5f,  /* [3949] */
    (xdc_Char)0x6e,  /* [3950] */
    (xdc_Char)0x6f,  /* [3951] */
    (xdc_Char)0x74,  /* [3952] */
    (xdc_Char)0x45,  /* [3953] */
    (xdc_Char)0x6d,  /* [3954] */
    (xdc_Char)0x70,  /* [3955] */
    (xdc_Char)0x74,  /* [3956] */
    (xdc_Char)0x79,  /* [3957] */
    (xdc_Char)0x3a,  /* [3958] */
    (xdc_Char)0x20,  /* [3959] */
    (xdc_Char)0x48,  /* [3960] */
    (xdc_Char)0x65,  /* [3961] */
    (xdc_Char)0x61,  /* [3962] */
    (xdc_Char)0x70,  /* [3963] */
    (xdc_Char)0x20,  /* [3964] */
    (xdc_Char)0x6e,  /* [3965] */
    (xdc_Char)0x6f,  /* [3966] */
    (xdc_Char)0x74,  /* [3967] */
    (xdc_Char)0x20,  /* [3968] */
    (xdc_Char)0x65,  /* [3969] */
    (xdc_Char)0x6d,  /* [3970] */
    (xdc_Char)0x70,  /* [3971] */
    (xdc_Char)0x74,  /* [3972] */
    (xdc_Char)0x79,  /* [3973] */
    (xdc_Char)0x0,  /* [3974] */
    (xdc_Char)0x41,  /* [3975] */
    (xdc_Char)0x5f,  /* [3976] */
    (xdc_Char)0x6e,  /* [3977] */
    (xdc_Char)0x75,  /* [3978] */
    (xdc_Char)0x6c,  /* [3979] */
    (xdc_Char)0x6c,  /* [3980] */
    (xdc_Char)0x4f,  /* [3981] */
    (xdc_Char)0x62,  /* [3982] */
    (xdc_Char)0x6a,  /* [3983] */
    (xdc_Char)0x65,  /* [3984] */
    (xdc_Char)0x63,  /* [3985] */
    (xdc_Char)0x74,  /* [3986] */
    (xdc_Char)0x3a,  /* [3987] */
    (xdc_Char)0x20,  /* [3988] */
    (xdc_Char)0x48,  /* [3989] */
    (xdc_Char)0x65,  /* [3990] */
    (xdc_Char)0x61,  /* [3991] */
    (xdc_Char)0x70,  /* [3992] */
    (xdc_Char)0x54,  /* [3993] */
    (xdc_Char)0x72,  /* [3994] */
    (xdc_Char)0x61,  /* [3995] */
    (xdc_Char)0x63,  /* [3996] */
    (xdc_Char)0x6b,  /* [3997] */
    (xdc_Char)0x5f,  /* [3998] */
    (xdc_Char)0x70,  /* [3999] */
    (xdc_Char)0x72,  /* [4000] */
    (xdc_Char)0x69,  /* [4001] */
    (xdc_Char)0x6e,  /* [4002] */
    (xdc_Char)0x74,  /* [4003] */
    (xdc_Char)0x48,  /* [4004] */
    (xdc_Char)0x65,  /* [4005] */
    (xdc_Char)0x61,  /* [4006] */
    (xdc_Char)0x70,  /* [4007] */
    (xdc_Char)0x20,  /* [4008] */
    (xdc_Char)0x63,  /* [4009] */
    (xdc_Char)0x61,  /* [4010] */
    (xdc_Char)0x6c,  /* [4011] */
    (xdc_Char)0x6c,  /* [4012] */
    (xdc_Char)0x65,  /* [4013] */
    (xdc_Char)0x64,  /* [4014] */
    (xdc_Char)0x20,  /* [4015] */
    (xdc_Char)0x77,  /* [4016] */
    (xdc_Char)0x69,  /* [4017] */
    (xdc_Char)0x74,  /* [4018] */
    (xdc_Char)0x68,  /* [4019] */
    (xdc_Char)0x20,  /* [4020] */
    (xdc_Char)0x6e,  /* [4021] */
    (xdc_Char)0x75,  /* [4022] */
    (xdc_Char)0x6c,  /* [4023] */
    (xdc_Char)0x6c,  /* [4024] */
    (xdc_Char)0x20,  /* [4025] */
    (xdc_Char)0x6f,  /* [4026] */
    (xdc_Char)0x62,  /* [4027] */
    (xdc_Char)0x6a,  /* [4028] */
    (xdc_Char)0x0,  /* [4029] */
    (xdc_Char)0x61,  /* [4030] */
    (xdc_Char)0x73,  /* [4031] */
    (xdc_Char)0x73,  /* [4032] */
    (xdc_Char)0x65,  /* [4033] */
    (xdc_Char)0x72,  /* [4034] */
    (xdc_Char)0x74,  /* [4035] */
    (xdc_Char)0x69,  /* [4036] */
    (xdc_Char)0x6f,  /* [4037] */
    (xdc_Char)0x6e,  /* [4038] */
    (xdc_Char)0x20,  /* [4039] */
    (xdc_Char)0x66,  /* [4040] */
    (xdc_Char)0x61,  /* [4041] */
    (xdc_Char)0x69,  /* [4042] */
    (xdc_Char)0x6c,  /* [4043] */
    (xdc_Char)0x75,  /* [4044] */
    (xdc_Char)0x72,  /* [4045] */
    (xdc_Char)0x65,  /* [4046] */
    (xdc_Char)0x25,  /* [4047] */
    (xdc_Char)0x73,  /* [4048] */
    (xdc_Char)0x25,  /* [4049] */
    (xdc_Char)0x73,  /* [4050] */
    (xdc_Char)0x0,  /* [4051] */
    (xdc_Char)0x25,  /* [4052] */
    (xdc_Char)0x24,  /* [4053] */
    (xdc_Char)0x53,  /* [4054] */
    (xdc_Char)0x0,  /* [4055] */
    (xdc_Char)0x6f,  /* [4056] */
    (xdc_Char)0x75,  /* [4057] */
    (xdc_Char)0x74,  /* [4058] */
    (xdc_Char)0x20,  /* [4059] */
    (xdc_Char)0x6f,  /* [4060] */
    (xdc_Char)0x66,  /* [4061] */
    (xdc_Char)0x20,  /* [4062] */
    (xdc_Char)0x6d,  /* [4063] */
    (xdc_Char)0x65,  /* [4064] */
    (xdc_Char)0x6d,  /* [4065] */
    (xdc_Char)0x6f,  /* [4066] */
    (xdc_Char)0x72,  /* [4067] */
    (xdc_Char)0x79,  /* [4068] */
    (xdc_Char)0x3a,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x68,  /* [4071] */
    (xdc_Char)0x65,  /* [4072] */
    (xdc_Char)0x61,  /* [4073] */
    (xdc_Char)0x70,  /* [4074] */
    (xdc_Char)0x3d,  /* [4075] */
    (xdc_Char)0x30,  /* [4076] */
    (xdc_Char)0x78,  /* [4077] */
    (xdc_Char)0x25,  /* [4078] */
    (xdc_Char)0x78,  /* [4079] */
    (xdc_Char)0x2c,  /* [4080] */
    (xdc_Char)0x20,  /* [4081] */
    (xdc_Char)0x73,  /* [4082] */
    (xdc_Char)0x69,  /* [4083] */
    (xdc_Char)0x7a,  /* [4084] */
    (xdc_Char)0x65,  /* [4085] */
    (xdc_Char)0x3d,  /* [4086] */
    (xdc_Char)0x25,  /* [4087] */
    (xdc_Char)0x75,  /* [4088] */
    (xdc_Char)0x0,  /* [4089] */
    (xdc_Char)0x25,  /* [4090] */
    (xdc_Char)0x73,  /* [4091] */
    (xdc_Char)0x20,  /* [4092] */
    (xdc_Char)0x30,  /* [4093] */
    (xdc_Char)0x78,  /* [4094] */
    (xdc_Char)0x25,  /* [4095] */
    (xdc_Char)0x78,  /* [4096] */
    (xdc_Char)0x0,  /* [4097] */
    (xdc_Char)0x45,  /* [4098] */
    (xdc_Char)0x5f,  /* [4099] */
    (xdc_Char)0x62,  /* [4100] */
    (xdc_Char)0x61,  /* [4101] */
    (xdc_Char)0x64,  /* [4102] */
    (xdc_Char)0x4c,  /* [4103] */
    (xdc_Char)0x65,  /* [4104] */
    (xdc_Char)0x76,  /* [4105] */
    (xdc_Char)0x65,  /* [4106] */
    (xdc_Char)0x6c,  /* [4107] */
    (xdc_Char)0x3a,  /* [4108] */
    (xdc_Char)0x20,  /* [4109] */
    (xdc_Char)0x42,  /* [4110] */
    (xdc_Char)0x61,  /* [4111] */
    (xdc_Char)0x64,  /* [4112] */
    (xdc_Char)0x20,  /* [4113] */
    (xdc_Char)0x66,  /* [4114] */
    (xdc_Char)0x69,  /* [4115] */
    (xdc_Char)0x6c,  /* [4116] */
    (xdc_Char)0x74,  /* [4117] */
    (xdc_Char)0x65,  /* [4118] */
    (xdc_Char)0x72,  /* [4119] */
    (xdc_Char)0x20,  /* [4120] */
    (xdc_Char)0x6c,  /* [4121] */
    (xdc_Char)0x65,  /* [4122] */
    (xdc_Char)0x76,  /* [4123] */
    (xdc_Char)0x65,  /* [4124] */
    (xdc_Char)0x6c,  /* [4125] */
    (xdc_Char)0x20,  /* [4126] */
    (xdc_Char)0x76,  /* [4127] */
    (xdc_Char)0x61,  /* [4128] */
    (xdc_Char)0x6c,  /* [4129] */
    (xdc_Char)0x75,  /* [4130] */
    (xdc_Char)0x65,  /* [4131] */
    (xdc_Char)0x3a,  /* [4132] */
    (xdc_Char)0x20,  /* [4133] */
    (xdc_Char)0x25,  /* [4134] */
    (xdc_Char)0x64,  /* [4135] */
    (xdc_Char)0x0,  /* [4136] */
    (xdc_Char)0x66,  /* [4137] */
    (xdc_Char)0x72,  /* [4138] */
    (xdc_Char)0x65,  /* [4139] */
    (xdc_Char)0x65,  /* [4140] */
    (xdc_Char)0x28,  /* [4141] */
    (xdc_Char)0x29,  /* [4142] */
    (xdc_Char)0x20,  /* [4143] */
    (xdc_Char)0x69,  /* [4144] */
    (xdc_Char)0x6e,  /* [4145] */
    (xdc_Char)0x76,  /* [4146] */
    (xdc_Char)0x61,  /* [4147] */
    (xdc_Char)0x6c,  /* [4148] */
    (xdc_Char)0x69,  /* [4149] */
    (xdc_Char)0x64,  /* [4150] */
    (xdc_Char)0x20,  /* [4151] */
    (xdc_Char)0x69,  /* [4152] */
    (xdc_Char)0x6e,  /* [4153] */
    (xdc_Char)0x20,  /* [4154] */
    (xdc_Char)0x67,  /* [4155] */
    (xdc_Char)0x72,  /* [4156] */
    (xdc_Char)0x6f,  /* [4157] */
    (xdc_Char)0x77,  /* [4158] */
    (xdc_Char)0x74,  /* [4159] */
    (xdc_Char)0x68,  /* [4160] */
    (xdc_Char)0x2d,  /* [4161] */
    (xdc_Char)0x6f,  /* [4162] */
    (xdc_Char)0x6e,  /* [4163] */
    (xdc_Char)0x6c,  /* [4164] */
    (xdc_Char)0x79,  /* [4165] */
    (xdc_Char)0x20,  /* [4166] */
    (xdc_Char)0x48,  /* [4167] */
    (xdc_Char)0x65,  /* [4168] */
    (xdc_Char)0x61,  /* [4169] */
    (xdc_Char)0x70,  /* [4170] */
    (xdc_Char)0x4d,  /* [4171] */
    (xdc_Char)0x69,  /* [4172] */
    (xdc_Char)0x6e,  /* [4173] */
    (xdc_Char)0x0,  /* [4174] */
    (xdc_Char)0x54,  /* [4175] */
    (xdc_Char)0x68,  /* [4176] */
    (xdc_Char)0x65,  /* [4177] */
    (xdc_Char)0x20,  /* [4178] */
    (xdc_Char)0x52,  /* [4179] */
    (xdc_Char)0x54,  /* [4180] */
    (xdc_Char)0x53,  /* [4181] */
    (xdc_Char)0x20,  /* [4182] */
    (xdc_Char)0x68,  /* [4183] */
    (xdc_Char)0x65,  /* [4184] */
    (xdc_Char)0x61,  /* [4185] */
    (xdc_Char)0x70,  /* [4186] */
    (xdc_Char)0x20,  /* [4187] */
    (xdc_Char)0x69,  /* [4188] */
    (xdc_Char)0x73,  /* [4189] */
    (xdc_Char)0x20,  /* [4190] */
    (xdc_Char)0x75,  /* [4191] */
    (xdc_Char)0x73,  /* [4192] */
    (xdc_Char)0x65,  /* [4193] */
    (xdc_Char)0x64,  /* [4194] */
    (xdc_Char)0x20,  /* [4195] */
    (xdc_Char)0x75,  /* [4196] */
    (xdc_Char)0x70,  /* [4197] */
    (xdc_Char)0x2e,  /* [4198] */
    (xdc_Char)0x20,  /* [4199] */
    (xdc_Char)0x45,  /* [4200] */
    (xdc_Char)0x78,  /* [4201] */
    (xdc_Char)0x61,  /* [4202] */
    (xdc_Char)0x6d,  /* [4203] */
    (xdc_Char)0x69,  /* [4204] */
    (xdc_Char)0x6e,  /* [4205] */
    (xdc_Char)0x65,  /* [4206] */
    (xdc_Char)0x20,  /* [4207] */
    (xdc_Char)0x50,  /* [4208] */
    (xdc_Char)0x72,  /* [4209] */
    (xdc_Char)0x6f,  /* [4210] */
    (xdc_Char)0x67,  /* [4211] */
    (xdc_Char)0x72,  /* [4212] */
    (xdc_Char)0x61,  /* [4213] */
    (xdc_Char)0x6d,  /* [4214] */
    (xdc_Char)0x2e,  /* [4215] */
    (xdc_Char)0x68,  /* [4216] */
    (xdc_Char)0x65,  /* [4217] */
    (xdc_Char)0x61,  /* [4218] */
    (xdc_Char)0x70,  /* [4219] */
    (xdc_Char)0x2e,  /* [4220] */
    (xdc_Char)0x0,  /* [4221] */
    (xdc_Char)0x45,  /* [4222] */
    (xdc_Char)0x5f,  /* [4223] */
    (xdc_Char)0x62,  /* [4224] */
    (xdc_Char)0x61,  /* [4225] */
    (xdc_Char)0x64,  /* [4226] */
    (xdc_Char)0x43,  /* [4227] */
    (xdc_Char)0x6f,  /* [4228] */
    (xdc_Char)0x6d,  /* [4229] */
    (xdc_Char)0x6d,  /* [4230] */
    (xdc_Char)0x61,  /* [4231] */
    (xdc_Char)0x6e,  /* [4232] */
    (xdc_Char)0x64,  /* [4233] */
    (xdc_Char)0x3a,  /* [4234] */
    (xdc_Char)0x20,  /* [4235] */
    (xdc_Char)0x52,  /* [4236] */
    (xdc_Char)0x65,  /* [4237] */
    (xdc_Char)0x63,  /* [4238] */
    (xdc_Char)0x65,  /* [4239] */
    (xdc_Char)0x69,  /* [4240] */
    (xdc_Char)0x76,  /* [4241] */
    (xdc_Char)0x65,  /* [4242] */
    (xdc_Char)0x64,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x69,  /* [4245] */
    (xdc_Char)0x6e,  /* [4246] */
    (xdc_Char)0x76,  /* [4247] */
    (xdc_Char)0x61,  /* [4248] */
    (xdc_Char)0x6c,  /* [4249] */
    (xdc_Char)0x69,  /* [4250] */
    (xdc_Char)0x64,  /* [4251] */
    (xdc_Char)0x20,  /* [4252] */
    (xdc_Char)0x63,  /* [4253] */
    (xdc_Char)0x6f,  /* [4254] */
    (xdc_Char)0x6d,  /* [4255] */
    (xdc_Char)0x6d,  /* [4256] */
    (xdc_Char)0x61,  /* [4257] */
    (xdc_Char)0x6e,  /* [4258] */
    (xdc_Char)0x64,  /* [4259] */
    (xdc_Char)0x2c,  /* [4260] */
    (xdc_Char)0x20,  /* [4261] */
    (xdc_Char)0x69,  /* [4262] */
    (xdc_Char)0x64,  /* [4263] */
    (xdc_Char)0x3a,  /* [4264] */
    (xdc_Char)0x20,  /* [4265] */
    (xdc_Char)0x25,  /* [4266] */
    (xdc_Char)0x64,  /* [4267] */
    (xdc_Char)0x2e,  /* [4268] */
    (xdc_Char)0x0,  /* [4269] */
    (xdc_Char)0x45,  /* [4270] */
    (xdc_Char)0x5f,  /* [4271] */
    (xdc_Char)0x6f,  /* [4272] */
    (xdc_Char)0x62,  /* [4273] */
    (xdc_Char)0x6a,  /* [4274] */
    (xdc_Char)0x65,  /* [4275] */
    (xdc_Char)0x63,  /* [4276] */
    (xdc_Char)0x74,  /* [4277] */
    (xdc_Char)0x4e,  /* [4278] */
    (xdc_Char)0x6f,  /* [4279] */
    (xdc_Char)0x74,  /* [4280] */
    (xdc_Char)0x49,  /* [4281] */
    (xdc_Char)0x6e,  /* [4282] */
    (xdc_Char)0x4b,  /* [4283] */
    (xdc_Char)0x65,  /* [4284] */
    (xdc_Char)0x72,  /* [4285] */
    (xdc_Char)0x6e,  /* [4286] */
    (xdc_Char)0x65,  /* [4287] */
    (xdc_Char)0x6c,  /* [4288] */
    (xdc_Char)0x53,  /* [4289] */
    (xdc_Char)0x70,  /* [4290] */
    (xdc_Char)0x61,  /* [4291] */
    (xdc_Char)0x63,  /* [4292] */
    (xdc_Char)0x65,  /* [4293] */
    (xdc_Char)0x3a,  /* [4294] */
    (xdc_Char)0x20,  /* [4295] */
    (xdc_Char)0x53,  /* [4296] */
    (xdc_Char)0x65,  /* [4297] */
    (xdc_Char)0x6d,  /* [4298] */
    (xdc_Char)0x61,  /* [4299] */
    (xdc_Char)0x70,  /* [4300] */
    (xdc_Char)0x68,  /* [4301] */
    (xdc_Char)0x6f,  /* [4302] */
    (xdc_Char)0x72,  /* [4303] */
    (xdc_Char)0x65,  /* [4304] */
    (xdc_Char)0x20,  /* [4305] */
    (xdc_Char)0x6f,  /* [4306] */
    (xdc_Char)0x62,  /* [4307] */
    (xdc_Char)0x6a,  /* [4308] */
    (xdc_Char)0x65,  /* [4309] */
    (xdc_Char)0x63,  /* [4310] */
    (xdc_Char)0x74,  /* [4311] */
    (xdc_Char)0x20,  /* [4312] */
    (xdc_Char)0x70,  /* [4313] */
    (xdc_Char)0x61,  /* [4314] */
    (xdc_Char)0x73,  /* [4315] */
    (xdc_Char)0x73,  /* [4316] */
    (xdc_Char)0x65,  /* [4317] */
    (xdc_Char)0x64,  /* [4318] */
    (xdc_Char)0x20,  /* [4319] */
    (xdc_Char)0x6e,  /* [4320] */
    (xdc_Char)0x6f,  /* [4321] */
    (xdc_Char)0x74,  /* [4322] */
    (xdc_Char)0x20,  /* [4323] */
    (xdc_Char)0x69,  /* [4324] */
    (xdc_Char)0x6e,  /* [4325] */
    (xdc_Char)0x20,  /* [4326] */
    (xdc_Char)0x4b,  /* [4327] */
    (xdc_Char)0x65,  /* [4328] */
    (xdc_Char)0x72,  /* [4329] */
    (xdc_Char)0x6e,  /* [4330] */
    (xdc_Char)0x65,  /* [4331] */
    (xdc_Char)0x6c,  /* [4332] */
    (xdc_Char)0x20,  /* [4333] */
    (xdc_Char)0x61,  /* [4334] */
    (xdc_Char)0x64,  /* [4335] */
    (xdc_Char)0x64,  /* [4336] */
    (xdc_Char)0x72,  /* [4337] */
    (xdc_Char)0x65,  /* [4338] */
    (xdc_Char)0x73,  /* [4339] */
    (xdc_Char)0x73,  /* [4340] */
    (xdc_Char)0x20,  /* [4341] */
    (xdc_Char)0x73,  /* [4342] */
    (xdc_Char)0x70,  /* [4343] */
    (xdc_Char)0x61,  /* [4344] */
    (xdc_Char)0x63,  /* [4345] */
    (xdc_Char)0x65,  /* [4346] */
    (xdc_Char)0x2e,  /* [4347] */
    (xdc_Char)0x0,  /* [4348] */
    (xdc_Char)0x45,  /* [4349] */
    (xdc_Char)0x5f,  /* [4350] */
    (xdc_Char)0x73,  /* [4351] */
    (xdc_Char)0x74,  /* [4352] */
    (xdc_Char)0x61,  /* [4353] */
    (xdc_Char)0x63,  /* [4354] */
    (xdc_Char)0x6b,  /* [4355] */
    (xdc_Char)0x4f,  /* [4356] */
    (xdc_Char)0x76,  /* [4357] */
    (xdc_Char)0x65,  /* [4358] */
    (xdc_Char)0x72,  /* [4359] */
    (xdc_Char)0x66,  /* [4360] */
    (xdc_Char)0x6c,  /* [4361] */
    (xdc_Char)0x6f,  /* [4362] */
    (xdc_Char)0x77,  /* [4363] */
    (xdc_Char)0x3a,  /* [4364] */
    (xdc_Char)0x20,  /* [4365] */
    (xdc_Char)0x54,  /* [4366] */
    (xdc_Char)0x61,  /* [4367] */
    (xdc_Char)0x73,  /* [4368] */
    (xdc_Char)0x6b,  /* [4369] */
    (xdc_Char)0x20,  /* [4370] */
    (xdc_Char)0x30,  /* [4371] */
    (xdc_Char)0x78,  /* [4372] */
    (xdc_Char)0x25,  /* [4373] */
    (xdc_Char)0x78,  /* [4374] */
    (xdc_Char)0x20,  /* [4375] */
    (xdc_Char)0x73,  /* [4376] */
    (xdc_Char)0x74,  /* [4377] */
    (xdc_Char)0x61,  /* [4378] */
    (xdc_Char)0x63,  /* [4379] */
    (xdc_Char)0x6b,  /* [4380] */
    (xdc_Char)0x20,  /* [4381] */
    (xdc_Char)0x6f,  /* [4382] */
    (xdc_Char)0x76,  /* [4383] */
    (xdc_Char)0x65,  /* [4384] */
    (xdc_Char)0x72,  /* [4385] */
    (xdc_Char)0x66,  /* [4386] */
    (xdc_Char)0x6c,  /* [4387] */
    (xdc_Char)0x6f,  /* [4388] */
    (xdc_Char)0x77,  /* [4389] */
    (xdc_Char)0x2e,  /* [4390] */
    (xdc_Char)0x0,  /* [4391] */
    (xdc_Char)0x45,  /* [4392] */
    (xdc_Char)0x5f,  /* [4393] */
    (xdc_Char)0x73,  /* [4394] */
    (xdc_Char)0x70,  /* [4395] */
    (xdc_Char)0x4f,  /* [4396] */
    (xdc_Char)0x75,  /* [4397] */
    (xdc_Char)0x74,  /* [4398] */
    (xdc_Char)0x4f,  /* [4399] */
    (xdc_Char)0x66,  /* [4400] */
    (xdc_Char)0x42,  /* [4401] */
    (xdc_Char)0x6f,  /* [4402] */
    (xdc_Char)0x75,  /* [4403] */
    (xdc_Char)0x6e,  /* [4404] */
    (xdc_Char)0x64,  /* [4405] */
    (xdc_Char)0x73,  /* [4406] */
    (xdc_Char)0x3a,  /* [4407] */
    (xdc_Char)0x20,  /* [4408] */
    (xdc_Char)0x54,  /* [4409] */
    (xdc_Char)0x61,  /* [4410] */
    (xdc_Char)0x73,  /* [4411] */
    (xdc_Char)0x6b,  /* [4412] */
    (xdc_Char)0x20,  /* [4413] */
    (xdc_Char)0x30,  /* [4414] */
    (xdc_Char)0x78,  /* [4415] */
    (xdc_Char)0x25,  /* [4416] */
    (xdc_Char)0x78,  /* [4417] */
    (xdc_Char)0x20,  /* [4418] */
    (xdc_Char)0x73,  /* [4419] */
    (xdc_Char)0x74,  /* [4420] */
    (xdc_Char)0x61,  /* [4421] */
    (xdc_Char)0x63,  /* [4422] */
    (xdc_Char)0x6b,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x65,  /* [4425] */
    (xdc_Char)0x72,  /* [4426] */
    (xdc_Char)0x72,  /* [4427] */
    (xdc_Char)0x6f,  /* [4428] */
    (xdc_Char)0x72,  /* [4429] */
    (xdc_Char)0x2c,  /* [4430] */
    (xdc_Char)0x20,  /* [4431] */
    (xdc_Char)0x53,  /* [4432] */
    (xdc_Char)0x50,  /* [4433] */
    (xdc_Char)0x20,  /* [4434] */
    (xdc_Char)0x3d,  /* [4435] */
    (xdc_Char)0x20,  /* [4436] */
    (xdc_Char)0x30,  /* [4437] */
    (xdc_Char)0x78,  /* [4438] */
    (xdc_Char)0x25,  /* [4439] */
    (xdc_Char)0x78,  /* [4440] */
    (xdc_Char)0x2e,  /* [4441] */
    (xdc_Char)0x0,  /* [4442] */
    (xdc_Char)0x45,  /* [4443] */
    (xdc_Char)0x5f,  /* [4444] */
    (xdc_Char)0x64,  /* [4445] */
    (xdc_Char)0x65,  /* [4446] */
    (xdc_Char)0x6c,  /* [4447] */
    (xdc_Char)0x65,  /* [4448] */
    (xdc_Char)0x74,  /* [4449] */
    (xdc_Char)0x65,  /* [4450] */
    (xdc_Char)0x4e,  /* [4451] */
    (xdc_Char)0x6f,  /* [4452] */
    (xdc_Char)0x74,  /* [4453] */
    (xdc_Char)0x41,  /* [4454] */
    (xdc_Char)0x6c,  /* [4455] */
    (xdc_Char)0x6c,  /* [4456] */
    (xdc_Char)0x6f,  /* [4457] */
    (xdc_Char)0x77,  /* [4458] */
    (xdc_Char)0x65,  /* [4459] */
    (xdc_Char)0x64,  /* [4460] */
    (xdc_Char)0x3a,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x54,  /* [4463] */
    (xdc_Char)0x61,  /* [4464] */
    (xdc_Char)0x73,  /* [4465] */
    (xdc_Char)0x6b,  /* [4466] */
    (xdc_Char)0x20,  /* [4467] */
    (xdc_Char)0x30,  /* [4468] */
    (xdc_Char)0x78,  /* [4469] */
    (xdc_Char)0x25,  /* [4470] */
    (xdc_Char)0x78,  /* [4471] */
    (xdc_Char)0x2e,  /* [4472] */
    (xdc_Char)0x0,  /* [4473] */
    (xdc_Char)0x45,  /* [4474] */
    (xdc_Char)0x5f,  /* [4475] */
    (xdc_Char)0x6d,  /* [4476] */
    (xdc_Char)0x6f,  /* [4477] */
    (xdc_Char)0x64,  /* [4478] */
    (xdc_Char)0x75,  /* [4479] */
    (xdc_Char)0x6c,  /* [4480] */
    (xdc_Char)0x65,  /* [4481] */
    (xdc_Char)0x53,  /* [4482] */
    (xdc_Char)0x74,  /* [4483] */
    (xdc_Char)0x61,  /* [4484] */
    (xdc_Char)0x74,  /* [4485] */
    (xdc_Char)0x65,  /* [4486] */
    (xdc_Char)0x43,  /* [4487] */
    (xdc_Char)0x68,  /* [4488] */
    (xdc_Char)0x65,  /* [4489] */
    (xdc_Char)0x63,  /* [4490] */
    (xdc_Char)0x6b,  /* [4491] */
    (xdc_Char)0x46,  /* [4492] */
    (xdc_Char)0x61,  /* [4493] */
    (xdc_Char)0x69,  /* [4494] */
    (xdc_Char)0x6c,  /* [4495] */
    (xdc_Char)0x65,  /* [4496] */
    (xdc_Char)0x64,  /* [4497] */
    (xdc_Char)0x3a,  /* [4498] */
    (xdc_Char)0x20,  /* [4499] */
    (xdc_Char)0x54,  /* [4500] */
    (xdc_Char)0x61,  /* [4501] */
    (xdc_Char)0x73,  /* [4502] */
    (xdc_Char)0x6b,  /* [4503] */
    (xdc_Char)0x20,  /* [4504] */
    (xdc_Char)0x6d,  /* [4505] */
    (xdc_Char)0x6f,  /* [4506] */
    (xdc_Char)0x64,  /* [4507] */
    (xdc_Char)0x75,  /* [4508] */
    (xdc_Char)0x6c,  /* [4509] */
    (xdc_Char)0x65,  /* [4510] */
    (xdc_Char)0x20,  /* [4511] */
    (xdc_Char)0x73,  /* [4512] */
    (xdc_Char)0x74,  /* [4513] */
    (xdc_Char)0x61,  /* [4514] */
    (xdc_Char)0x74,  /* [4515] */
    (xdc_Char)0x65,  /* [4516] */
    (xdc_Char)0x20,  /* [4517] */
    (xdc_Char)0x64,  /* [4518] */
    (xdc_Char)0x61,  /* [4519] */
    (xdc_Char)0x74,  /* [4520] */
    (xdc_Char)0x61,  /* [4521] */
    (xdc_Char)0x20,  /* [4522] */
    (xdc_Char)0x69,  /* [4523] */
    (xdc_Char)0x6e,  /* [4524] */
    (xdc_Char)0x74,  /* [4525] */
    (xdc_Char)0x65,  /* [4526] */
    (xdc_Char)0x67,  /* [4527] */
    (xdc_Char)0x72,  /* [4528] */
    (xdc_Char)0x69,  /* [4529] */
    (xdc_Char)0x74,  /* [4530] */
    (xdc_Char)0x79,  /* [4531] */
    (xdc_Char)0x20,  /* [4532] */
    (xdc_Char)0x63,  /* [4533] */
    (xdc_Char)0x68,  /* [4534] */
    (xdc_Char)0x65,  /* [4535] */
    (xdc_Char)0x63,  /* [4536] */
    (xdc_Char)0x6b,  /* [4537] */
    (xdc_Char)0x20,  /* [4538] */
    (xdc_Char)0x66,  /* [4539] */
    (xdc_Char)0x61,  /* [4540] */
    (xdc_Char)0x69,  /* [4541] */
    (xdc_Char)0x6c,  /* [4542] */
    (xdc_Char)0x65,  /* [4543] */
    (xdc_Char)0x64,  /* [4544] */
    (xdc_Char)0x2e,  /* [4545] */
    (xdc_Char)0x0,  /* [4546] */
    (xdc_Char)0x45,  /* [4547] */
    (xdc_Char)0x5f,  /* [4548] */
    (xdc_Char)0x6f,  /* [4549] */
    (xdc_Char)0x62,  /* [4550] */
    (xdc_Char)0x6a,  /* [4551] */
    (xdc_Char)0x65,  /* [4552] */
    (xdc_Char)0x63,  /* [4553] */
    (xdc_Char)0x74,  /* [4554] */
    (xdc_Char)0x43,  /* [4555] */
    (xdc_Char)0x68,  /* [4556] */
    (xdc_Char)0x65,  /* [4557] */
    (xdc_Char)0x63,  /* [4558] */
    (xdc_Char)0x6b,  /* [4559] */
    (xdc_Char)0x46,  /* [4560] */
    (xdc_Char)0x61,  /* [4561] */
    (xdc_Char)0x69,  /* [4562] */
    (xdc_Char)0x6c,  /* [4563] */
    (xdc_Char)0x65,  /* [4564] */
    (xdc_Char)0x64,  /* [4565] */
    (xdc_Char)0x3a,  /* [4566] */
    (xdc_Char)0x20,  /* [4567] */
    (xdc_Char)0x54,  /* [4568] */
    (xdc_Char)0x61,  /* [4569] */
    (xdc_Char)0x73,  /* [4570] */
    (xdc_Char)0x6b,  /* [4571] */
    (xdc_Char)0x20,  /* [4572] */
    (xdc_Char)0x30,  /* [4573] */
    (xdc_Char)0x78,  /* [4574] */
    (xdc_Char)0x25,  /* [4575] */
    (xdc_Char)0x78,  /* [4576] */
    (xdc_Char)0x20,  /* [4577] */
    (xdc_Char)0x6f,  /* [4578] */
    (xdc_Char)0x62,  /* [4579] */
    (xdc_Char)0x6a,  /* [4580] */
    (xdc_Char)0x65,  /* [4581] */
    (xdc_Char)0x63,  /* [4582] */
    (xdc_Char)0x74,  /* [4583] */
    (xdc_Char)0x20,  /* [4584] */
    (xdc_Char)0x64,  /* [4585] */
    (xdc_Char)0x61,  /* [4586] */
    (xdc_Char)0x74,  /* [4587] */
    (xdc_Char)0x61,  /* [4588] */
    (xdc_Char)0x20,  /* [4589] */
    (xdc_Char)0x69,  /* [4590] */
    (xdc_Char)0x6e,  /* [4591] */
    (xdc_Char)0x74,  /* [4592] */
    (xdc_Char)0x65,  /* [4593] */
    (xdc_Char)0x67,  /* [4594] */
    (xdc_Char)0x72,  /* [4595] */
    (xdc_Char)0x69,  /* [4596] */
    (xdc_Char)0x74,  /* [4597] */
    (xdc_Char)0x79,  /* [4598] */
    (xdc_Char)0x20,  /* [4599] */
    (xdc_Char)0x63,  /* [4600] */
    (xdc_Char)0x68,  /* [4601] */
    (xdc_Char)0x65,  /* [4602] */
    (xdc_Char)0x63,  /* [4603] */
    (xdc_Char)0x6b,  /* [4604] */
    (xdc_Char)0x20,  /* [4605] */
    (xdc_Char)0x66,  /* [4606] */
    (xdc_Char)0x61,  /* [4607] */
    (xdc_Char)0x69,  /* [4608] */
    (xdc_Char)0x6c,  /* [4609] */
    (xdc_Char)0x65,  /* [4610] */
    (xdc_Char)0x64,  /* [4611] */
    (xdc_Char)0x2e,  /* [4612] */
    (xdc_Char)0x0,  /* [4613] */
    (xdc_Char)0x45,  /* [4614] */
    (xdc_Char)0x5f,  /* [4615] */
    (xdc_Char)0x6f,  /* [4616] */
    (xdc_Char)0x62,  /* [4617] */
    (xdc_Char)0x6a,  /* [4618] */
    (xdc_Char)0x65,  /* [4619] */
    (xdc_Char)0x63,  /* [4620] */
    (xdc_Char)0x74,  /* [4621] */
    (xdc_Char)0x4e,  /* [4622] */
    (xdc_Char)0x6f,  /* [4623] */
    (xdc_Char)0x74,  /* [4624] */
    (xdc_Char)0x49,  /* [4625] */
    (xdc_Char)0x6e,  /* [4626] */
    (xdc_Char)0x4b,  /* [4627] */
    (xdc_Char)0x65,  /* [4628] */
    (xdc_Char)0x72,  /* [4629] */
    (xdc_Char)0x6e,  /* [4630] */
    (xdc_Char)0x65,  /* [4631] */
    (xdc_Char)0x6c,  /* [4632] */
    (xdc_Char)0x53,  /* [4633] */
    (xdc_Char)0x70,  /* [4634] */
    (xdc_Char)0x61,  /* [4635] */
    (xdc_Char)0x63,  /* [4636] */
    (xdc_Char)0x65,  /* [4637] */
    (xdc_Char)0x3a,  /* [4638] */
    (xdc_Char)0x20,  /* [4639] */
    (xdc_Char)0x54,  /* [4640] */
    (xdc_Char)0x61,  /* [4641] */
    (xdc_Char)0x73,  /* [4642] */
    (xdc_Char)0x6b,  /* [4643] */
    (xdc_Char)0x20,  /* [4644] */
    (xdc_Char)0x6f,  /* [4645] */
    (xdc_Char)0x62,  /* [4646] */
    (xdc_Char)0x6a,  /* [4647] */
    (xdc_Char)0x65,  /* [4648] */
    (xdc_Char)0x63,  /* [4649] */
    (xdc_Char)0x74,  /* [4650] */
    (xdc_Char)0x20,  /* [4651] */
    (xdc_Char)0x70,  /* [4652] */
    (xdc_Char)0x61,  /* [4653] */
    (xdc_Char)0x73,  /* [4654] */
    (xdc_Char)0x73,  /* [4655] */
    (xdc_Char)0x65,  /* [4656] */
    (xdc_Char)0x64,  /* [4657] */
    (xdc_Char)0x20,  /* [4658] */
    (xdc_Char)0x6e,  /* [4659] */
    (xdc_Char)0x6f,  /* [4660] */
    (xdc_Char)0x74,  /* [4661] */
    (xdc_Char)0x20,  /* [4662] */
    (xdc_Char)0x69,  /* [4663] */
    (xdc_Char)0x6e,  /* [4664] */
    (xdc_Char)0x20,  /* [4665] */
    (xdc_Char)0x4b,  /* [4666] */
    (xdc_Char)0x65,  /* [4667] */
    (xdc_Char)0x72,  /* [4668] */
    (xdc_Char)0x6e,  /* [4669] */
    (xdc_Char)0x65,  /* [4670] */
    (xdc_Char)0x6c,  /* [4671] */
    (xdc_Char)0x20,  /* [4672] */
    (xdc_Char)0x61,  /* [4673] */
    (xdc_Char)0x64,  /* [4674] */
    (xdc_Char)0x64,  /* [4675] */
    (xdc_Char)0x72,  /* [4676] */
    (xdc_Char)0x65,  /* [4677] */
    (xdc_Char)0x73,  /* [4678] */
    (xdc_Char)0x73,  /* [4679] */
    (xdc_Char)0x20,  /* [4680] */
    (xdc_Char)0x73,  /* [4681] */
    (xdc_Char)0x70,  /* [4682] */
    (xdc_Char)0x61,  /* [4683] */
    (xdc_Char)0x63,  /* [4684] */
    (xdc_Char)0x65,  /* [4685] */
    (xdc_Char)0x2e,  /* [4686] */
    (xdc_Char)0x0,  /* [4687] */
    (xdc_Char)0x45,  /* [4688] */
    (xdc_Char)0x5f,  /* [4689] */
    (xdc_Char)0x73,  /* [4690] */
    (xdc_Char)0x74,  /* [4691] */
    (xdc_Char)0x61,  /* [4692] */
    (xdc_Char)0x63,  /* [4693] */
    (xdc_Char)0x6b,  /* [4694] */
    (xdc_Char)0x4f,  /* [4695] */
    (xdc_Char)0x76,  /* [4696] */
    (xdc_Char)0x65,  /* [4697] */
    (xdc_Char)0x72,  /* [4698] */
    (xdc_Char)0x66,  /* [4699] */
    (xdc_Char)0x6c,  /* [4700] */
    (xdc_Char)0x6f,  /* [4701] */
    (xdc_Char)0x77,  /* [4702] */
    (xdc_Char)0x3a,  /* [4703] */
    (xdc_Char)0x20,  /* [4704] */
    (xdc_Char)0x49,  /* [4705] */
    (xdc_Char)0x53,  /* [4706] */
    (xdc_Char)0x52,  /* [4707] */
    (xdc_Char)0x20,  /* [4708] */
    (xdc_Char)0x73,  /* [4709] */
    (xdc_Char)0x74,  /* [4710] */
    (xdc_Char)0x61,  /* [4711] */
    (xdc_Char)0x63,  /* [4712] */
    (xdc_Char)0x6b,  /* [4713] */
    (xdc_Char)0x20,  /* [4714] */
    (xdc_Char)0x6f,  /* [4715] */
    (xdc_Char)0x76,  /* [4716] */
    (xdc_Char)0x65,  /* [4717] */
    (xdc_Char)0x72,  /* [4718] */
    (xdc_Char)0x66,  /* [4719] */
    (xdc_Char)0x6c,  /* [4720] */
    (xdc_Char)0x6f,  /* [4721] */
    (xdc_Char)0x77,  /* [4722] */
    (xdc_Char)0x2e,  /* [4723] */
    (xdc_Char)0x0,  /* [4724] */
    (xdc_Char)0x45,  /* [4725] */
    (xdc_Char)0x5f,  /* [4726] */
    (xdc_Char)0x70,  /* [4727] */
    (xdc_Char)0x72,  /* [4728] */
    (xdc_Char)0x69,  /* [4729] */
    (xdc_Char)0x6f,  /* [4730] */
    (xdc_Char)0x72,  /* [4731] */
    (xdc_Char)0x69,  /* [4732] */
    (xdc_Char)0x74,  /* [4733] */
    (xdc_Char)0x79,  /* [4734] */
    (xdc_Char)0x3a,  /* [4735] */
    (xdc_Char)0x20,  /* [4736] */
    (xdc_Char)0x54,  /* [4737] */
    (xdc_Char)0x68,  /* [4738] */
    (xdc_Char)0x72,  /* [4739] */
    (xdc_Char)0x65,  /* [4740] */
    (xdc_Char)0x61,  /* [4741] */
    (xdc_Char)0x64,  /* [4742] */
    (xdc_Char)0x20,  /* [4743] */
    (xdc_Char)0x70,  /* [4744] */
    (xdc_Char)0x72,  /* [4745] */
    (xdc_Char)0x69,  /* [4746] */
    (xdc_Char)0x6f,  /* [4747] */
    (xdc_Char)0x72,  /* [4748] */
    (xdc_Char)0x69,  /* [4749] */
    (xdc_Char)0x74,  /* [4750] */
    (xdc_Char)0x79,  /* [4751] */
    (xdc_Char)0x20,  /* [4752] */
    (xdc_Char)0x69,  /* [4753] */
    (xdc_Char)0x73,  /* [4754] */
    (xdc_Char)0x20,  /* [4755] */
    (xdc_Char)0x69,  /* [4756] */
    (xdc_Char)0x6e,  /* [4757] */
    (xdc_Char)0x76,  /* [4758] */
    (xdc_Char)0x61,  /* [4759] */
    (xdc_Char)0x6c,  /* [4760] */
    (xdc_Char)0x69,  /* [4761] */
    (xdc_Char)0x64,  /* [4762] */
    (xdc_Char)0x20,  /* [4763] */
    (xdc_Char)0x25,  /* [4764] */
    (xdc_Char)0x64,  /* [4765] */
    (xdc_Char)0x0,  /* [4766] */
    (xdc_Char)0x45,  /* [4767] */
    (xdc_Char)0x5f,  /* [4768] */
    (xdc_Char)0x62,  /* [4769] */
    (xdc_Char)0x61,  /* [4770] */
    (xdc_Char)0x64,  /* [4771] */
    (xdc_Char)0x49,  /* [4772] */
    (xdc_Char)0x6e,  /* [4773] */
    (xdc_Char)0x74,  /* [4774] */
    (xdc_Char)0x4e,  /* [4775] */
    (xdc_Char)0x75,  /* [4776] */
    (xdc_Char)0x6d,  /* [4777] */
    (xdc_Char)0x2c,  /* [4778] */
    (xdc_Char)0x20,  /* [4779] */
    (xdc_Char)0x69,  /* [4780] */
    (xdc_Char)0x6e,  /* [4781] */
    (xdc_Char)0x74,  /* [4782] */
    (xdc_Char)0x6e,  /* [4783] */
    (xdc_Char)0x75,  /* [4784] */
    (xdc_Char)0x6d,  /* [4785] */
    (xdc_Char)0x3a,  /* [4786] */
    (xdc_Char)0x20,  /* [4787] */
    (xdc_Char)0x25,  /* [4788] */
    (xdc_Char)0x64,  /* [4789] */
    (xdc_Char)0x20,  /* [4790] */
    (xdc_Char)0x69,  /* [4791] */
    (xdc_Char)0x73,  /* [4792] */
    (xdc_Char)0x20,  /* [4793] */
    (xdc_Char)0x6f,  /* [4794] */
    (xdc_Char)0x75,  /* [4795] */
    (xdc_Char)0x74,  /* [4796] */
    (xdc_Char)0x20,  /* [4797] */
    (xdc_Char)0x6f,  /* [4798] */
    (xdc_Char)0x66,  /* [4799] */
    (xdc_Char)0x20,  /* [4800] */
    (xdc_Char)0x72,  /* [4801] */
    (xdc_Char)0x61,  /* [4802] */
    (xdc_Char)0x6e,  /* [4803] */
    (xdc_Char)0x67,  /* [4804] */
    (xdc_Char)0x65,  /* [4805] */
    (xdc_Char)0x0,  /* [4806] */
    (xdc_Char)0x45,  /* [4807] */
    (xdc_Char)0x5f,  /* [4808] */
    (xdc_Char)0x61,  /* [4809] */
    (xdc_Char)0x6c,  /* [4810] */
    (xdc_Char)0x72,  /* [4811] */
    (xdc_Char)0x65,  /* [4812] */
    (xdc_Char)0x61,  /* [4813] */
    (xdc_Char)0x64,  /* [4814] */
    (xdc_Char)0x79,  /* [4815] */
    (xdc_Char)0x44,  /* [4816] */
    (xdc_Char)0x65,  /* [4817] */
    (xdc_Char)0x66,  /* [4818] */
    (xdc_Char)0x69,  /* [4819] */
    (xdc_Char)0x6e,  /* [4820] */
    (xdc_Char)0x65,  /* [4821] */
    (xdc_Char)0x64,  /* [4822] */
    (xdc_Char)0x3a,  /* [4823] */
    (xdc_Char)0x20,  /* [4824] */
    (xdc_Char)0x48,  /* [4825] */
    (xdc_Char)0x77,  /* [4826] */
    (xdc_Char)0x69,  /* [4827] */
    (xdc_Char)0x20,  /* [4828] */
    (xdc_Char)0x61,  /* [4829] */
    (xdc_Char)0x6c,  /* [4830] */
    (xdc_Char)0x72,  /* [4831] */
    (xdc_Char)0x65,  /* [4832] */
    (xdc_Char)0x61,  /* [4833] */
    (xdc_Char)0x64,  /* [4834] */
    (xdc_Char)0x79,  /* [4835] */
    (xdc_Char)0x20,  /* [4836] */
    (xdc_Char)0x64,  /* [4837] */
    (xdc_Char)0x65,  /* [4838] */
    (xdc_Char)0x66,  /* [4839] */
    (xdc_Char)0x69,  /* [4840] */
    (xdc_Char)0x6e,  /* [4841] */
    (xdc_Char)0x65,  /* [4842] */
    (xdc_Char)0x64,  /* [4843] */
    (xdc_Char)0x3a,  /* [4844] */
    (xdc_Char)0x20,  /* [4845] */
    (xdc_Char)0x69,  /* [4846] */
    (xdc_Char)0x6e,  /* [4847] */
    (xdc_Char)0x74,  /* [4848] */
    (xdc_Char)0x72,  /* [4849] */
    (xdc_Char)0x23,  /* [4850] */
    (xdc_Char)0x20,  /* [4851] */
    (xdc_Char)0x25,  /* [4852] */
    (xdc_Char)0x64,  /* [4853] */
    (xdc_Char)0x0,  /* [4854] */
    (xdc_Char)0x45,  /* [4855] */
    (xdc_Char)0x5f,  /* [4856] */
    (xdc_Char)0x68,  /* [4857] */
    (xdc_Char)0x77,  /* [4858] */
    (xdc_Char)0x69,  /* [4859] */
    (xdc_Char)0x4c,  /* [4860] */
    (xdc_Char)0x69,  /* [4861] */
    (xdc_Char)0x6d,  /* [4862] */
    (xdc_Char)0x69,  /* [4863] */
    (xdc_Char)0x74,  /* [4864] */
    (xdc_Char)0x45,  /* [4865] */
    (xdc_Char)0x78,  /* [4866] */
    (xdc_Char)0x63,  /* [4867] */
    (xdc_Char)0x65,  /* [4868] */
    (xdc_Char)0x65,  /* [4869] */
    (xdc_Char)0x64,  /* [4870] */
    (xdc_Char)0x65,  /* [4871] */
    (xdc_Char)0x64,  /* [4872] */
    (xdc_Char)0x3a,  /* [4873] */
    (xdc_Char)0x20,  /* [4874] */
    (xdc_Char)0x54,  /* [4875] */
    (xdc_Char)0x6f,  /* [4876] */
    (xdc_Char)0x6f,  /* [4877] */
    (xdc_Char)0x20,  /* [4878] */
    (xdc_Char)0x6d,  /* [4879] */
    (xdc_Char)0x61,  /* [4880] */
    (xdc_Char)0x6e,  /* [4881] */
    (xdc_Char)0x79,  /* [4882] */
    (xdc_Char)0x20,  /* [4883] */
    (xdc_Char)0x69,  /* [4884] */
    (xdc_Char)0x6e,  /* [4885] */
    (xdc_Char)0x74,  /* [4886] */
    (xdc_Char)0x65,  /* [4887] */
    (xdc_Char)0x72,  /* [4888] */
    (xdc_Char)0x72,  /* [4889] */
    (xdc_Char)0x75,  /* [4890] */
    (xdc_Char)0x70,  /* [4891] */
    (xdc_Char)0x74,  /* [4892] */
    (xdc_Char)0x73,  /* [4893] */
    (xdc_Char)0x20,  /* [4894] */
    (xdc_Char)0x64,  /* [4895] */
    (xdc_Char)0x65,  /* [4896] */
    (xdc_Char)0x66,  /* [4897] */
    (xdc_Char)0x69,  /* [4898] */
    (xdc_Char)0x6e,  /* [4899] */
    (xdc_Char)0x65,  /* [4900] */
    (xdc_Char)0x64,  /* [4901] */
    (xdc_Char)0x0,  /* [4902] */
    (xdc_Char)0x45,  /* [4903] */
    (xdc_Char)0x5f,  /* [4904] */
    (xdc_Char)0x65,  /* [4905] */
    (xdc_Char)0x78,  /* [4906] */
    (xdc_Char)0x63,  /* [4907] */
    (xdc_Char)0x65,  /* [4908] */
    (xdc_Char)0x70,  /* [4909] */
    (xdc_Char)0x74,  /* [4910] */
    (xdc_Char)0x69,  /* [4911] */
    (xdc_Char)0x6f,  /* [4912] */
    (xdc_Char)0x6e,  /* [4913] */
    (xdc_Char)0x3a,  /* [4914] */
    (xdc_Char)0x20,  /* [4915] */
    (xdc_Char)0x69,  /* [4916] */
    (xdc_Char)0x64,  /* [4917] */
    (xdc_Char)0x20,  /* [4918] */
    (xdc_Char)0x3d,  /* [4919] */
    (xdc_Char)0x20,  /* [4920] */
    (xdc_Char)0x25,  /* [4921] */
    (xdc_Char)0x64,  /* [4922] */
    (xdc_Char)0x2c,  /* [4923] */
    (xdc_Char)0x20,  /* [4924] */
    (xdc_Char)0x70,  /* [4925] */
    (xdc_Char)0x63,  /* [4926] */
    (xdc_Char)0x20,  /* [4927] */
    (xdc_Char)0x3d,  /* [4928] */
    (xdc_Char)0x20,  /* [4929] */
    (xdc_Char)0x25,  /* [4930] */
    (xdc_Char)0x30,  /* [4931] */
    (xdc_Char)0x38,  /* [4932] */
    (xdc_Char)0x78,  /* [4933] */
    (xdc_Char)0x2e,  /* [4934] */
    (xdc_Char)0xa,  /* [4935] */
    (xdc_Char)0x54,  /* [4936] */
    (xdc_Char)0x6f,  /* [4937] */
    (xdc_Char)0x20,  /* [4938] */
    (xdc_Char)0x73,  /* [4939] */
    (xdc_Char)0x65,  /* [4940] */
    (xdc_Char)0x65,  /* [4941] */
    (xdc_Char)0x20,  /* [4942] */
    (xdc_Char)0x6d,  /* [4943] */
    (xdc_Char)0x6f,  /* [4944] */
    (xdc_Char)0x72,  /* [4945] */
    (xdc_Char)0x65,  /* [4946] */
    (xdc_Char)0x20,  /* [4947] */
    (xdc_Char)0x65,  /* [4948] */
    (xdc_Char)0x78,  /* [4949] */
    (xdc_Char)0x63,  /* [4950] */
    (xdc_Char)0x65,  /* [4951] */
    (xdc_Char)0x70,  /* [4952] */
    (xdc_Char)0x74,  /* [4953] */
    (xdc_Char)0x69,  /* [4954] */
    (xdc_Char)0x6f,  /* [4955] */
    (xdc_Char)0x6e,  /* [4956] */
    (xdc_Char)0x20,  /* [4957] */
    (xdc_Char)0x64,  /* [4958] */
    (xdc_Char)0x65,  /* [4959] */
    (xdc_Char)0x74,  /* [4960] */
    (xdc_Char)0x61,  /* [4961] */
    (xdc_Char)0x69,  /* [4962] */
    (xdc_Char)0x6c,  /* [4963] */
    (xdc_Char)0x2c,  /* [4964] */
    (xdc_Char)0x20,  /* [4965] */
    (xdc_Char)0x73,  /* [4966] */
    (xdc_Char)0x65,  /* [4967] */
    (xdc_Char)0x74,  /* [4968] */
    (xdc_Char)0x20,  /* [4969] */
    (xdc_Char)0x74,  /* [4970] */
    (xdc_Char)0x69,  /* [4971] */
    (xdc_Char)0x2e,  /* [4972] */
    (xdc_Char)0x73,  /* [4973] */
    (xdc_Char)0x79,  /* [4974] */
    (xdc_Char)0x73,  /* [4975] */
    (xdc_Char)0x62,  /* [4976] */
    (xdc_Char)0x69,  /* [4977] */
    (xdc_Char)0x6f,  /* [4978] */
    (xdc_Char)0x73,  /* [4979] */
    (xdc_Char)0x2e,  /* [4980] */
    (xdc_Char)0x66,  /* [4981] */
    (xdc_Char)0x61,  /* [4982] */
    (xdc_Char)0x6d,  /* [4983] */
    (xdc_Char)0x69,  /* [4984] */
    (xdc_Char)0x6c,  /* [4985] */
    (xdc_Char)0x79,  /* [4986] */
    (xdc_Char)0x2e,  /* [4987] */
    (xdc_Char)0x61,  /* [4988] */
    (xdc_Char)0x72,  /* [4989] */
    (xdc_Char)0x6d,  /* [4990] */
    (xdc_Char)0x2e,  /* [4991] */
    (xdc_Char)0x6d,  /* [4992] */
    (xdc_Char)0x33,  /* [4993] */
    (xdc_Char)0x2e,  /* [4994] */
    (xdc_Char)0x48,  /* [4995] */
    (xdc_Char)0x77,  /* [4996] */
    (xdc_Char)0x69,  /* [4997] */
    (xdc_Char)0x2e,  /* [4998] */
    (xdc_Char)0x65,  /* [4999] */
    (xdc_Char)0x6e,  /* [5000] */
    (xdc_Char)0x61,  /* [5001] */
    (xdc_Char)0x62,  /* [5002] */
    (xdc_Char)0x6c,  /* [5003] */
    (xdc_Char)0x65,  /* [5004] */
    (xdc_Char)0x45,  /* [5005] */
    (xdc_Char)0x78,  /* [5006] */
    (xdc_Char)0x63,  /* [5007] */
    (xdc_Char)0x65,  /* [5008] */
    (xdc_Char)0x70,  /* [5009] */
    (xdc_Char)0x74,  /* [5010] */
    (xdc_Char)0x69,  /* [5011] */
    (xdc_Char)0x6f,  /* [5012] */
    (xdc_Char)0x6e,  /* [5013] */
    (xdc_Char)0x20,  /* [5014] */
    (xdc_Char)0x3d,  /* [5015] */
    (xdc_Char)0x20,  /* [5016] */
    (xdc_Char)0x74,  /* [5017] */
    (xdc_Char)0x72,  /* [5018] */
    (xdc_Char)0x75,  /* [5019] */
    (xdc_Char)0x65,  /* [5020] */
    (xdc_Char)0x20,  /* [5021] */
    (xdc_Char)0x6f,  /* [5022] */
    (xdc_Char)0x72,  /* [5023] */
    (xdc_Char)0x2c,  /* [5024] */
    (xdc_Char)0xa,  /* [5025] */
    (xdc_Char)0x65,  /* [5026] */
    (xdc_Char)0x78,  /* [5027] */
    (xdc_Char)0x61,  /* [5028] */
    (xdc_Char)0x6d,  /* [5029] */
    (xdc_Char)0x69,  /* [5030] */
    (xdc_Char)0x6e,  /* [5031] */
    (xdc_Char)0x65,  /* [5032] */
    (xdc_Char)0x20,  /* [5033] */
    (xdc_Char)0x74,  /* [5034] */
    (xdc_Char)0x68,  /* [5035] */
    (xdc_Char)0x65,  /* [5036] */
    (xdc_Char)0x20,  /* [5037] */
    (xdc_Char)0x45,  /* [5038] */
    (xdc_Char)0x78,  /* [5039] */
    (xdc_Char)0x63,  /* [5040] */
    (xdc_Char)0x65,  /* [5041] */
    (xdc_Char)0x70,  /* [5042] */
    (xdc_Char)0x74,  /* [5043] */
    (xdc_Char)0x69,  /* [5044] */
    (xdc_Char)0x6f,  /* [5045] */
    (xdc_Char)0x6e,  /* [5046] */
    (xdc_Char)0x20,  /* [5047] */
    (xdc_Char)0x76,  /* [5048] */
    (xdc_Char)0x69,  /* [5049] */
    (xdc_Char)0x65,  /* [5050] */
    (xdc_Char)0x77,  /* [5051] */
    (xdc_Char)0x20,  /* [5052] */
    (xdc_Char)0x66,  /* [5053] */
    (xdc_Char)0x6f,  /* [5054] */
    (xdc_Char)0x72,  /* [5055] */
    (xdc_Char)0x20,  /* [5056] */
    (xdc_Char)0x74,  /* [5057] */
    (xdc_Char)0x68,  /* [5058] */
    (xdc_Char)0x65,  /* [5059] */
    (xdc_Char)0x20,  /* [5060] */
    (xdc_Char)0x74,  /* [5061] */
    (xdc_Char)0x69,  /* [5062] */
    (xdc_Char)0x2e,  /* [5063] */
    (xdc_Char)0x73,  /* [5064] */
    (xdc_Char)0x79,  /* [5065] */
    (xdc_Char)0x73,  /* [5066] */
    (xdc_Char)0x62,  /* [5067] */
    (xdc_Char)0x69,  /* [5068] */
    (xdc_Char)0x6f,  /* [5069] */
    (xdc_Char)0x73,  /* [5070] */
    (xdc_Char)0x2e,  /* [5071] */
    (xdc_Char)0x66,  /* [5072] */
    (xdc_Char)0x61,  /* [5073] */
    (xdc_Char)0x6d,  /* [5074] */
    (xdc_Char)0x69,  /* [5075] */
    (xdc_Char)0x6c,  /* [5076] */
    (xdc_Char)0x79,  /* [5077] */
    (xdc_Char)0x2e,  /* [5078] */
    (xdc_Char)0x61,  /* [5079] */
    (xdc_Char)0x72,  /* [5080] */
    (xdc_Char)0x6d,  /* [5081] */
    (xdc_Char)0x2e,  /* [5082] */
    (xdc_Char)0x6d,  /* [5083] */
    (xdc_Char)0x33,  /* [5084] */
    (xdc_Char)0x2e,  /* [5085] */
    (xdc_Char)0x48,  /* [5086] */
    (xdc_Char)0x77,  /* [5087] */
    (xdc_Char)0x69,  /* [5088] */
    (xdc_Char)0x20,  /* [5089] */
    (xdc_Char)0x6d,  /* [5090] */
    (xdc_Char)0x6f,  /* [5091] */
    (xdc_Char)0x64,  /* [5092] */
    (xdc_Char)0x75,  /* [5093] */
    (xdc_Char)0x6c,  /* [5094] */
    (xdc_Char)0x65,  /* [5095] */
    (xdc_Char)0x20,  /* [5096] */
    (xdc_Char)0x75,  /* [5097] */
    (xdc_Char)0x73,  /* [5098] */
    (xdc_Char)0x69,  /* [5099] */
    (xdc_Char)0x6e,  /* [5100] */
    (xdc_Char)0x67,  /* [5101] */
    (xdc_Char)0x20,  /* [5102] */
    (xdc_Char)0x52,  /* [5103] */
    (xdc_Char)0x4f,  /* [5104] */
    (xdc_Char)0x56,  /* [5105] */
    (xdc_Char)0x2e,  /* [5106] */
    (xdc_Char)0x0,  /* [5107] */
    (xdc_Char)0x45,  /* [5108] */
    (xdc_Char)0x5f,  /* [5109] */
    (xdc_Char)0x6e,  /* [5110] */
    (xdc_Char)0x6f,  /* [5111] */
    (xdc_Char)0x49,  /* [5112] */
    (xdc_Char)0x73,  /* [5113] */
    (xdc_Char)0x72,  /* [5114] */
    (xdc_Char)0x3a,  /* [5115] */
    (xdc_Char)0x20,  /* [5116] */
    (xdc_Char)0x69,  /* [5117] */
    (xdc_Char)0x64,  /* [5118] */
    (xdc_Char)0x20,  /* [5119] */
    (xdc_Char)0x3d,  /* [5120] */
    (xdc_Char)0x20,  /* [5121] */
    (xdc_Char)0x25,  /* [5122] */
    (xdc_Char)0x64,  /* [5123] */
    (xdc_Char)0x2c,  /* [5124] */
    (xdc_Char)0x20,  /* [5125] */
    (xdc_Char)0x70,  /* [5126] */
    (xdc_Char)0x63,  /* [5127] */
    (xdc_Char)0x20,  /* [5128] */
    (xdc_Char)0x3d,  /* [5129] */
    (xdc_Char)0x20,  /* [5130] */
    (xdc_Char)0x25,  /* [5131] */
    (xdc_Char)0x30,  /* [5132] */
    (xdc_Char)0x38,  /* [5133] */
    (xdc_Char)0x78,  /* [5134] */
    (xdc_Char)0x0,  /* [5135] */
    (xdc_Char)0x45,  /* [5136] */
    (xdc_Char)0x5f,  /* [5137] */
    (xdc_Char)0x4e,  /* [5138] */
    (xdc_Char)0x4d,  /* [5139] */
    (xdc_Char)0x49,  /* [5140] */
    (xdc_Char)0x3a,  /* [5141] */
    (xdc_Char)0x20,  /* [5142] */
    (xdc_Char)0x25,  /* [5143] */
    (xdc_Char)0x73,  /* [5144] */
    (xdc_Char)0x0,  /* [5145] */
    (xdc_Char)0x45,  /* [5146] */
    (xdc_Char)0x5f,  /* [5147] */
    (xdc_Char)0x68,  /* [5148] */
    (xdc_Char)0x61,  /* [5149] */
    (xdc_Char)0x72,  /* [5150] */
    (xdc_Char)0x64,  /* [5151] */
    (xdc_Char)0x46,  /* [5152] */
    (xdc_Char)0x61,  /* [5153] */
    (xdc_Char)0x75,  /* [5154] */
    (xdc_Char)0x6c,  /* [5155] */
    (xdc_Char)0x74,  /* [5156] */
    (xdc_Char)0x3a,  /* [5157] */
    (xdc_Char)0x20,  /* [5158] */
    (xdc_Char)0x25,  /* [5159] */
    (xdc_Char)0x73,  /* [5160] */
    (xdc_Char)0x0,  /* [5161] */
    (xdc_Char)0x45,  /* [5162] */
    (xdc_Char)0x5f,  /* [5163] */
    (xdc_Char)0x6d,  /* [5164] */
    (xdc_Char)0x65,  /* [5165] */
    (xdc_Char)0x6d,  /* [5166] */
    (xdc_Char)0x46,  /* [5167] */
    (xdc_Char)0x61,  /* [5168] */
    (xdc_Char)0x75,  /* [5169] */
    (xdc_Char)0x6c,  /* [5170] */
    (xdc_Char)0x74,  /* [5171] */
    (xdc_Char)0x3a,  /* [5172] */
    (xdc_Char)0x20,  /* [5173] */
    (xdc_Char)0x25,  /* [5174] */
    (xdc_Char)0x73,  /* [5175] */
    (xdc_Char)0x2c,  /* [5176] */
    (xdc_Char)0x20,  /* [5177] */
    (xdc_Char)0x61,  /* [5178] */
    (xdc_Char)0x64,  /* [5179] */
    (xdc_Char)0x64,  /* [5180] */
    (xdc_Char)0x72,  /* [5181] */
    (xdc_Char)0x65,  /* [5182] */
    (xdc_Char)0x73,  /* [5183] */
    (xdc_Char)0x73,  /* [5184] */
    (xdc_Char)0x3a,  /* [5185] */
    (xdc_Char)0x20,  /* [5186] */
    (xdc_Char)0x25,  /* [5187] */
    (xdc_Char)0x30,  /* [5188] */
    (xdc_Char)0x38,  /* [5189] */
    (xdc_Char)0x78,  /* [5190] */
    (xdc_Char)0x0,  /* [5191] */
    (xdc_Char)0x45,  /* [5192] */
    (xdc_Char)0x5f,  /* [5193] */
    (xdc_Char)0x62,  /* [5194] */
    (xdc_Char)0x75,  /* [5195] */
    (xdc_Char)0x73,  /* [5196] */
    (xdc_Char)0x46,  /* [5197] */
    (xdc_Char)0x61,  /* [5198] */
    (xdc_Char)0x75,  /* [5199] */
    (xdc_Char)0x6c,  /* [5200] */
    (xdc_Char)0x74,  /* [5201] */
    (xdc_Char)0x3a,  /* [5202] */
    (xdc_Char)0x20,  /* [5203] */
    (xdc_Char)0x25,  /* [5204] */
    (xdc_Char)0x73,  /* [5205] */
    (xdc_Char)0x2c,  /* [5206] */
    (xdc_Char)0x20,  /* [5207] */
    (xdc_Char)0x61,  /* [5208] */
    (xdc_Char)0x64,  /* [5209] */
    (xdc_Char)0x64,  /* [5210] */
    (xdc_Char)0x72,  /* [5211] */
    (xdc_Char)0x65,  /* [5212] */
    (xdc_Char)0x73,  /* [5213] */
    (xdc_Char)0x73,  /* [5214] */
    (xdc_Char)0x3a,  /* [5215] */
    (xdc_Char)0x20,  /* [5216] */
    (xdc_Char)0x25,  /* [5217] */
    (xdc_Char)0x30,  /* [5218] */
    (xdc_Char)0x38,  /* [5219] */
    (xdc_Char)0x78,  /* [5220] */
    (xdc_Char)0x0,  /* [5221] */
    (xdc_Char)0x45,  /* [5222] */
    (xdc_Char)0x5f,  /* [5223] */
    (xdc_Char)0x75,  /* [5224] */
    (xdc_Char)0x73,  /* [5225] */
    (xdc_Char)0x61,  /* [5226] */
    (xdc_Char)0x67,  /* [5227] */
    (xdc_Char)0x65,  /* [5228] */
    (xdc_Char)0x46,  /* [5229] */
    (xdc_Char)0x61,  /* [5230] */
    (xdc_Char)0x75,  /* [5231] */
    (xdc_Char)0x6c,  /* [5232] */
    (xdc_Char)0x74,  /* [5233] */
    (xdc_Char)0x3a,  /* [5234] */
    (xdc_Char)0x20,  /* [5235] */
    (xdc_Char)0x25,  /* [5236] */
    (xdc_Char)0x73,  /* [5237] */
    (xdc_Char)0x0,  /* [5238] */
    (xdc_Char)0x45,  /* [5239] */
    (xdc_Char)0x5f,  /* [5240] */
    (xdc_Char)0x73,  /* [5241] */
    (xdc_Char)0x76,  /* [5242] */
    (xdc_Char)0x43,  /* [5243] */
    (xdc_Char)0x61,  /* [5244] */
    (xdc_Char)0x6c,  /* [5245] */
    (xdc_Char)0x6c,  /* [5246] */
    (xdc_Char)0x3a,  /* [5247] */
    (xdc_Char)0x20,  /* [5248] */
    (xdc_Char)0x73,  /* [5249] */
    (xdc_Char)0x76,  /* [5250] */
    (xdc_Char)0x4e,  /* [5251] */
    (xdc_Char)0x75,  /* [5252] */
    (xdc_Char)0x6d,  /* [5253] */
    (xdc_Char)0x20,  /* [5254] */
    (xdc_Char)0x3d,  /* [5255] */
    (xdc_Char)0x20,  /* [5256] */
    (xdc_Char)0x25,  /* [5257] */
    (xdc_Char)0x64,  /* [5258] */
    (xdc_Char)0x0,  /* [5259] */
    (xdc_Char)0x45,  /* [5260] */
    (xdc_Char)0x5f,  /* [5261] */
    (xdc_Char)0x64,  /* [5262] */
    (xdc_Char)0x65,  /* [5263] */
    (xdc_Char)0x62,  /* [5264] */
    (xdc_Char)0x75,  /* [5265] */
    (xdc_Char)0x67,  /* [5266] */
    (xdc_Char)0x4d,  /* [5267] */
    (xdc_Char)0x6f,  /* [5268] */
    (xdc_Char)0x6e,  /* [5269] */
    (xdc_Char)0x3a,  /* [5270] */
    (xdc_Char)0x20,  /* [5271] */
    (xdc_Char)0x25,  /* [5272] */
    (xdc_Char)0x73,  /* [5273] */
    (xdc_Char)0x0,  /* [5274] */
    (xdc_Char)0x45,  /* [5275] */
    (xdc_Char)0x5f,  /* [5276] */
    (xdc_Char)0x72,  /* [5277] */
    (xdc_Char)0x65,  /* [5278] */
    (xdc_Char)0x73,  /* [5279] */
    (xdc_Char)0x65,  /* [5280] */
    (xdc_Char)0x72,  /* [5281] */
    (xdc_Char)0x76,  /* [5282] */
    (xdc_Char)0x65,  /* [5283] */
    (xdc_Char)0x64,  /* [5284] */
    (xdc_Char)0x3a,  /* [5285] */
    (xdc_Char)0x20,  /* [5286] */
    (xdc_Char)0x25,  /* [5287] */
    (xdc_Char)0x73,  /* [5288] */
    (xdc_Char)0x20,  /* [5289] */
    (xdc_Char)0x25,  /* [5290] */
    (xdc_Char)0x64,  /* [5291] */
    (xdc_Char)0x0,  /* [5292] */
    (xdc_Char)0x45,  /* [5293] */
    (xdc_Char)0x5f,  /* [5294] */
    (xdc_Char)0x69,  /* [5295] */
    (xdc_Char)0x6e,  /* [5296] */
    (xdc_Char)0x76,  /* [5297] */
    (xdc_Char)0x61,  /* [5298] */
    (xdc_Char)0x6c,  /* [5299] */
    (xdc_Char)0x69,  /* [5300] */
    (xdc_Char)0x64,  /* [5301] */
    (xdc_Char)0x54,  /* [5302] */
    (xdc_Char)0x69,  /* [5303] */
    (xdc_Char)0x6d,  /* [5304] */
    (xdc_Char)0x65,  /* [5305] */
    (xdc_Char)0x72,  /* [5306] */
    (xdc_Char)0x3a,  /* [5307] */
    (xdc_Char)0x20,  /* [5308] */
    (xdc_Char)0x49,  /* [5309] */
    (xdc_Char)0x6e,  /* [5310] */
    (xdc_Char)0x76,  /* [5311] */
    (xdc_Char)0x61,  /* [5312] */
    (xdc_Char)0x6c,  /* [5313] */
    (xdc_Char)0x69,  /* [5314] */
    (xdc_Char)0x64,  /* [5315] */
    (xdc_Char)0x20,  /* [5316] */
    (xdc_Char)0x54,  /* [5317] */
    (xdc_Char)0x69,  /* [5318] */
    (xdc_Char)0x6d,  /* [5319] */
    (xdc_Char)0x65,  /* [5320] */
    (xdc_Char)0x72,  /* [5321] */
    (xdc_Char)0x20,  /* [5322] */
    (xdc_Char)0x49,  /* [5323] */
    (xdc_Char)0x64,  /* [5324] */
    (xdc_Char)0x20,  /* [5325] */
    (xdc_Char)0x25,  /* [5326] */
    (xdc_Char)0x64,  /* [5327] */
    (xdc_Char)0x0,  /* [5328] */
    (xdc_Char)0x45,  /* [5329] */
    (xdc_Char)0x5f,  /* [5330] */
    (xdc_Char)0x6e,  /* [5331] */
    (xdc_Char)0x6f,  /* [5332] */
    (xdc_Char)0x74,  /* [5333] */
    (xdc_Char)0x41,  /* [5334] */
    (xdc_Char)0x76,  /* [5335] */
    (xdc_Char)0x61,  /* [5336] */
    (xdc_Char)0x69,  /* [5337] */
    (xdc_Char)0x6c,  /* [5338] */
    (xdc_Char)0x61,  /* [5339] */
    (xdc_Char)0x62,  /* [5340] */
    (xdc_Char)0x6c,  /* [5341] */
    (xdc_Char)0x65,  /* [5342] */
    (xdc_Char)0x3a,  /* [5343] */
    (xdc_Char)0x20,  /* [5344] */
    (xdc_Char)0x54,  /* [5345] */
    (xdc_Char)0x69,  /* [5346] */
    (xdc_Char)0x6d,  /* [5347] */
    (xdc_Char)0x65,  /* [5348] */
    (xdc_Char)0x72,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x6e,  /* [5351] */
    (xdc_Char)0x6f,  /* [5352] */
    (xdc_Char)0x74,  /* [5353] */
    (xdc_Char)0x20,  /* [5354] */
    (xdc_Char)0x61,  /* [5355] */
    (xdc_Char)0x76,  /* [5356] */
    (xdc_Char)0x61,  /* [5357] */
    (xdc_Char)0x69,  /* [5358] */
    (xdc_Char)0x6c,  /* [5359] */
    (xdc_Char)0x61,  /* [5360] */
    (xdc_Char)0x62,  /* [5361] */
    (xdc_Char)0x6c,  /* [5362] */
    (xdc_Char)0x65,  /* [5363] */
    (xdc_Char)0x20,  /* [5364] */
    (xdc_Char)0x25,  /* [5365] */
    (xdc_Char)0x64,  /* [5366] */
    (xdc_Char)0x0,  /* [5367] */
    (xdc_Char)0x45,  /* [5368] */
    (xdc_Char)0x5f,  /* [5369] */
    (xdc_Char)0x63,  /* [5370] */
    (xdc_Char)0x61,  /* [5371] */
    (xdc_Char)0x6e,  /* [5372] */
    (xdc_Char)0x6e,  /* [5373] */
    (xdc_Char)0x6f,  /* [5374] */
    (xdc_Char)0x74,  /* [5375] */
    (xdc_Char)0x53,  /* [5376] */
    (xdc_Char)0x75,  /* [5377] */
    (xdc_Char)0x70,  /* [5378] */
    (xdc_Char)0x70,  /* [5379] */
    (xdc_Char)0x6f,  /* [5380] */
    (xdc_Char)0x72,  /* [5381] */
    (xdc_Char)0x74,  /* [5382] */
    (xdc_Char)0x3a,  /* [5383] */
    (xdc_Char)0x20,  /* [5384] */
    (xdc_Char)0x54,  /* [5385] */
    (xdc_Char)0x69,  /* [5386] */
    (xdc_Char)0x6d,  /* [5387] */
    (xdc_Char)0x65,  /* [5388] */
    (xdc_Char)0x72,  /* [5389] */
    (xdc_Char)0x20,  /* [5390] */
    (xdc_Char)0x63,  /* [5391] */
    (xdc_Char)0x61,  /* [5392] */
    (xdc_Char)0x6e,  /* [5393] */
    (xdc_Char)0x6e,  /* [5394] */
    (xdc_Char)0x6f,  /* [5395] */
    (xdc_Char)0x74,  /* [5396] */
    (xdc_Char)0x20,  /* [5397] */
    (xdc_Char)0x73,  /* [5398] */
    (xdc_Char)0x75,  /* [5399] */
    (xdc_Char)0x70,  /* [5400] */
    (xdc_Char)0x70,  /* [5401] */
    (xdc_Char)0x6f,  /* [5402] */
    (xdc_Char)0x72,  /* [5403] */
    (xdc_Char)0x74,  /* [5404] */
    (xdc_Char)0x20,  /* [5405] */
    (xdc_Char)0x72,  /* [5406] */
    (xdc_Char)0x65,  /* [5407] */
    (xdc_Char)0x71,  /* [5408] */
    (xdc_Char)0x75,  /* [5409] */
    (xdc_Char)0x65,  /* [5410] */
    (xdc_Char)0x73,  /* [5411] */
    (xdc_Char)0x74,  /* [5412] */
    (xdc_Char)0x65,  /* [5413] */
    (xdc_Char)0x64,  /* [5414] */
    (xdc_Char)0x20,  /* [5415] */
    (xdc_Char)0x70,  /* [5416] */
    (xdc_Char)0x65,  /* [5417] */
    (xdc_Char)0x72,  /* [5418] */
    (xdc_Char)0x69,  /* [5419] */
    (xdc_Char)0x6f,  /* [5420] */
    (xdc_Char)0x64,  /* [5421] */
    (xdc_Char)0x20,  /* [5422] */
    (xdc_Char)0x25,  /* [5423] */
    (xdc_Char)0x64,  /* [5424] */
    (xdc_Char)0x0,  /* [5425] */
    (xdc_Char)0x72,  /* [5426] */
    (xdc_Char)0x65,  /* [5427] */
    (xdc_Char)0x71,  /* [5428] */
    (xdc_Char)0x75,  /* [5429] */
    (xdc_Char)0x65,  /* [5430] */
    (xdc_Char)0x73,  /* [5431] */
    (xdc_Char)0x74,  /* [5432] */
    (xdc_Char)0x65,  /* [5433] */
    (xdc_Char)0x64,  /* [5434] */
    (xdc_Char)0x20,  /* [5435] */
    (xdc_Char)0x73,  /* [5436] */
    (xdc_Char)0x69,  /* [5437] */
    (xdc_Char)0x7a,  /* [5438] */
    (xdc_Char)0x65,  /* [5439] */
    (xdc_Char)0x20,  /* [5440] */
    (xdc_Char)0x69,  /* [5441] */
    (xdc_Char)0x73,  /* [5442] */
    (xdc_Char)0x20,  /* [5443] */
    (xdc_Char)0x74,  /* [5444] */
    (xdc_Char)0x6f,  /* [5445] */
    (xdc_Char)0x6f,  /* [5446] */
    (xdc_Char)0x20,  /* [5447] */
    (xdc_Char)0x62,  /* [5448] */
    (xdc_Char)0x69,  /* [5449] */
    (xdc_Char)0x67,  /* [5450] */
    (xdc_Char)0x3a,  /* [5451] */
    (xdc_Char)0x20,  /* [5452] */
    (xdc_Char)0x68,  /* [5453] */
    (xdc_Char)0x61,  /* [5454] */
    (xdc_Char)0x6e,  /* [5455] */
    (xdc_Char)0x64,  /* [5456] */
    (xdc_Char)0x6c,  /* [5457] */
    (xdc_Char)0x65,  /* [5458] */
    (xdc_Char)0x3d,  /* [5459] */
    (xdc_Char)0x30,  /* [5460] */
    (xdc_Char)0x78,  /* [5461] */
    (xdc_Char)0x25,  /* [5462] */
    (xdc_Char)0x78,  /* [5463] */
    (xdc_Char)0x2c,  /* [5464] */
    (xdc_Char)0x20,  /* [5465] */
    (xdc_Char)0x73,  /* [5466] */
    (xdc_Char)0x69,  /* [5467] */
    (xdc_Char)0x7a,  /* [5468] */
    (xdc_Char)0x65,  /* [5469] */
    (xdc_Char)0x3d,  /* [5470] */
    (xdc_Char)0x25,  /* [5471] */
    (xdc_Char)0x75,  /* [5472] */
    (xdc_Char)0x0,  /* [5473] */
    (xdc_Char)0x6f,  /* [5474] */
    (xdc_Char)0x75,  /* [5475] */
    (xdc_Char)0x74,  /* [5476] */
    (xdc_Char)0x20,  /* [5477] */
    (xdc_Char)0x6f,  /* [5478] */
    (xdc_Char)0x66,  /* [5479] */
    (xdc_Char)0x20,  /* [5480] */
    (xdc_Char)0x6d,  /* [5481] */
    (xdc_Char)0x65,  /* [5482] */
    (xdc_Char)0x6d,  /* [5483] */
    (xdc_Char)0x6f,  /* [5484] */
    (xdc_Char)0x72,  /* [5485] */
    (xdc_Char)0x79,  /* [5486] */
    (xdc_Char)0x3a,  /* [5487] */
    (xdc_Char)0x20,  /* [5488] */
    (xdc_Char)0x68,  /* [5489] */
    (xdc_Char)0x61,  /* [5490] */
    (xdc_Char)0x6e,  /* [5491] */
    (xdc_Char)0x64,  /* [5492] */
    (xdc_Char)0x6c,  /* [5493] */
    (xdc_Char)0x65,  /* [5494] */
    (xdc_Char)0x3d,  /* [5495] */
    (xdc_Char)0x30,  /* [5496] */
    (xdc_Char)0x78,  /* [5497] */
    (xdc_Char)0x25,  /* [5498] */
    (xdc_Char)0x78,  /* [5499] */
    (xdc_Char)0x2c,  /* [5500] */
    (xdc_Char)0x20,  /* [5501] */
    (xdc_Char)0x73,  /* [5502] */
    (xdc_Char)0x69,  /* [5503] */
    (xdc_Char)0x7a,  /* [5504] */
    (xdc_Char)0x65,  /* [5505] */
    (xdc_Char)0x3d,  /* [5506] */
    (xdc_Char)0x25,  /* [5507] */
    (xdc_Char)0x75,  /* [5508] */
    (xdc_Char)0x0,  /* [5509] */
    (xdc_Char)0x45,  /* [5510] */
    (xdc_Char)0x5f,  /* [5511] */
    (xdc_Char)0x6e,  /* [5512] */
    (xdc_Char)0x6f,  /* [5513] */
    (xdc_Char)0x61,  /* [5514] */
    (xdc_Char)0x6c,  /* [5515] */
    (xdc_Char)0x74,  /* [5516] */
    (xdc_Char)0x63,  /* [5517] */
    (xdc_Char)0x6c,  /* [5518] */
    (xdc_Char)0x6b,  /* [5519] */
    (xdc_Char)0x3a,  /* [5520] */
    (xdc_Char)0x20,  /* [5521] */
    (xdc_Char)0x54,  /* [5522] */
    (xdc_Char)0x69,  /* [5523] */
    (xdc_Char)0x6d,  /* [5524] */
    (xdc_Char)0x65,  /* [5525] */
    (xdc_Char)0x72,  /* [5526] */
    (xdc_Char)0x20,  /* [5527] */
    (xdc_Char)0x64,  /* [5528] */
    (xdc_Char)0x6f,  /* [5529] */
    (xdc_Char)0x65,  /* [5530] */
    (xdc_Char)0x73,  /* [5531] */
    (xdc_Char)0x20,  /* [5532] */
    (xdc_Char)0x6e,  /* [5533] */
    (xdc_Char)0x6f,  /* [5534] */
    (xdc_Char)0x74,  /* [5535] */
    (xdc_Char)0x20,  /* [5536] */
    (xdc_Char)0x73,  /* [5537] */
    (xdc_Char)0x75,  /* [5538] */
    (xdc_Char)0x70,  /* [5539] */
    (xdc_Char)0x70,  /* [5540] */
    (xdc_Char)0x6f,  /* [5541] */
    (xdc_Char)0x72,  /* [5542] */
    (xdc_Char)0x74,  /* [5543] */
    (xdc_Char)0x20,  /* [5544] */
    (xdc_Char)0x61,  /* [5545] */
    (xdc_Char)0x6c,  /* [5546] */
    (xdc_Char)0x74,  /* [5547] */
    (xdc_Char)0x63,  /* [5548] */
    (xdc_Char)0x6c,  /* [5549] */
    (xdc_Char)0x6b,  /* [5550] */
    (xdc_Char)0x0,  /* [5551] */
    (xdc_Char)0x3c,  /* [5552] */
    (xdc_Char)0x2d,  /* [5553] */
    (xdc_Char)0x2d,  /* [5554] */
    (xdc_Char)0x20,  /* [5555] */
    (xdc_Char)0x63,  /* [5556] */
    (xdc_Char)0x6f,  /* [5557] */
    (xdc_Char)0x6e,  /* [5558] */
    (xdc_Char)0x73,  /* [5559] */
    (xdc_Char)0x74,  /* [5560] */
    (xdc_Char)0x72,  /* [5561] */
    (xdc_Char)0x75,  /* [5562] */
    (xdc_Char)0x63,  /* [5563] */
    (xdc_Char)0x74,  /* [5564] */
    (xdc_Char)0x3a,  /* [5565] */
    (xdc_Char)0x20,  /* [5566] */
    (xdc_Char)0x25,  /* [5567] */
    (xdc_Char)0x70,  /* [5568] */
    (xdc_Char)0x28,  /* [5569] */
    (xdc_Char)0x27,  /* [5570] */
    (xdc_Char)0x25,  /* [5571] */
    (xdc_Char)0x73,  /* [5572] */
    (xdc_Char)0x27,  /* [5573] */
    (xdc_Char)0x29,  /* [5574] */
    (xdc_Char)0x0,  /* [5575] */
    (xdc_Char)0x3c,  /* [5576] */
    (xdc_Char)0x2d,  /* [5577] */
    (xdc_Char)0x2d,  /* [5578] */
    (xdc_Char)0x20,  /* [5579] */
    (xdc_Char)0x63,  /* [5580] */
    (xdc_Char)0x72,  /* [5581] */
    (xdc_Char)0x65,  /* [5582] */
    (xdc_Char)0x61,  /* [5583] */
    (xdc_Char)0x74,  /* [5584] */
    (xdc_Char)0x65,  /* [5585] */
    (xdc_Char)0x3a,  /* [5586] */
    (xdc_Char)0x20,  /* [5587] */
    (xdc_Char)0x25,  /* [5588] */
    (xdc_Char)0x70,  /* [5589] */
    (xdc_Char)0x28,  /* [5590] */
    (xdc_Char)0x27,  /* [5591] */
    (xdc_Char)0x25,  /* [5592] */
    (xdc_Char)0x73,  /* [5593] */
    (xdc_Char)0x27,  /* [5594] */
    (xdc_Char)0x29,  /* [5595] */
    (xdc_Char)0x0,  /* [5596] */
    (xdc_Char)0x2d,  /* [5597] */
    (xdc_Char)0x2d,  /* [5598] */
    (xdc_Char)0x3e,  /* [5599] */
    (xdc_Char)0x20,  /* [5600] */
    (xdc_Char)0x64,  /* [5601] */
    (xdc_Char)0x65,  /* [5602] */
    (xdc_Char)0x73,  /* [5603] */
    (xdc_Char)0x74,  /* [5604] */
    (xdc_Char)0x72,  /* [5605] */
    (xdc_Char)0x75,  /* [5606] */
    (xdc_Char)0x63,  /* [5607] */
    (xdc_Char)0x74,  /* [5608] */
    (xdc_Char)0x3a,  /* [5609] */
    (xdc_Char)0x20,  /* [5610] */
    (xdc_Char)0x28,  /* [5611] */
    (xdc_Char)0x25,  /* [5612] */
    (xdc_Char)0x70,  /* [5613] */
    (xdc_Char)0x29,  /* [5614] */
    (xdc_Char)0x0,  /* [5615] */
    (xdc_Char)0x2d,  /* [5616] */
    (xdc_Char)0x2d,  /* [5617] */
    (xdc_Char)0x3e,  /* [5618] */
    (xdc_Char)0x20,  /* [5619] */
    (xdc_Char)0x64,  /* [5620] */
    (xdc_Char)0x65,  /* [5621] */
    (xdc_Char)0x6c,  /* [5622] */
    (xdc_Char)0x65,  /* [5623] */
    (xdc_Char)0x74,  /* [5624] */
    (xdc_Char)0x65,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x28,  /* [5628] */
    (xdc_Char)0x25,  /* [5629] */
    (xdc_Char)0x70,  /* [5630] */
    (xdc_Char)0x29,  /* [5631] */
    (xdc_Char)0x0,  /* [5632] */
    (xdc_Char)0x45,  /* [5633] */
    (xdc_Char)0x52,  /* [5634] */
    (xdc_Char)0x52,  /* [5635] */
    (xdc_Char)0x4f,  /* [5636] */
    (xdc_Char)0x52,  /* [5637] */
    (xdc_Char)0x3a,  /* [5638] */
    (xdc_Char)0x20,  /* [5639] */
    (xdc_Char)0x25,  /* [5640] */
    (xdc_Char)0x24,  /* [5641] */
    (xdc_Char)0x46,  /* [5642] */
    (xdc_Char)0x25,  /* [5643] */
    (xdc_Char)0x24,  /* [5644] */
    (xdc_Char)0x53,  /* [5645] */
    (xdc_Char)0x0,  /* [5646] */
    (xdc_Char)0x57,  /* [5647] */
    (xdc_Char)0x41,  /* [5648] */
    (xdc_Char)0x52,  /* [5649] */
    (xdc_Char)0x4e,  /* [5650] */
    (xdc_Char)0x49,  /* [5651] */
    (xdc_Char)0x4e,  /* [5652] */
    (xdc_Char)0x47,  /* [5653] */
    (xdc_Char)0x3a,  /* [5654] */
    (xdc_Char)0x20,  /* [5655] */
    (xdc_Char)0x25,  /* [5656] */
    (xdc_Char)0x24,  /* [5657] */
    (xdc_Char)0x46,  /* [5658] */
    (xdc_Char)0x25,  /* [5659] */
    (xdc_Char)0x24,  /* [5660] */
    (xdc_Char)0x53,  /* [5661] */
    (xdc_Char)0x0,  /* [5662] */
    (xdc_Char)0x25,  /* [5663] */
    (xdc_Char)0x24,  /* [5664] */
    (xdc_Char)0x46,  /* [5665] */
    (xdc_Char)0x25,  /* [5666] */
    (xdc_Char)0x24,  /* [5667] */
    (xdc_Char)0x53,  /* [5668] */
    (xdc_Char)0x0,  /* [5669] */
    (xdc_Char)0x53,  /* [5670] */
    (xdc_Char)0x74,  /* [5671] */
    (xdc_Char)0x61,  /* [5672] */
    (xdc_Char)0x72,  /* [5673] */
    (xdc_Char)0x74,  /* [5674] */
    (xdc_Char)0x3a,  /* [5675] */
    (xdc_Char)0x20,  /* [5676] */
    (xdc_Char)0x25,  /* [5677] */
    (xdc_Char)0x24,  /* [5678] */
    (xdc_Char)0x53,  /* [5679] */
    (xdc_Char)0x0,  /* [5680] */
    (xdc_Char)0x53,  /* [5681] */
    (xdc_Char)0x74,  /* [5682] */
    (xdc_Char)0x6f,  /* [5683] */
    (xdc_Char)0x70,  /* [5684] */
    (xdc_Char)0x3a,  /* [5685] */
    (xdc_Char)0x20,  /* [5686] */
    (xdc_Char)0x25,  /* [5687] */
    (xdc_Char)0x24,  /* [5688] */
    (xdc_Char)0x53,  /* [5689] */
    (xdc_Char)0x0,  /* [5690] */
    (xdc_Char)0x53,  /* [5691] */
    (xdc_Char)0x74,  /* [5692] */
    (xdc_Char)0x61,  /* [5693] */
    (xdc_Char)0x72,  /* [5694] */
    (xdc_Char)0x74,  /* [5695] */
    (xdc_Char)0x49,  /* [5696] */
    (xdc_Char)0x6e,  /* [5697] */
    (xdc_Char)0x73,  /* [5698] */
    (xdc_Char)0x74,  /* [5699] */
    (xdc_Char)0x61,  /* [5700] */
    (xdc_Char)0x6e,  /* [5701] */
    (xdc_Char)0x63,  /* [5702] */
    (xdc_Char)0x65,  /* [5703] */
    (xdc_Char)0x3a,  /* [5704] */
    (xdc_Char)0x20,  /* [5705] */
    (xdc_Char)0x25,  /* [5706] */
    (xdc_Char)0x24,  /* [5707] */
    (xdc_Char)0x53,  /* [5708] */
    (xdc_Char)0x0,  /* [5709] */
    (xdc_Char)0x53,  /* [5710] */
    (xdc_Char)0x74,  /* [5711] */
    (xdc_Char)0x6f,  /* [5712] */
    (xdc_Char)0x70,  /* [5713] */
    (xdc_Char)0x49,  /* [5714] */
    (xdc_Char)0x6e,  /* [5715] */
    (xdc_Char)0x73,  /* [5716] */
    (xdc_Char)0x74,  /* [5717] */
    (xdc_Char)0x61,  /* [5718] */
    (xdc_Char)0x6e,  /* [5719] */
    (xdc_Char)0x63,  /* [5720] */
    (xdc_Char)0x65,  /* [5721] */
    (xdc_Char)0x3a,  /* [5722] */
    (xdc_Char)0x20,  /* [5723] */
    (xdc_Char)0x25,  /* [5724] */
    (xdc_Char)0x24,  /* [5725] */
    (xdc_Char)0x53,  /* [5726] */
    (xdc_Char)0x0,  /* [5727] */
    (xdc_Char)0x53,  /* [5728] */
    (xdc_Char)0x74,  /* [5729] */
    (xdc_Char)0x61,  /* [5730] */
    (xdc_Char)0x72,  /* [5731] */
    (xdc_Char)0x74,  /* [5732] */
    (xdc_Char)0x3a,  /* [5733] */
    (xdc_Char)0x20,  /* [5734] */
    (xdc_Char)0x25,  /* [5735] */
    (xdc_Char)0x24,  /* [5736] */
    (xdc_Char)0x53,  /* [5737] */
    (xdc_Char)0x20,  /* [5738] */
    (xdc_Char)0x0,  /* [5739] */
    (xdc_Char)0x53,  /* [5740] */
    (xdc_Char)0x74,  /* [5741] */
    (xdc_Char)0x6f,  /* [5742] */
    (xdc_Char)0x70,  /* [5743] */
    (xdc_Char)0x3a,  /* [5744] */
    (xdc_Char)0x20,  /* [5745] */
    (xdc_Char)0x25,  /* [5746] */
    (xdc_Char)0x24,  /* [5747] */
    (xdc_Char)0x53,  /* [5748] */
    (xdc_Char)0x20,  /* [5749] */
    (xdc_Char)0x0,  /* [5750] */
    (xdc_Char)0x53,  /* [5751] */
    (xdc_Char)0x74,  /* [5752] */
    (xdc_Char)0x61,  /* [5753] */
    (xdc_Char)0x72,  /* [5754] */
    (xdc_Char)0x74,  /* [5755] */
    (xdc_Char)0x49,  /* [5756] */
    (xdc_Char)0x6e,  /* [5757] */
    (xdc_Char)0x73,  /* [5758] */
    (xdc_Char)0x74,  /* [5759] */
    (xdc_Char)0x61,  /* [5760] */
    (xdc_Char)0x6e,  /* [5761] */
    (xdc_Char)0x63,  /* [5762] */
    (xdc_Char)0x65,  /* [5763] */
    (xdc_Char)0x3a,  /* [5764] */
    (xdc_Char)0x20,  /* [5765] */
    (xdc_Char)0x25,  /* [5766] */
    (xdc_Char)0x24,  /* [5767] */
    (xdc_Char)0x53,  /* [5768] */
    (xdc_Char)0x20,  /* [5769] */
    (xdc_Char)0x0,  /* [5770] */
    (xdc_Char)0x53,  /* [5771] */
    (xdc_Char)0x74,  /* [5772] */
    (xdc_Char)0x6f,  /* [5773] */
    (xdc_Char)0x70,  /* [5774] */
    (xdc_Char)0x49,  /* [5775] */
    (xdc_Char)0x6e,  /* [5776] */
    (xdc_Char)0x73,  /* [5777] */
    (xdc_Char)0x74,  /* [5778] */
    (xdc_Char)0x61,  /* [5779] */
    (xdc_Char)0x6e,  /* [5780] */
    (xdc_Char)0x63,  /* [5781] */
    (xdc_Char)0x65,  /* [5782] */
    (xdc_Char)0x3a,  /* [5783] */
    (xdc_Char)0x20,  /* [5784] */
    (xdc_Char)0x25,  /* [5785] */
    (xdc_Char)0x24,  /* [5786] */
    (xdc_Char)0x53,  /* [5787] */
    (xdc_Char)0x20,  /* [5788] */
    (xdc_Char)0x0,  /* [5789] */
    (xdc_Char)0x53,  /* [5790] */
    (xdc_Char)0x74,  /* [5791] */
    (xdc_Char)0x61,  /* [5792] */
    (xdc_Char)0x72,  /* [5793] */
    (xdc_Char)0x74,  /* [5794] */
    (xdc_Char)0x49,  /* [5795] */
    (xdc_Char)0x6e,  /* [5796] */
    (xdc_Char)0x73,  /* [5797] */
    (xdc_Char)0x74,  /* [5798] */
    (xdc_Char)0x61,  /* [5799] */
    (xdc_Char)0x6e,  /* [5800] */
    (xdc_Char)0x63,  /* [5801] */
    (xdc_Char)0x65,  /* [5802] */
    (xdc_Char)0x57,  /* [5803] */
    (xdc_Char)0x69,  /* [5804] */
    (xdc_Char)0x74,  /* [5805] */
    (xdc_Char)0x68,  /* [5806] */
    (xdc_Char)0x41,  /* [5807] */
    (xdc_Char)0x64,  /* [5808] */
    (xdc_Char)0x72,  /* [5809] */
    (xdc_Char)0x73,  /* [5810] */
    (xdc_Char)0x3a,  /* [5811] */
    (xdc_Char)0x20,  /* [5812] */
    (xdc_Char)0x25,  /* [5813] */
    (xdc_Char)0x24,  /* [5814] */
    (xdc_Char)0x53,  /* [5815] */
    (xdc_Char)0x0,  /* [5816] */
    (xdc_Char)0x53,  /* [5817] */
    (xdc_Char)0x74,  /* [5818] */
    (xdc_Char)0x6f,  /* [5819] */
    (xdc_Char)0x70,  /* [5820] */
    (xdc_Char)0x49,  /* [5821] */
    (xdc_Char)0x6e,  /* [5822] */
    (xdc_Char)0x73,  /* [5823] */
    (xdc_Char)0x74,  /* [5824] */
    (xdc_Char)0x61,  /* [5825] */
    (xdc_Char)0x6e,  /* [5826] */
    (xdc_Char)0x63,  /* [5827] */
    (xdc_Char)0x65,  /* [5828] */
    (xdc_Char)0x57,  /* [5829] */
    (xdc_Char)0x69,  /* [5830] */
    (xdc_Char)0x74,  /* [5831] */
    (xdc_Char)0x68,  /* [5832] */
    (xdc_Char)0x41,  /* [5833] */
    (xdc_Char)0x64,  /* [5834] */
    (xdc_Char)0x72,  /* [5835] */
    (xdc_Char)0x73,  /* [5836] */
    (xdc_Char)0x3a,  /* [5837] */
    (xdc_Char)0x20,  /* [5838] */
    (xdc_Char)0x25,  /* [5839] */
    (xdc_Char)0x24,  /* [5840] */
    (xdc_Char)0x53,  /* [5841] */
    (xdc_Char)0x0,  /* [5842] */
    (xdc_Char)0x53,  /* [5843] */
    (xdc_Char)0x74,  /* [5844] */
    (xdc_Char)0x61,  /* [5845] */
    (xdc_Char)0x72,  /* [5846] */
    (xdc_Char)0x74,  /* [5847] */
    (xdc_Char)0x49,  /* [5848] */
    (xdc_Char)0x6e,  /* [5849] */
    (xdc_Char)0x73,  /* [5850] */
    (xdc_Char)0x74,  /* [5851] */
    (xdc_Char)0x61,  /* [5852] */
    (xdc_Char)0x6e,  /* [5853] */
    (xdc_Char)0x63,  /* [5854] */
    (xdc_Char)0x65,  /* [5855] */
    (xdc_Char)0x57,  /* [5856] */
    (xdc_Char)0x69,  /* [5857] */
    (xdc_Char)0x74,  /* [5858] */
    (xdc_Char)0x68,  /* [5859] */
    (xdc_Char)0x53,  /* [5860] */
    (xdc_Char)0x74,  /* [5861] */
    (xdc_Char)0x72,  /* [5862] */
    (xdc_Char)0x3a,  /* [5863] */
    (xdc_Char)0x20,  /* [5864] */
    (xdc_Char)0x25,  /* [5865] */
    (xdc_Char)0x24,  /* [5866] */
    (xdc_Char)0x53,  /* [5867] */
    (xdc_Char)0x0,  /* [5868] */
    (xdc_Char)0x53,  /* [5869] */
    (xdc_Char)0x74,  /* [5870] */
    (xdc_Char)0x6f,  /* [5871] */
    (xdc_Char)0x70,  /* [5872] */
    (xdc_Char)0x49,  /* [5873] */
    (xdc_Char)0x6e,  /* [5874] */
    (xdc_Char)0x73,  /* [5875] */
    (xdc_Char)0x74,  /* [5876] */
    (xdc_Char)0x61,  /* [5877] */
    (xdc_Char)0x6e,  /* [5878] */
    (xdc_Char)0x63,  /* [5879] */
    (xdc_Char)0x65,  /* [5880] */
    (xdc_Char)0x57,  /* [5881] */
    (xdc_Char)0x69,  /* [5882] */
    (xdc_Char)0x74,  /* [5883] */
    (xdc_Char)0x68,  /* [5884] */
    (xdc_Char)0x53,  /* [5885] */
    (xdc_Char)0x74,  /* [5886] */
    (xdc_Char)0x72,  /* [5887] */
    (xdc_Char)0x3a,  /* [5888] */
    (xdc_Char)0x20,  /* [5889] */
    (xdc_Char)0x25,  /* [5890] */
    (xdc_Char)0x24,  /* [5891] */
    (xdc_Char)0x53,  /* [5892] */
    (xdc_Char)0x0,  /* [5893] */
    (xdc_Char)0x45,  /* [5894] */
    (xdc_Char)0x52,  /* [5895] */
    (xdc_Char)0x52,  /* [5896] */
    (xdc_Char)0x4f,  /* [5897] */
    (xdc_Char)0x52,  /* [5898] */
    (xdc_Char)0x3a,  /* [5899] */
    (xdc_Char)0x20,  /* [5900] */
    (xdc_Char)0x45,  /* [5901] */
    (xdc_Char)0x72,  /* [5902] */
    (xdc_Char)0x72,  /* [5903] */
    (xdc_Char)0x6f,  /* [5904] */
    (xdc_Char)0x72,  /* [5905] */
    (xdc_Char)0x43,  /* [5906] */
    (xdc_Char)0x6f,  /* [5907] */
    (xdc_Char)0x64,  /* [5908] */
    (xdc_Char)0x65,  /* [5909] */
    (xdc_Char)0x3a,  /* [5910] */
    (xdc_Char)0x30,  /* [5911] */
    (xdc_Char)0x78,  /* [5912] */
    (xdc_Char)0x25,  /* [5913] */
    (xdc_Char)0x78,  /* [5914] */
    (xdc_Char)0x0,  /* [5915] */
    (xdc_Char)0x45,  /* [5916] */
    (xdc_Char)0x52,  /* [5917] */
    (xdc_Char)0x52,  /* [5918] */
    (xdc_Char)0x4f,  /* [5919] */
    (xdc_Char)0x52,  /* [5920] */
    (xdc_Char)0x3a,  /* [5921] */
    (xdc_Char)0x20,  /* [5922] */
    (xdc_Char)0x45,  /* [5923] */
    (xdc_Char)0x72,  /* [5924] */
    (xdc_Char)0x72,  /* [5925] */
    (xdc_Char)0x6f,  /* [5926] */
    (xdc_Char)0x72,  /* [5927] */
    (xdc_Char)0x43,  /* [5928] */
    (xdc_Char)0x6f,  /* [5929] */
    (xdc_Char)0x64,  /* [5930] */
    (xdc_Char)0x65,  /* [5931] */
    (xdc_Char)0x3a,  /* [5932] */
    (xdc_Char)0x30,  /* [5933] */
    (xdc_Char)0x78,  /* [5934] */
    (xdc_Char)0x25,  /* [5935] */
    (xdc_Char)0x78,  /* [5936] */
    (xdc_Char)0x2e,  /* [5937] */
    (xdc_Char)0x20,  /* [5938] */
    (xdc_Char)0x25,  /* [5939] */
    (xdc_Char)0x24,  /* [5940] */
    (xdc_Char)0x53,  /* [5941] */
    (xdc_Char)0x0,  /* [5942] */
    (xdc_Char)0x48,  /* [5943] */
    (xdc_Char)0x57,  /* [5944] */
    (xdc_Char)0x20,  /* [5945] */
    (xdc_Char)0x45,  /* [5946] */
    (xdc_Char)0x52,  /* [5947] */
    (xdc_Char)0x52,  /* [5948] */
    (xdc_Char)0x4f,  /* [5949] */
    (xdc_Char)0x52,  /* [5950] */
    (xdc_Char)0x3a,  /* [5951] */
    (xdc_Char)0x20,  /* [5952] */
    (xdc_Char)0x45,  /* [5953] */
    (xdc_Char)0x72,  /* [5954] */
    (xdc_Char)0x72,  /* [5955] */
    (xdc_Char)0x6f,  /* [5956] */
    (xdc_Char)0x72,  /* [5957] */
    (xdc_Char)0x43,  /* [5958] */
    (xdc_Char)0x6f,  /* [5959] */
    (xdc_Char)0x64,  /* [5960] */
    (xdc_Char)0x65,  /* [5961] */
    (xdc_Char)0x3a,  /* [5962] */
    (xdc_Char)0x30,  /* [5963] */
    (xdc_Char)0x78,  /* [5964] */
    (xdc_Char)0x25,  /* [5965] */
    (xdc_Char)0x78,  /* [5966] */
    (xdc_Char)0x0,  /* [5967] */
    (xdc_Char)0x48,  /* [5968] */
    (xdc_Char)0x57,  /* [5969] */
    (xdc_Char)0x20,  /* [5970] */
    (xdc_Char)0x45,  /* [5971] */
    (xdc_Char)0x52,  /* [5972] */
    (xdc_Char)0x52,  /* [5973] */
    (xdc_Char)0x4f,  /* [5974] */
    (xdc_Char)0x52,  /* [5975] */
    (xdc_Char)0x3a,  /* [5976] */
    (xdc_Char)0x20,  /* [5977] */
    (xdc_Char)0x45,  /* [5978] */
    (xdc_Char)0x72,  /* [5979] */
    (xdc_Char)0x72,  /* [5980] */
    (xdc_Char)0x6f,  /* [5981] */
    (xdc_Char)0x72,  /* [5982] */
    (xdc_Char)0x43,  /* [5983] */
    (xdc_Char)0x6f,  /* [5984] */
    (xdc_Char)0x64,  /* [5985] */
    (xdc_Char)0x65,  /* [5986] */
    (xdc_Char)0x3a,  /* [5987] */
    (xdc_Char)0x30,  /* [5988] */
    (xdc_Char)0x78,  /* [5989] */
    (xdc_Char)0x25,  /* [5990] */
    (xdc_Char)0x78,  /* [5991] */
    (xdc_Char)0x2e,  /* [5992] */
    (xdc_Char)0x20,  /* [5993] */
    (xdc_Char)0x25,  /* [5994] */
    (xdc_Char)0x24,  /* [5995] */
    (xdc_Char)0x53,  /* [5996] */
    (xdc_Char)0x0,  /* [5997] */
    (xdc_Char)0x46,  /* [5998] */
    (xdc_Char)0x41,  /* [5999] */
    (xdc_Char)0x54,  /* [6000] */
    (xdc_Char)0x41,  /* [6001] */
    (xdc_Char)0x4c,  /* [6002] */
    (xdc_Char)0x20,  /* [6003] */
    (xdc_Char)0x45,  /* [6004] */
    (xdc_Char)0x52,  /* [6005] */
    (xdc_Char)0x52,  /* [6006] */
    (xdc_Char)0x4f,  /* [6007] */
    (xdc_Char)0x52,  /* [6008] */
    (xdc_Char)0x3a,  /* [6009] */
    (xdc_Char)0x20,  /* [6010] */
    (xdc_Char)0x45,  /* [6011] */
    (xdc_Char)0x72,  /* [6012] */
    (xdc_Char)0x72,  /* [6013] */
    (xdc_Char)0x6f,  /* [6014] */
    (xdc_Char)0x72,  /* [6015] */
    (xdc_Char)0x43,  /* [6016] */
    (xdc_Char)0x6f,  /* [6017] */
    (xdc_Char)0x64,  /* [6018] */
    (xdc_Char)0x65,  /* [6019] */
    (xdc_Char)0x3a,  /* [6020] */
    (xdc_Char)0x30,  /* [6021] */
    (xdc_Char)0x78,  /* [6022] */
    (xdc_Char)0x25,  /* [6023] */
    (xdc_Char)0x78,  /* [6024] */
    (xdc_Char)0x0,  /* [6025] */
    (xdc_Char)0x46,  /* [6026] */
    (xdc_Char)0x41,  /* [6027] */
    (xdc_Char)0x54,  /* [6028] */
    (xdc_Char)0x41,  /* [6029] */
    (xdc_Char)0x4c,  /* [6030] */
    (xdc_Char)0x20,  /* [6031] */
    (xdc_Char)0x45,  /* [6032] */
    (xdc_Char)0x52,  /* [6033] */
    (xdc_Char)0x52,  /* [6034] */
    (xdc_Char)0x4f,  /* [6035] */
    (xdc_Char)0x52,  /* [6036] */
    (xdc_Char)0x3a,  /* [6037] */
    (xdc_Char)0x20,  /* [6038] */
    (xdc_Char)0x45,  /* [6039] */
    (xdc_Char)0x72,  /* [6040] */
    (xdc_Char)0x72,  /* [6041] */
    (xdc_Char)0x6f,  /* [6042] */
    (xdc_Char)0x72,  /* [6043] */
    (xdc_Char)0x43,  /* [6044] */
    (xdc_Char)0x6f,  /* [6045] */
    (xdc_Char)0x64,  /* [6046] */
    (xdc_Char)0x65,  /* [6047] */
    (xdc_Char)0x3a,  /* [6048] */
    (xdc_Char)0x30,  /* [6049] */
    (xdc_Char)0x78,  /* [6050] */
    (xdc_Char)0x25,  /* [6051] */
    (xdc_Char)0x78,  /* [6052] */
    (xdc_Char)0x2e,  /* [6053] */
    (xdc_Char)0x20,  /* [6054] */
    (xdc_Char)0x25,  /* [6055] */
    (xdc_Char)0x24,  /* [6056] */
    (xdc_Char)0x53,  /* [6057] */
    (xdc_Char)0x0,  /* [6058] */
    (xdc_Char)0x43,  /* [6059] */
    (xdc_Char)0x52,  /* [6060] */
    (xdc_Char)0x49,  /* [6061] */
    (xdc_Char)0x54,  /* [6062] */
    (xdc_Char)0x49,  /* [6063] */
    (xdc_Char)0x43,  /* [6064] */
    (xdc_Char)0x41,  /* [6065] */
    (xdc_Char)0x4c,  /* [6066] */
    (xdc_Char)0x20,  /* [6067] */
    (xdc_Char)0x45,  /* [6068] */
    (xdc_Char)0x52,  /* [6069] */
    (xdc_Char)0x52,  /* [6070] */
    (xdc_Char)0x4f,  /* [6071] */
    (xdc_Char)0x52,  /* [6072] */
    (xdc_Char)0x3a,  /* [6073] */
    (xdc_Char)0x20,  /* [6074] */
    (xdc_Char)0x45,  /* [6075] */
    (xdc_Char)0x72,  /* [6076] */
    (xdc_Char)0x72,  /* [6077] */
    (xdc_Char)0x6f,  /* [6078] */
    (xdc_Char)0x72,  /* [6079] */
    (xdc_Char)0x43,  /* [6080] */
    (xdc_Char)0x6f,  /* [6081] */
    (xdc_Char)0x64,  /* [6082] */
    (xdc_Char)0x65,  /* [6083] */
    (xdc_Char)0x3a,  /* [6084] */
    (xdc_Char)0x30,  /* [6085] */
    (xdc_Char)0x78,  /* [6086] */
    (xdc_Char)0x25,  /* [6087] */
    (xdc_Char)0x78,  /* [6088] */
    (xdc_Char)0x0,  /* [6089] */
    (xdc_Char)0x43,  /* [6090] */
    (xdc_Char)0x52,  /* [6091] */
    (xdc_Char)0x49,  /* [6092] */
    (xdc_Char)0x54,  /* [6093] */
    (xdc_Char)0x49,  /* [6094] */
    (xdc_Char)0x43,  /* [6095] */
    (xdc_Char)0x41,  /* [6096] */
    (xdc_Char)0x4c,  /* [6097] */
    (xdc_Char)0x20,  /* [6098] */
    (xdc_Char)0x45,  /* [6099] */
    (xdc_Char)0x52,  /* [6100] */
    (xdc_Char)0x52,  /* [6101] */
    (xdc_Char)0x4f,  /* [6102] */
    (xdc_Char)0x52,  /* [6103] */
    (xdc_Char)0x3a,  /* [6104] */
    (xdc_Char)0x20,  /* [6105] */
    (xdc_Char)0x45,  /* [6106] */
    (xdc_Char)0x72,  /* [6107] */
    (xdc_Char)0x72,  /* [6108] */
    (xdc_Char)0x6f,  /* [6109] */
    (xdc_Char)0x72,  /* [6110] */
    (xdc_Char)0x43,  /* [6111] */
    (xdc_Char)0x6f,  /* [6112] */
    (xdc_Char)0x64,  /* [6113] */
    (xdc_Char)0x65,  /* [6114] */
    (xdc_Char)0x3a,  /* [6115] */
    (xdc_Char)0x30,  /* [6116] */
    (xdc_Char)0x78,  /* [6117] */
    (xdc_Char)0x25,  /* [6118] */
    (xdc_Char)0x78,  /* [6119] */
    (xdc_Char)0x2e,  /* [6120] */
    (xdc_Char)0x20,  /* [6121] */
    (xdc_Char)0x25,  /* [6122] */
    (xdc_Char)0x24,  /* [6123] */
    (xdc_Char)0x53,  /* [6124] */
    (xdc_Char)0x0,  /* [6125] */
    (xdc_Char)0x45,  /* [6126] */
    (xdc_Char)0x52,  /* [6127] */
    (xdc_Char)0x52,  /* [6128] */
    (xdc_Char)0x4f,  /* [6129] */
    (xdc_Char)0x52,  /* [6130] */
    (xdc_Char)0x3a,  /* [6131] */
    (xdc_Char)0x20,  /* [6132] */
    (xdc_Char)0x45,  /* [6133] */
    (xdc_Char)0x78,  /* [6134] */
    (xdc_Char)0x63,  /* [6135] */
    (xdc_Char)0x65,  /* [6136] */
    (xdc_Char)0x70,  /* [6137] */
    (xdc_Char)0x74,  /* [6138] */
    (xdc_Char)0x69,  /* [6139] */
    (xdc_Char)0x6f,  /* [6140] */
    (xdc_Char)0x6e,  /* [6141] */
    (xdc_Char)0x20,  /* [6142] */
    (xdc_Char)0x61,  /* [6143] */
    (xdc_Char)0x74,  /* [6144] */
    (xdc_Char)0x20,  /* [6145] */
    (xdc_Char)0x25,  /* [6146] */
    (xdc_Char)0x24,  /* [6147] */
    (xdc_Char)0x46,  /* [6148] */
    (xdc_Char)0x2e,  /* [6149] */
    (xdc_Char)0x0,  /* [6150] */
    (xdc_Char)0x45,  /* [6151] */
    (xdc_Char)0x52,  /* [6152] */
    (xdc_Char)0x52,  /* [6153] */
    (xdc_Char)0x4f,  /* [6154] */
    (xdc_Char)0x52,  /* [6155] */
    (xdc_Char)0x3a,  /* [6156] */
    (xdc_Char)0x20,  /* [6157] */
    (xdc_Char)0x55,  /* [6158] */
    (xdc_Char)0x6e,  /* [6159] */
    (xdc_Char)0x63,  /* [6160] */
    (xdc_Char)0x61,  /* [6161] */
    (xdc_Char)0x75,  /* [6162] */
    (xdc_Char)0x67,  /* [6163] */
    (xdc_Char)0x68,  /* [6164] */
    (xdc_Char)0x74,  /* [6165] */
    (xdc_Char)0x20,  /* [6166] */
    (xdc_Char)0x45,  /* [6167] */
    (xdc_Char)0x78,  /* [6168] */
    (xdc_Char)0x63,  /* [6169] */
    (xdc_Char)0x65,  /* [6170] */
    (xdc_Char)0x70,  /* [6171] */
    (xdc_Char)0x74,  /* [6172] */
    (xdc_Char)0x69,  /* [6173] */
    (xdc_Char)0x6f,  /* [6174] */
    (xdc_Char)0x6e,  /* [6175] */
    (xdc_Char)0x20,  /* [6176] */
    (xdc_Char)0x61,  /* [6177] */
    (xdc_Char)0x74,  /* [6178] */
    (xdc_Char)0x20,  /* [6179] */
    (xdc_Char)0x25,  /* [6180] */
    (xdc_Char)0x24,  /* [6181] */
    (xdc_Char)0x46,  /* [6182] */
    (xdc_Char)0x2e,  /* [6183] */
    (xdc_Char)0x0,  /* [6184] */
    (xdc_Char)0x45,  /* [6185] */
    (xdc_Char)0x52,  /* [6186] */
    (xdc_Char)0x52,  /* [6187] */
    (xdc_Char)0x4f,  /* [6188] */
    (xdc_Char)0x52,  /* [6189] */
    (xdc_Char)0x3a,  /* [6190] */
    (xdc_Char)0x20,  /* [6191] */
    (xdc_Char)0x4e,  /* [6192] */
    (xdc_Char)0x75,  /* [6193] */
    (xdc_Char)0x6c,  /* [6194] */
    (xdc_Char)0x6c,  /* [6195] */
    (xdc_Char)0x20,  /* [6196] */
    (xdc_Char)0x50,  /* [6197] */
    (xdc_Char)0x6f,  /* [6198] */
    (xdc_Char)0x69,  /* [6199] */
    (xdc_Char)0x6e,  /* [6200] */
    (xdc_Char)0x74,  /* [6201] */
    (xdc_Char)0x65,  /* [6202] */
    (xdc_Char)0x72,  /* [6203] */
    (xdc_Char)0x20,  /* [6204] */
    (xdc_Char)0x45,  /* [6205] */
    (xdc_Char)0x78,  /* [6206] */
    (xdc_Char)0x63,  /* [6207] */
    (xdc_Char)0x65,  /* [6208] */
    (xdc_Char)0x70,  /* [6209] */
    (xdc_Char)0x74,  /* [6210] */
    (xdc_Char)0x69,  /* [6211] */
    (xdc_Char)0x6f,  /* [6212] */
    (xdc_Char)0x6e,  /* [6213] */
    (xdc_Char)0x20,  /* [6214] */
    (xdc_Char)0x61,  /* [6215] */
    (xdc_Char)0x74,  /* [6216] */
    (xdc_Char)0x20,  /* [6217] */
    (xdc_Char)0x25,  /* [6218] */
    (xdc_Char)0x24,  /* [6219] */
    (xdc_Char)0x46,  /* [6220] */
    (xdc_Char)0x2e,  /* [6221] */
    (xdc_Char)0x0,  /* [6222] */
    (xdc_Char)0x45,  /* [6223] */
    (xdc_Char)0x52,  /* [6224] */
    (xdc_Char)0x52,  /* [6225] */
    (xdc_Char)0x4f,  /* [6226] */
    (xdc_Char)0x52,  /* [6227] */
    (xdc_Char)0x3a,  /* [6228] */
    (xdc_Char)0x20,  /* [6229] */
    (xdc_Char)0x55,  /* [6230] */
    (xdc_Char)0x6e,  /* [6231] */
    (xdc_Char)0x65,  /* [6232] */
    (xdc_Char)0x78,  /* [6233] */
    (xdc_Char)0x70,  /* [6234] */
    (xdc_Char)0x65,  /* [6235] */
    (xdc_Char)0x63,  /* [6236] */
    (xdc_Char)0x74,  /* [6237] */
    (xdc_Char)0x65,  /* [6238] */
    (xdc_Char)0x64,  /* [6239] */
    (xdc_Char)0x20,  /* [6240] */
    (xdc_Char)0x49,  /* [6241] */
    (xdc_Char)0x6e,  /* [6242] */
    (xdc_Char)0x74,  /* [6243] */
    (xdc_Char)0x65,  /* [6244] */
    (xdc_Char)0x72,  /* [6245] */
    (xdc_Char)0x72,  /* [6246] */
    (xdc_Char)0x75,  /* [6247] */
    (xdc_Char)0x70,  /* [6248] */
    (xdc_Char)0x74,  /* [6249] */
    (xdc_Char)0x20,  /* [6250] */
    (xdc_Char)0x61,  /* [6251] */
    (xdc_Char)0x74,  /* [6252] */
    (xdc_Char)0x20,  /* [6253] */
    (xdc_Char)0x25,  /* [6254] */
    (xdc_Char)0x24,  /* [6255] */
    (xdc_Char)0x46,  /* [6256] */
    (xdc_Char)0x2e,  /* [6257] */
    (xdc_Char)0x0,  /* [6258] */
    (xdc_Char)0x45,  /* [6259] */
    (xdc_Char)0x52,  /* [6260] */
    (xdc_Char)0x52,  /* [6261] */
    (xdc_Char)0x4f,  /* [6262] */
    (xdc_Char)0x52,  /* [6263] */
    (xdc_Char)0x3a,  /* [6264] */
    (xdc_Char)0x20,  /* [6265] */
    (xdc_Char)0x4d,  /* [6266] */
    (xdc_Char)0x65,  /* [6267] */
    (xdc_Char)0x6d,  /* [6268] */
    (xdc_Char)0x6f,  /* [6269] */
    (xdc_Char)0x72,  /* [6270] */
    (xdc_Char)0x79,  /* [6271] */
    (xdc_Char)0x20,  /* [6272] */
    (xdc_Char)0x41,  /* [6273] */
    (xdc_Char)0x63,  /* [6274] */
    (xdc_Char)0x63,  /* [6275] */
    (xdc_Char)0x65,  /* [6276] */
    (xdc_Char)0x73,  /* [6277] */
    (xdc_Char)0x73,  /* [6278] */
    (xdc_Char)0x20,  /* [6279] */
    (xdc_Char)0x46,  /* [6280] */
    (xdc_Char)0x61,  /* [6281] */
    (xdc_Char)0x75,  /* [6282] */
    (xdc_Char)0x6c,  /* [6283] */
    (xdc_Char)0x74,  /* [6284] */
    (xdc_Char)0x20,  /* [6285] */
    (xdc_Char)0x61,  /* [6286] */
    (xdc_Char)0x74,  /* [6287] */
    (xdc_Char)0x20,  /* [6288] */
    (xdc_Char)0x25,  /* [6289] */
    (xdc_Char)0x24,  /* [6290] */
    (xdc_Char)0x46,  /* [6291] */
    (xdc_Char)0x2e,  /* [6292] */
    (xdc_Char)0x20,  /* [6293] */
    (xdc_Char)0x5b,  /* [6294] */
    (xdc_Char)0x41,  /* [6295] */
    (xdc_Char)0x44,  /* [6296] */
    (xdc_Char)0x52,  /* [6297] */
    (xdc_Char)0x53,  /* [6298] */
    (xdc_Char)0x5d,  /* [6299] */
    (xdc_Char)0x30,  /* [6300] */
    (xdc_Char)0x78,  /* [6301] */
    (xdc_Char)0x25,  /* [6302] */
    (xdc_Char)0x78,  /* [6303] */
    (xdc_Char)0x0,  /* [6304] */
    (xdc_Char)0x45,  /* [6305] */
    (xdc_Char)0x52,  /* [6306] */
    (xdc_Char)0x52,  /* [6307] */
    (xdc_Char)0x4f,  /* [6308] */
    (xdc_Char)0x52,  /* [6309] */
    (xdc_Char)0x3a,  /* [6310] */
    (xdc_Char)0x20,  /* [6311] */
    (xdc_Char)0x53,  /* [6312] */
    (xdc_Char)0x65,  /* [6313] */
    (xdc_Char)0x63,  /* [6314] */
    (xdc_Char)0x75,  /* [6315] */
    (xdc_Char)0x72,  /* [6316] */
    (xdc_Char)0x69,  /* [6317] */
    (xdc_Char)0x74,  /* [6318] */
    (xdc_Char)0x79,  /* [6319] */
    (xdc_Char)0x20,  /* [6320] */
    (xdc_Char)0x45,  /* [6321] */
    (xdc_Char)0x78,  /* [6322] */
    (xdc_Char)0x63,  /* [6323] */
    (xdc_Char)0x65,  /* [6324] */
    (xdc_Char)0x70,  /* [6325] */
    (xdc_Char)0x74,  /* [6326] */
    (xdc_Char)0x69,  /* [6327] */
    (xdc_Char)0x6f,  /* [6328] */
    (xdc_Char)0x6e,  /* [6329] */
    (xdc_Char)0x20,  /* [6330] */
    (xdc_Char)0x61,  /* [6331] */
    (xdc_Char)0x74,  /* [6332] */
    (xdc_Char)0x20,  /* [6333] */
    (xdc_Char)0x25,  /* [6334] */
    (xdc_Char)0x24,  /* [6335] */
    (xdc_Char)0x46,  /* [6336] */
    (xdc_Char)0x2e,  /* [6337] */
    (xdc_Char)0x0,  /* [6338] */
    (xdc_Char)0x45,  /* [6339] */
    (xdc_Char)0x52,  /* [6340] */
    (xdc_Char)0x52,  /* [6341] */
    (xdc_Char)0x4f,  /* [6342] */
    (xdc_Char)0x52,  /* [6343] */
    (xdc_Char)0x3a,  /* [6344] */
    (xdc_Char)0x20,  /* [6345] */
    (xdc_Char)0x44,  /* [6346] */
    (xdc_Char)0x69,  /* [6347] */
    (xdc_Char)0x76,  /* [6348] */
    (xdc_Char)0x69,  /* [6349] */
    (xdc_Char)0x73,  /* [6350] */
    (xdc_Char)0x69,  /* [6351] */
    (xdc_Char)0x6f,  /* [6352] */
    (xdc_Char)0x6e,  /* [6353] */
    (xdc_Char)0x20,  /* [6354] */
    (xdc_Char)0x62,  /* [6355] */
    (xdc_Char)0x79,  /* [6356] */
    (xdc_Char)0x20,  /* [6357] */
    (xdc_Char)0x7a,  /* [6358] */
    (xdc_Char)0x65,  /* [6359] */
    (xdc_Char)0x72,  /* [6360] */
    (xdc_Char)0x6f,  /* [6361] */
    (xdc_Char)0x20,  /* [6362] */
    (xdc_Char)0x61,  /* [6363] */
    (xdc_Char)0x74,  /* [6364] */
    (xdc_Char)0x20,  /* [6365] */
    (xdc_Char)0x25,  /* [6366] */
    (xdc_Char)0x24,  /* [6367] */
    (xdc_Char)0x46,  /* [6368] */
    (xdc_Char)0x2e,  /* [6369] */
    (xdc_Char)0x0,  /* [6370] */
    (xdc_Char)0x45,  /* [6371] */
    (xdc_Char)0x52,  /* [6372] */
    (xdc_Char)0x52,  /* [6373] */
    (xdc_Char)0x4f,  /* [6374] */
    (xdc_Char)0x52,  /* [6375] */
    (xdc_Char)0x3a,  /* [6376] */
    (xdc_Char)0x20,  /* [6377] */
    (xdc_Char)0x4f,  /* [6378] */
    (xdc_Char)0x76,  /* [6379] */
    (xdc_Char)0x65,  /* [6380] */
    (xdc_Char)0x72,  /* [6381] */
    (xdc_Char)0x66,  /* [6382] */
    (xdc_Char)0x6c,  /* [6383] */
    (xdc_Char)0x6f,  /* [6384] */
    (xdc_Char)0x77,  /* [6385] */
    (xdc_Char)0x20,  /* [6386] */
    (xdc_Char)0x65,  /* [6387] */
    (xdc_Char)0x78,  /* [6388] */
    (xdc_Char)0x63,  /* [6389] */
    (xdc_Char)0x65,  /* [6390] */
    (xdc_Char)0x70,  /* [6391] */
    (xdc_Char)0x74,  /* [6392] */
    (xdc_Char)0x69,  /* [6393] */
    (xdc_Char)0x6f,  /* [6394] */
    (xdc_Char)0x6e,  /* [6395] */
    (xdc_Char)0x20,  /* [6396] */
    (xdc_Char)0x61,  /* [6397] */
    (xdc_Char)0x74,  /* [6398] */
    (xdc_Char)0x20,  /* [6399] */
    (xdc_Char)0x25,  /* [6400] */
    (xdc_Char)0x24,  /* [6401] */
    (xdc_Char)0x46,  /* [6402] */
    (xdc_Char)0x2e,  /* [6403] */
    (xdc_Char)0x0,  /* [6404] */
    (xdc_Char)0x45,  /* [6405] */
    (xdc_Char)0x52,  /* [6406] */
    (xdc_Char)0x52,  /* [6407] */
    (xdc_Char)0x4f,  /* [6408] */
    (xdc_Char)0x52,  /* [6409] */
    (xdc_Char)0x3a,  /* [6410] */
    (xdc_Char)0x20,  /* [6411] */
    (xdc_Char)0x49,  /* [6412] */
    (xdc_Char)0x6e,  /* [6413] */
    (xdc_Char)0x64,  /* [6414] */
    (xdc_Char)0x65,  /* [6415] */
    (xdc_Char)0x78,  /* [6416] */
    (xdc_Char)0x20,  /* [6417] */
    (xdc_Char)0x6f,  /* [6418] */
    (xdc_Char)0x75,  /* [6419] */
    (xdc_Char)0x74,  /* [6420] */
    (xdc_Char)0x20,  /* [6421] */
    (xdc_Char)0x6f,  /* [6422] */
    (xdc_Char)0x66,  /* [6423] */
    (xdc_Char)0x20,  /* [6424] */
    (xdc_Char)0x72,  /* [6425] */
    (xdc_Char)0x61,  /* [6426] */
    (xdc_Char)0x6e,  /* [6427] */
    (xdc_Char)0x67,  /* [6428] */
    (xdc_Char)0x65,  /* [6429] */
    (xdc_Char)0x20,  /* [6430] */
    (xdc_Char)0x61,  /* [6431] */
    (xdc_Char)0x74,  /* [6432] */
    (xdc_Char)0x20,  /* [6433] */
    (xdc_Char)0x25,  /* [6434] */
    (xdc_Char)0x24,  /* [6435] */
    (xdc_Char)0x46,  /* [6436] */
    (xdc_Char)0x2e,  /* [6437] */
    (xdc_Char)0x20,  /* [6438] */
    (xdc_Char)0x5b,  /* [6439] */
    (xdc_Char)0x49,  /* [6440] */
    (xdc_Char)0x4e,  /* [6441] */
    (xdc_Char)0x44,  /* [6442] */
    (xdc_Char)0x45,  /* [6443] */
    (xdc_Char)0x58,  /* [6444] */
    (xdc_Char)0x5d,  /* [6445] */
    (xdc_Char)0x30,  /* [6446] */
    (xdc_Char)0x78,  /* [6447] */
    (xdc_Char)0x25,  /* [6448] */
    (xdc_Char)0x78,  /* [6449] */
    (xdc_Char)0x0,  /* [6450] */
    (xdc_Char)0x45,  /* [6451] */
    (xdc_Char)0x52,  /* [6452] */
    (xdc_Char)0x52,  /* [6453] */
    (xdc_Char)0x4f,  /* [6454] */
    (xdc_Char)0x52,  /* [6455] */
    (xdc_Char)0x3a,  /* [6456] */
    (xdc_Char)0x20,  /* [6457] */
    (xdc_Char)0x41,  /* [6458] */
    (xdc_Char)0x74,  /* [6459] */
    (xdc_Char)0x74,  /* [6460] */
    (xdc_Char)0x65,  /* [6461] */
    (xdc_Char)0x6d,  /* [6462] */
    (xdc_Char)0x70,  /* [6463] */
    (xdc_Char)0x74,  /* [6464] */
    (xdc_Char)0x20,  /* [6465] */
    (xdc_Char)0x74,  /* [6466] */
    (xdc_Char)0x6f,  /* [6467] */
    (xdc_Char)0x20,  /* [6468] */
    (xdc_Char)0x61,  /* [6469] */
    (xdc_Char)0x63,  /* [6470] */
    (xdc_Char)0x63,  /* [6471] */
    (xdc_Char)0x65,  /* [6472] */
    (xdc_Char)0x73,  /* [6473] */
    (xdc_Char)0x73,  /* [6474] */
    (xdc_Char)0x20,  /* [6475] */
    (xdc_Char)0x66,  /* [6476] */
    (xdc_Char)0x65,  /* [6477] */
    (xdc_Char)0x61,  /* [6478] */
    (xdc_Char)0x74,  /* [6479] */
    (xdc_Char)0x75,  /* [6480] */
    (xdc_Char)0x72,  /* [6481] */
    (xdc_Char)0x65,  /* [6482] */
    (xdc_Char)0x20,  /* [6483] */
    (xdc_Char)0x74,  /* [6484] */
    (xdc_Char)0x68,  /* [6485] */
    (xdc_Char)0x61,  /* [6486] */
    (xdc_Char)0x74,  /* [6487] */
    (xdc_Char)0x20,  /* [6488] */
    (xdc_Char)0x69,  /* [6489] */
    (xdc_Char)0x73,  /* [6490] */
    (xdc_Char)0x20,  /* [6491] */
    (xdc_Char)0x6e,  /* [6492] */
    (xdc_Char)0x6f,  /* [6493] */
    (xdc_Char)0x74,  /* [6494] */
    (xdc_Char)0x20,  /* [6495] */
    (xdc_Char)0x69,  /* [6496] */
    (xdc_Char)0x6d,  /* [6497] */
    (xdc_Char)0x70,  /* [6498] */
    (xdc_Char)0x6c,  /* [6499] */
    (xdc_Char)0x65,  /* [6500] */
    (xdc_Char)0x6d,  /* [6501] */
    (xdc_Char)0x65,  /* [6502] */
    (xdc_Char)0x6e,  /* [6503] */
    (xdc_Char)0x74,  /* [6504] */
    (xdc_Char)0x65,  /* [6505] */
    (xdc_Char)0x64,  /* [6506] */
    (xdc_Char)0x20,  /* [6507] */
    (xdc_Char)0x61,  /* [6508] */
    (xdc_Char)0x74,  /* [6509] */
    (xdc_Char)0x20,  /* [6510] */
    (xdc_Char)0x25,  /* [6511] */
    (xdc_Char)0x24,  /* [6512] */
    (xdc_Char)0x46,  /* [6513] */
    (xdc_Char)0x2e,  /* [6514] */
    (xdc_Char)0x0,  /* [6515] */
    (xdc_Char)0x45,  /* [6516] */
    (xdc_Char)0x52,  /* [6517] */
    (xdc_Char)0x52,  /* [6518] */
    (xdc_Char)0x4f,  /* [6519] */
    (xdc_Char)0x52,  /* [6520] */
    (xdc_Char)0x3a,  /* [6521] */
    (xdc_Char)0x20,  /* [6522] */
    (xdc_Char)0x53,  /* [6523] */
    (xdc_Char)0x74,  /* [6524] */
    (xdc_Char)0x61,  /* [6525] */
    (xdc_Char)0x63,  /* [6526] */
    (xdc_Char)0x6b,  /* [6527] */
    (xdc_Char)0x20,  /* [6528] */
    (xdc_Char)0x4f,  /* [6529] */
    (xdc_Char)0x76,  /* [6530] */
    (xdc_Char)0x65,  /* [6531] */
    (xdc_Char)0x72,  /* [6532] */
    (xdc_Char)0x66,  /* [6533] */
    (xdc_Char)0x6c,  /* [6534] */
    (xdc_Char)0x6f,  /* [6535] */
    (xdc_Char)0x77,  /* [6536] */
    (xdc_Char)0x20,  /* [6537] */
    (xdc_Char)0x64,  /* [6538] */
    (xdc_Char)0x65,  /* [6539] */
    (xdc_Char)0x74,  /* [6540] */
    (xdc_Char)0x65,  /* [6541] */
    (xdc_Char)0x63,  /* [6542] */
    (xdc_Char)0x74,  /* [6543] */
    (xdc_Char)0x65,  /* [6544] */
    (xdc_Char)0x64,  /* [6545] */
    (xdc_Char)0x20,  /* [6546] */
    (xdc_Char)0x61,  /* [6547] */
    (xdc_Char)0x74,  /* [6548] */
    (xdc_Char)0x20,  /* [6549] */
    (xdc_Char)0x25,  /* [6550] */
    (xdc_Char)0x24,  /* [6551] */
    (xdc_Char)0x46,  /* [6552] */
    (xdc_Char)0x2e,  /* [6553] */
    (xdc_Char)0x0,  /* [6554] */
    (xdc_Char)0x45,  /* [6555] */
    (xdc_Char)0x52,  /* [6556] */
    (xdc_Char)0x52,  /* [6557] */
    (xdc_Char)0x4f,  /* [6558] */
    (xdc_Char)0x52,  /* [6559] */
    (xdc_Char)0x3a,  /* [6560] */
    (xdc_Char)0x20,  /* [6561] */
    (xdc_Char)0x49,  /* [6562] */
    (xdc_Char)0x6c,  /* [6563] */
    (xdc_Char)0x6c,  /* [6564] */
    (xdc_Char)0x65,  /* [6565] */
    (xdc_Char)0x67,  /* [6566] */
    (xdc_Char)0x61,  /* [6567] */
    (xdc_Char)0x6c,  /* [6568] */
    (xdc_Char)0x20,  /* [6569] */
    (xdc_Char)0x49,  /* [6570] */
    (xdc_Char)0x6e,  /* [6571] */
    (xdc_Char)0x73,  /* [6572] */
    (xdc_Char)0x74,  /* [6573] */
    (xdc_Char)0x72,  /* [6574] */
    (xdc_Char)0x75,  /* [6575] */
    (xdc_Char)0x63,  /* [6576] */
    (xdc_Char)0x74,  /* [6577] */
    (xdc_Char)0x69,  /* [6578] */
    (xdc_Char)0x6f,  /* [6579] */
    (xdc_Char)0x6e,  /* [6580] */
    (xdc_Char)0x20,  /* [6581] */
    (xdc_Char)0x65,  /* [6582] */
    (xdc_Char)0x78,  /* [6583] */
    (xdc_Char)0x65,  /* [6584] */
    (xdc_Char)0x63,  /* [6585] */
    (xdc_Char)0x75,  /* [6586] */
    (xdc_Char)0x74,  /* [6587] */
    (xdc_Char)0x65,  /* [6588] */
    (xdc_Char)0x64,  /* [6589] */
    (xdc_Char)0x20,  /* [6590] */
    (xdc_Char)0x61,  /* [6591] */
    (xdc_Char)0x74,  /* [6592] */
    (xdc_Char)0x20,  /* [6593] */
    (xdc_Char)0x25,  /* [6594] */
    (xdc_Char)0x24,  /* [6595] */
    (xdc_Char)0x46,  /* [6596] */
    (xdc_Char)0x2e,  /* [6597] */
    (xdc_Char)0x0,  /* [6598] */
    (xdc_Char)0x45,  /* [6599] */
    (xdc_Char)0x52,  /* [6600] */
    (xdc_Char)0x52,  /* [6601] */
    (xdc_Char)0x4f,  /* [6602] */
    (xdc_Char)0x52,  /* [6603] */
    (xdc_Char)0x3a,  /* [6604] */
    (xdc_Char)0x20,  /* [6605] */
    (xdc_Char)0x45,  /* [6606] */
    (xdc_Char)0x6e,  /* [6607] */
    (xdc_Char)0x74,  /* [6608] */
    (xdc_Char)0x72,  /* [6609] */
    (xdc_Char)0x79,  /* [6610] */
    (xdc_Char)0x20,  /* [6611] */
    (xdc_Char)0x50,  /* [6612] */
    (xdc_Char)0x6f,  /* [6613] */
    (xdc_Char)0x69,  /* [6614] */
    (xdc_Char)0x6e,  /* [6615] */
    (xdc_Char)0x74,  /* [6616] */
    (xdc_Char)0x20,  /* [6617] */
    (xdc_Char)0x4e,  /* [6618] */
    (xdc_Char)0x6f,  /* [6619] */
    (xdc_Char)0x74,  /* [6620] */
    (xdc_Char)0x20,  /* [6621] */
    (xdc_Char)0x46,  /* [6622] */
    (xdc_Char)0x6f,  /* [6623] */
    (xdc_Char)0x75,  /* [6624] */
    (xdc_Char)0x6e,  /* [6625] */
    (xdc_Char)0x64,  /* [6626] */
    (xdc_Char)0x20,  /* [6627] */
    (xdc_Char)0x61,  /* [6628] */
    (xdc_Char)0x74,  /* [6629] */
    (xdc_Char)0x20,  /* [6630] */
    (xdc_Char)0x25,  /* [6631] */
    (xdc_Char)0x24,  /* [6632] */
    (xdc_Char)0x46,  /* [6633] */
    (xdc_Char)0x2e,  /* [6634] */
    (xdc_Char)0x0,  /* [6635] */
    (xdc_Char)0x45,  /* [6636] */
    (xdc_Char)0x52,  /* [6637] */
    (xdc_Char)0x52,  /* [6638] */
    (xdc_Char)0x4f,  /* [6639] */
    (xdc_Char)0x52,  /* [6640] */
    (xdc_Char)0x3a,  /* [6641] */
    (xdc_Char)0x20,  /* [6642] */
    (xdc_Char)0x4d,  /* [6643] */
    (xdc_Char)0x6f,  /* [6644] */
    (xdc_Char)0x64,  /* [6645] */
    (xdc_Char)0x75,  /* [6646] */
    (xdc_Char)0x6c,  /* [6647] */
    (xdc_Char)0x65,  /* [6648] */
    (xdc_Char)0x20,  /* [6649] */
    (xdc_Char)0x6e,  /* [6650] */
    (xdc_Char)0x6f,  /* [6651] */
    (xdc_Char)0x74,  /* [6652] */
    (xdc_Char)0x20,  /* [6653] */
    (xdc_Char)0x66,  /* [6654] */
    (xdc_Char)0x6f,  /* [6655] */
    (xdc_Char)0x75,  /* [6656] */
    (xdc_Char)0x6e,  /* [6657] */
    (xdc_Char)0x64,  /* [6658] */
    (xdc_Char)0x20,  /* [6659] */
    (xdc_Char)0x61,  /* [6660] */
    (xdc_Char)0x74,  /* [6661] */
    (xdc_Char)0x20,  /* [6662] */
    (xdc_Char)0x25,  /* [6663] */
    (xdc_Char)0x24,  /* [6664] */
    (xdc_Char)0x46,  /* [6665] */
    (xdc_Char)0x2e,  /* [6666] */
    (xdc_Char)0x20,  /* [6667] */
    (xdc_Char)0x5b,  /* [6668] */
    (xdc_Char)0x4d,  /* [6669] */
    (xdc_Char)0x4f,  /* [6670] */
    (xdc_Char)0x44,  /* [6671] */
    (xdc_Char)0x55,  /* [6672] */
    (xdc_Char)0x4c,  /* [6673] */
    (xdc_Char)0x45,  /* [6674] */
    (xdc_Char)0x5f,  /* [6675] */
    (xdc_Char)0x49,  /* [6676] */
    (xdc_Char)0x44,  /* [6677] */
    (xdc_Char)0x5d,  /* [6678] */
    (xdc_Char)0x30,  /* [6679] */
    (xdc_Char)0x78,  /* [6680] */
    (xdc_Char)0x25,  /* [6681] */
    (xdc_Char)0x78,  /* [6682] */
    (xdc_Char)0x2e,  /* [6683] */
    (xdc_Char)0x0,  /* [6684] */
    (xdc_Char)0x45,  /* [6685] */
    (xdc_Char)0x52,  /* [6686] */
    (xdc_Char)0x52,  /* [6687] */
    (xdc_Char)0x4f,  /* [6688] */
    (xdc_Char)0x52,  /* [6689] */
    (xdc_Char)0x3a,  /* [6690] */
    (xdc_Char)0x20,  /* [6691] */
    (xdc_Char)0x46,  /* [6692] */
    (xdc_Char)0x6c,  /* [6693] */
    (xdc_Char)0x6f,  /* [6694] */
    (xdc_Char)0x61,  /* [6695] */
    (xdc_Char)0x74,  /* [6696] */
    (xdc_Char)0x69,  /* [6697] */
    (xdc_Char)0x6e,  /* [6698] */
    (xdc_Char)0x67,  /* [6699] */
    (xdc_Char)0x20,  /* [6700] */
    (xdc_Char)0x50,  /* [6701] */
    (xdc_Char)0x6f,  /* [6702] */
    (xdc_Char)0x69,  /* [6703] */
    (xdc_Char)0x6e,  /* [6704] */
    (xdc_Char)0x74,  /* [6705] */
    (xdc_Char)0x20,  /* [6706] */
    (xdc_Char)0x45,  /* [6707] */
    (xdc_Char)0x72,  /* [6708] */
    (xdc_Char)0x72,  /* [6709] */
    (xdc_Char)0x6f,  /* [6710] */
    (xdc_Char)0x72,  /* [6711] */
    (xdc_Char)0x20,  /* [6712] */
    (xdc_Char)0x61,  /* [6713] */
    (xdc_Char)0x74,  /* [6714] */
    (xdc_Char)0x20,  /* [6715] */
    (xdc_Char)0x25,  /* [6716] */
    (xdc_Char)0x24,  /* [6717] */
    (xdc_Char)0x46,  /* [6718] */
    (xdc_Char)0x2e,  /* [6719] */
    (xdc_Char)0x0,  /* [6720] */
    (xdc_Char)0x45,  /* [6721] */
    (xdc_Char)0x52,  /* [6722] */
    (xdc_Char)0x52,  /* [6723] */
    (xdc_Char)0x4f,  /* [6724] */
    (xdc_Char)0x52,  /* [6725] */
    (xdc_Char)0x3a,  /* [6726] */
    (xdc_Char)0x20,  /* [6727] */
    (xdc_Char)0x49,  /* [6728] */
    (xdc_Char)0x6e,  /* [6729] */
    (xdc_Char)0x76,  /* [6730] */
    (xdc_Char)0x61,  /* [6731] */
    (xdc_Char)0x6c,  /* [6732] */
    (xdc_Char)0x69,  /* [6733] */
    (xdc_Char)0x64,  /* [6734] */
    (xdc_Char)0x20,  /* [6735] */
    (xdc_Char)0x50,  /* [6736] */
    (xdc_Char)0x61,  /* [6737] */
    (xdc_Char)0x72,  /* [6738] */
    (xdc_Char)0x61,  /* [6739] */
    (xdc_Char)0x6d,  /* [6740] */
    (xdc_Char)0x65,  /* [6741] */
    (xdc_Char)0x74,  /* [6742] */
    (xdc_Char)0x65,  /* [6743] */
    (xdc_Char)0x72,  /* [6744] */
    (xdc_Char)0x20,  /* [6745] */
    (xdc_Char)0x61,  /* [6746] */
    (xdc_Char)0x74,  /* [6747] */
    (xdc_Char)0x20,  /* [6748] */
    (xdc_Char)0x25,  /* [6749] */
    (xdc_Char)0x24,  /* [6750] */
    (xdc_Char)0x46,  /* [6751] */
    (xdc_Char)0x2e,  /* [6752] */
    (xdc_Char)0x20,  /* [6753] */
    (xdc_Char)0x5b,  /* [6754] */
    (xdc_Char)0x50,  /* [6755] */
    (xdc_Char)0x61,  /* [6756] */
    (xdc_Char)0x72,  /* [6757] */
    (xdc_Char)0x61,  /* [6758] */
    (xdc_Char)0x6d,  /* [6759] */
    (xdc_Char)0x4e,  /* [6760] */
    (xdc_Char)0x75,  /* [6761] */
    (xdc_Char)0x6d,  /* [6762] */
    (xdc_Char)0x5d,  /* [6763] */
    (xdc_Char)0x25,  /* [6764] */
    (xdc_Char)0x64,  /* [6765] */
    (xdc_Char)0x20,  /* [6766] */
    (xdc_Char)0x5b,  /* [6767] */
    (xdc_Char)0x50,  /* [6768] */
    (xdc_Char)0x61,  /* [6769] */
    (xdc_Char)0x72,  /* [6770] */
    (xdc_Char)0x61,  /* [6771] */
    (xdc_Char)0x6d,  /* [6772] */
    (xdc_Char)0x56,  /* [6773] */
    (xdc_Char)0x61,  /* [6774] */
    (xdc_Char)0x6c,  /* [6775] */
    (xdc_Char)0x75,  /* [6776] */
    (xdc_Char)0x65,  /* [6777] */
    (xdc_Char)0x5d,  /* [6778] */
    (xdc_Char)0x30,  /* [6779] */
    (xdc_Char)0x78,  /* [6780] */
    (xdc_Char)0x25,  /* [6781] */
    (xdc_Char)0x78,  /* [6782] */
    (xdc_Char)0x0,  /* [6783] */
    (xdc_Char)0x57,  /* [6784] */
    (xdc_Char)0x41,  /* [6785] */
    (xdc_Char)0x52,  /* [6786] */
    (xdc_Char)0x4e,  /* [6787] */
    (xdc_Char)0x49,  /* [6788] */
    (xdc_Char)0x4e,  /* [6789] */
    (xdc_Char)0x47,  /* [6790] */
    (xdc_Char)0x3a,  /* [6791] */
    (xdc_Char)0x20,  /* [6792] */
    (xdc_Char)0x45,  /* [6793] */
    (xdc_Char)0x76,  /* [6794] */
    (xdc_Char)0x65,  /* [6795] */
    (xdc_Char)0x6e,  /* [6796] */
    (xdc_Char)0x74,  /* [6797] */
    (xdc_Char)0x43,  /* [6798] */
    (xdc_Char)0x6f,  /* [6799] */
    (xdc_Char)0x64,  /* [6800] */
    (xdc_Char)0x65,  /* [6801] */
    (xdc_Char)0x3a,  /* [6802] */
    (xdc_Char)0x30,  /* [6803] */
    (xdc_Char)0x78,  /* [6804] */
    (xdc_Char)0x25,  /* [6805] */
    (xdc_Char)0x78,  /* [6806] */
    (xdc_Char)0x0,  /* [6807] */
    (xdc_Char)0x57,  /* [6808] */
    (xdc_Char)0x41,  /* [6809] */
    (xdc_Char)0x52,  /* [6810] */
    (xdc_Char)0x4e,  /* [6811] */
    (xdc_Char)0x49,  /* [6812] */
    (xdc_Char)0x4e,  /* [6813] */
    (xdc_Char)0x47,  /* [6814] */
    (xdc_Char)0x3a,  /* [6815] */
    (xdc_Char)0x20,  /* [6816] */
    (xdc_Char)0x45,  /* [6817] */
    (xdc_Char)0x76,  /* [6818] */
    (xdc_Char)0x65,  /* [6819] */
    (xdc_Char)0x6e,  /* [6820] */
    (xdc_Char)0x74,  /* [6821] */
    (xdc_Char)0x43,  /* [6822] */
    (xdc_Char)0x6f,  /* [6823] */
    (xdc_Char)0x64,  /* [6824] */
    (xdc_Char)0x65,  /* [6825] */
    (xdc_Char)0x3a,  /* [6826] */
    (xdc_Char)0x30,  /* [6827] */
    (xdc_Char)0x78,  /* [6828] */
    (xdc_Char)0x25,  /* [6829] */
    (xdc_Char)0x78,  /* [6830] */
    (xdc_Char)0x2e,  /* [6831] */
    (xdc_Char)0x20,  /* [6832] */
    (xdc_Char)0x25,  /* [6833] */
    (xdc_Char)0x24,  /* [6834] */
    (xdc_Char)0x53,  /* [6835] */
    (xdc_Char)0x0,  /* [6836] */
    (xdc_Char)0x49,  /* [6837] */
    (xdc_Char)0x4e,  /* [6838] */
    (xdc_Char)0x46,  /* [6839] */
    (xdc_Char)0x4f,  /* [6840] */
    (xdc_Char)0x3a,  /* [6841] */
    (xdc_Char)0x20,  /* [6842] */
    (xdc_Char)0x45,  /* [6843] */
    (xdc_Char)0x76,  /* [6844] */
    (xdc_Char)0x65,  /* [6845] */
    (xdc_Char)0x6e,  /* [6846] */
    (xdc_Char)0x74,  /* [6847] */
    (xdc_Char)0x43,  /* [6848] */
    (xdc_Char)0x6f,  /* [6849] */
    (xdc_Char)0x64,  /* [6850] */
    (xdc_Char)0x65,  /* [6851] */
    (xdc_Char)0x3a,  /* [6852] */
    (xdc_Char)0x20,  /* [6853] */
    (xdc_Char)0x30,  /* [6854] */
    (xdc_Char)0x78,  /* [6855] */
    (xdc_Char)0x25,  /* [6856] */
    (xdc_Char)0x78,  /* [6857] */
    (xdc_Char)0x0,  /* [6858] */
    (xdc_Char)0x49,  /* [6859] */
    (xdc_Char)0x4e,  /* [6860] */
    (xdc_Char)0x46,  /* [6861] */
    (xdc_Char)0x4f,  /* [6862] */
    (xdc_Char)0x3a,  /* [6863] */
    (xdc_Char)0x20,  /* [6864] */
    (xdc_Char)0x45,  /* [6865] */
    (xdc_Char)0x76,  /* [6866] */
    (xdc_Char)0x65,  /* [6867] */
    (xdc_Char)0x6e,  /* [6868] */
    (xdc_Char)0x74,  /* [6869] */
    (xdc_Char)0x43,  /* [6870] */
    (xdc_Char)0x6f,  /* [6871] */
    (xdc_Char)0x64,  /* [6872] */
    (xdc_Char)0x65,  /* [6873] */
    (xdc_Char)0x3a,  /* [6874] */
    (xdc_Char)0x30,  /* [6875] */
    (xdc_Char)0x78,  /* [6876] */
    (xdc_Char)0x25,  /* [6877] */
    (xdc_Char)0x78,  /* [6878] */
    (xdc_Char)0x2e,  /* [6879] */
    (xdc_Char)0x20,  /* [6880] */
    (xdc_Char)0x20,  /* [6881] */
    (xdc_Char)0x25,  /* [6882] */
    (xdc_Char)0x24,  /* [6883] */
    (xdc_Char)0x53,  /* [6884] */
    (xdc_Char)0x0,  /* [6885] */
    (xdc_Char)0x44,  /* [6886] */
    (xdc_Char)0x45,  /* [6887] */
    (xdc_Char)0x54,  /* [6888] */
    (xdc_Char)0x41,  /* [6889] */
    (xdc_Char)0x49,  /* [6890] */
    (xdc_Char)0x4c,  /* [6891] */
    (xdc_Char)0x3a,  /* [6892] */
    (xdc_Char)0x20,  /* [6893] */
    (xdc_Char)0x45,  /* [6894] */
    (xdc_Char)0x76,  /* [6895] */
    (xdc_Char)0x65,  /* [6896] */
    (xdc_Char)0x6e,  /* [6897] */
    (xdc_Char)0x74,  /* [6898] */
    (xdc_Char)0x43,  /* [6899] */
    (xdc_Char)0x6f,  /* [6900] */
    (xdc_Char)0x64,  /* [6901] */
    (xdc_Char)0x65,  /* [6902] */
    (xdc_Char)0x3a,  /* [6903] */
    (xdc_Char)0x30,  /* [6904] */
    (xdc_Char)0x78,  /* [6905] */
    (xdc_Char)0x25,  /* [6906] */
    (xdc_Char)0x78,  /* [6907] */
    (xdc_Char)0x0,  /* [6908] */
    (xdc_Char)0x44,  /* [6909] */
    (xdc_Char)0x45,  /* [6910] */
    (xdc_Char)0x54,  /* [6911] */
    (xdc_Char)0x41,  /* [6912] */
    (xdc_Char)0x49,  /* [6913] */
    (xdc_Char)0x4c,  /* [6914] */
    (xdc_Char)0x3a,  /* [6915] */
    (xdc_Char)0x20,  /* [6916] */
    (xdc_Char)0x45,  /* [6917] */
    (xdc_Char)0x76,  /* [6918] */
    (xdc_Char)0x65,  /* [6919] */
    (xdc_Char)0x6e,  /* [6920] */
    (xdc_Char)0x74,  /* [6921] */
    (xdc_Char)0x43,  /* [6922] */
    (xdc_Char)0x6f,  /* [6923] */
    (xdc_Char)0x64,  /* [6924] */
    (xdc_Char)0x65,  /* [6925] */
    (xdc_Char)0x3a,  /* [6926] */
    (xdc_Char)0x30,  /* [6927] */
    (xdc_Char)0x78,  /* [6928] */
    (xdc_Char)0x25,  /* [6929] */
    (xdc_Char)0x78,  /* [6930] */
    (xdc_Char)0x2e,  /* [6931] */
    (xdc_Char)0x20,  /* [6932] */
    (xdc_Char)0x20,  /* [6933] */
    (xdc_Char)0x25,  /* [6934] */
    (xdc_Char)0x24,  /* [6935] */
    (xdc_Char)0x53,  /* [6936] */
    (xdc_Char)0x0,  /* [6937] */
    (xdc_Char)0x56,  /* [6938] */
    (xdc_Char)0x41,  /* [6939] */
    (xdc_Char)0x4c,  /* [6940] */
    (xdc_Char)0x55,  /* [6941] */
    (xdc_Char)0x45,  /* [6942] */
    (xdc_Char)0x3d,  /* [6943] */
    (xdc_Char)0x25,  /* [6944] */
    (xdc_Char)0x64,  /* [6945] */
    (xdc_Char)0x20,  /* [6946] */
    (xdc_Char)0x28,  /* [6947] */
    (xdc_Char)0x41,  /* [6948] */
    (xdc_Char)0x75,  /* [6949] */
    (xdc_Char)0x78,  /* [6950] */
    (xdc_Char)0x44,  /* [6951] */
    (xdc_Char)0x61,  /* [6952] */
    (xdc_Char)0x74,  /* [6953] */
    (xdc_Char)0x61,  /* [6954] */
    (xdc_Char)0x3d,  /* [6955] */
    (xdc_Char)0x25,  /* [6956] */
    (xdc_Char)0x64,  /* [6957] */
    (xdc_Char)0x2c,  /* [6958] */
    (xdc_Char)0x20,  /* [6959] */
    (xdc_Char)0x25,  /* [6960] */
    (xdc_Char)0x64,  /* [6961] */
    (xdc_Char)0x29,  /* [6962] */
    (xdc_Char)0x20,  /* [6963] */
    (xdc_Char)0x4b,  /* [6964] */
    (xdc_Char)0x65,  /* [6965] */
    (xdc_Char)0x79,  /* [6966] */
    (xdc_Char)0x3a,  /* [6967] */
    (xdc_Char)0x25,  /* [6968] */
    (xdc_Char)0x24,  /* [6969] */
    (xdc_Char)0x53,  /* [6970] */
    (xdc_Char)0x0,  /* [6971] */
    (xdc_Char)0x4c,  /* [6972] */
    (xdc_Char)0x57,  /* [6973] */
    (xdc_Char)0x5f,  /* [6974] */
    (xdc_Char)0x64,  /* [6975] */
    (xdc_Char)0x65,  /* [6976] */
    (xdc_Char)0x6c,  /* [6977] */
    (xdc_Char)0x61,  /* [6978] */
    (xdc_Char)0x79,  /* [6979] */
    (xdc_Char)0x65,  /* [6980] */
    (xdc_Char)0x64,  /* [6981] */
    (xdc_Char)0x3a,  /* [6982] */
    (xdc_Char)0x20,  /* [6983] */
    (xdc_Char)0x64,  /* [6984] */
    (xdc_Char)0x65,  /* [6985] */
    (xdc_Char)0x6c,  /* [6986] */
    (xdc_Char)0x61,  /* [6987] */
    (xdc_Char)0x79,  /* [6988] */
    (xdc_Char)0x3a,  /* [6989] */
    (xdc_Char)0x20,  /* [6990] */
    (xdc_Char)0x25,  /* [6991] */
    (xdc_Char)0x64,  /* [6992] */
    (xdc_Char)0x0,  /* [6993] */
    (xdc_Char)0x4c,  /* [6994] */
    (xdc_Char)0x4d,  /* [6995] */
    (xdc_Char)0x5f,  /* [6996] */
    (xdc_Char)0x74,  /* [6997] */
    (xdc_Char)0x69,  /* [6998] */
    (xdc_Char)0x63,  /* [6999] */
    (xdc_Char)0x6b,  /* [7000] */
    (xdc_Char)0x3a,  /* [7001] */
    (xdc_Char)0x20,  /* [7002] */
    (xdc_Char)0x74,  /* [7003] */
    (xdc_Char)0x69,  /* [7004] */
    (xdc_Char)0x63,  /* [7005] */
    (xdc_Char)0x6b,  /* [7006] */
    (xdc_Char)0x3a,  /* [7007] */
    (xdc_Char)0x20,  /* [7008] */
    (xdc_Char)0x25,  /* [7009] */
    (xdc_Char)0x64,  /* [7010] */
    (xdc_Char)0x0,  /* [7011] */
    (xdc_Char)0x4c,  /* [7012] */
    (xdc_Char)0x4d,  /* [7013] */
    (xdc_Char)0x5f,  /* [7014] */
    (xdc_Char)0x62,  /* [7015] */
    (xdc_Char)0x65,  /* [7016] */
    (xdc_Char)0x67,  /* [7017] */
    (xdc_Char)0x69,  /* [7018] */
    (xdc_Char)0x6e,  /* [7019] */
    (xdc_Char)0x3a,  /* [7020] */
    (xdc_Char)0x20,  /* [7021] */
    (xdc_Char)0x63,  /* [7022] */
    (xdc_Char)0x6c,  /* [7023] */
    (xdc_Char)0x6b,  /* [7024] */
    (xdc_Char)0x3a,  /* [7025] */
    (xdc_Char)0x20,  /* [7026] */
    (xdc_Char)0x30,  /* [7027] */
    (xdc_Char)0x78,  /* [7028] */
    (xdc_Char)0x25,  /* [7029] */
    (xdc_Char)0x78,  /* [7030] */
    (xdc_Char)0x2c,  /* [7031] */
    (xdc_Char)0x20,  /* [7032] */
    (xdc_Char)0x66,  /* [7033] */
    (xdc_Char)0x75,  /* [7034] */
    (xdc_Char)0x6e,  /* [7035] */
    (xdc_Char)0x63,  /* [7036] */
    (xdc_Char)0x3a,  /* [7037] */
    (xdc_Char)0x20,  /* [7038] */
    (xdc_Char)0x30,  /* [7039] */
    (xdc_Char)0x78,  /* [7040] */
    (xdc_Char)0x25,  /* [7041] */
    (xdc_Char)0x78,  /* [7042] */
    (xdc_Char)0x0,  /* [7043] */
    (xdc_Char)0x4c,  /* [7044] */
    (xdc_Char)0x4d,  /* [7045] */
    (xdc_Char)0x5f,  /* [7046] */
    (xdc_Char)0x70,  /* [7047] */
    (xdc_Char)0x6f,  /* [7048] */
    (xdc_Char)0x73,  /* [7049] */
    (xdc_Char)0x74,  /* [7050] */
    (xdc_Char)0x3a,  /* [7051] */
    (xdc_Char)0x20,  /* [7052] */
    (xdc_Char)0x65,  /* [7053] */
    (xdc_Char)0x76,  /* [7054] */
    (xdc_Char)0x65,  /* [7055] */
    (xdc_Char)0x6e,  /* [7056] */
    (xdc_Char)0x74,  /* [7057] */
    (xdc_Char)0x3a,  /* [7058] */
    (xdc_Char)0x20,  /* [7059] */
    (xdc_Char)0x30,  /* [7060] */
    (xdc_Char)0x78,  /* [7061] */
    (xdc_Char)0x25,  /* [7062] */
    (xdc_Char)0x78,  /* [7063] */
    (xdc_Char)0x2c,  /* [7064] */
    (xdc_Char)0x20,  /* [7065] */
    (xdc_Char)0x63,  /* [7066] */
    (xdc_Char)0x75,  /* [7067] */
    (xdc_Char)0x72,  /* [7068] */
    (xdc_Char)0x72,  /* [7069] */
    (xdc_Char)0x45,  /* [7070] */
    (xdc_Char)0x76,  /* [7071] */
    (xdc_Char)0x65,  /* [7072] */
    (xdc_Char)0x6e,  /* [7073] */
    (xdc_Char)0x74,  /* [7074] */
    (xdc_Char)0x73,  /* [7075] */
    (xdc_Char)0x3a,  /* [7076] */
    (xdc_Char)0x20,  /* [7077] */
    (xdc_Char)0x30,  /* [7078] */
    (xdc_Char)0x78,  /* [7079] */
    (xdc_Char)0x25,  /* [7080] */
    (xdc_Char)0x78,  /* [7081] */
    (xdc_Char)0x2c,  /* [7082] */
    (xdc_Char)0x20,  /* [7083] */
    (xdc_Char)0x65,  /* [7084] */
    (xdc_Char)0x76,  /* [7085] */
    (xdc_Char)0x65,  /* [7086] */
    (xdc_Char)0x6e,  /* [7087] */
    (xdc_Char)0x74,  /* [7088] */
    (xdc_Char)0x49,  /* [7089] */
    (xdc_Char)0x64,  /* [7090] */
    (xdc_Char)0x3a,  /* [7091] */
    (xdc_Char)0x20,  /* [7092] */
    (xdc_Char)0x30,  /* [7093] */
    (xdc_Char)0x78,  /* [7094] */
    (xdc_Char)0x25,  /* [7095] */
    (xdc_Char)0x78,  /* [7096] */
    (xdc_Char)0x0,  /* [7097] */
    (xdc_Char)0x4c,  /* [7098] */
    (xdc_Char)0x4d,  /* [7099] */
    (xdc_Char)0x5f,  /* [7100] */
    (xdc_Char)0x70,  /* [7101] */
    (xdc_Char)0x65,  /* [7102] */
    (xdc_Char)0x6e,  /* [7103] */
    (xdc_Char)0x64,  /* [7104] */
    (xdc_Char)0x3a,  /* [7105] */
    (xdc_Char)0x20,  /* [7106] */
    (xdc_Char)0x65,  /* [7107] */
    (xdc_Char)0x76,  /* [7108] */
    (xdc_Char)0x65,  /* [7109] */
    (xdc_Char)0x6e,  /* [7110] */
    (xdc_Char)0x74,  /* [7111] */
    (xdc_Char)0x3a,  /* [7112] */
    (xdc_Char)0x20,  /* [7113] */
    (xdc_Char)0x30,  /* [7114] */
    (xdc_Char)0x78,  /* [7115] */
    (xdc_Char)0x25,  /* [7116] */
    (xdc_Char)0x78,  /* [7117] */
    (xdc_Char)0x2c,  /* [7118] */
    (xdc_Char)0x20,  /* [7119] */
    (xdc_Char)0x63,  /* [7120] */
    (xdc_Char)0x75,  /* [7121] */
    (xdc_Char)0x72,  /* [7122] */
    (xdc_Char)0x72,  /* [7123] */
    (xdc_Char)0x45,  /* [7124] */
    (xdc_Char)0x76,  /* [7125] */
    (xdc_Char)0x65,  /* [7126] */
    (xdc_Char)0x6e,  /* [7127] */
    (xdc_Char)0x74,  /* [7128] */
    (xdc_Char)0x73,  /* [7129] */
    (xdc_Char)0x3a,  /* [7130] */
    (xdc_Char)0x20,  /* [7131] */
    (xdc_Char)0x30,  /* [7132] */
    (xdc_Char)0x78,  /* [7133] */
    (xdc_Char)0x25,  /* [7134] */
    (xdc_Char)0x78,  /* [7135] */
    (xdc_Char)0x2c,  /* [7136] */
    (xdc_Char)0x20,  /* [7137] */
    (xdc_Char)0x61,  /* [7138] */
    (xdc_Char)0x6e,  /* [7139] */
    (xdc_Char)0x64,  /* [7140] */
    (xdc_Char)0x4d,  /* [7141] */
    (xdc_Char)0x61,  /* [7142] */
    (xdc_Char)0x73,  /* [7143] */
    (xdc_Char)0x6b,  /* [7144] */
    (xdc_Char)0x3a,  /* [7145] */
    (xdc_Char)0x20,  /* [7146] */
    (xdc_Char)0x30,  /* [7147] */
    (xdc_Char)0x78,  /* [7148] */
    (xdc_Char)0x25,  /* [7149] */
    (xdc_Char)0x78,  /* [7150] */
    (xdc_Char)0x2c,  /* [7151] */
    (xdc_Char)0x20,  /* [7152] */
    (xdc_Char)0x6f,  /* [7153] */
    (xdc_Char)0x72,  /* [7154] */
    (xdc_Char)0x4d,  /* [7155] */
    (xdc_Char)0x61,  /* [7156] */
    (xdc_Char)0x73,  /* [7157] */
    (xdc_Char)0x6b,  /* [7158] */
    (xdc_Char)0x3a,  /* [7159] */
    (xdc_Char)0x20,  /* [7160] */
    (xdc_Char)0x30,  /* [7161] */
    (xdc_Char)0x78,  /* [7162] */
    (xdc_Char)0x25,  /* [7163] */
    (xdc_Char)0x78,  /* [7164] */
    (xdc_Char)0x2c,  /* [7165] */
    (xdc_Char)0x20,  /* [7166] */
    (xdc_Char)0x74,  /* [7167] */
    (xdc_Char)0x69,  /* [7168] */
    (xdc_Char)0x6d,  /* [7169] */
    (xdc_Char)0x65,  /* [7170] */
    (xdc_Char)0x6f,  /* [7171] */
    (xdc_Char)0x75,  /* [7172] */
    (xdc_Char)0x74,  /* [7173] */
    (xdc_Char)0x3a,  /* [7174] */
    (xdc_Char)0x20,  /* [7175] */
    (xdc_Char)0x25,  /* [7176] */
    (xdc_Char)0x64,  /* [7177] */
    (xdc_Char)0x0,  /* [7178] */
    (xdc_Char)0x4c,  /* [7179] */
    (xdc_Char)0x4d,  /* [7180] */
    (xdc_Char)0x5f,  /* [7181] */
    (xdc_Char)0x70,  /* [7182] */
    (xdc_Char)0x6f,  /* [7183] */
    (xdc_Char)0x73,  /* [7184] */
    (xdc_Char)0x74,  /* [7185] */
    (xdc_Char)0x3a,  /* [7186] */
    (xdc_Char)0x20,  /* [7187] */
    (xdc_Char)0x73,  /* [7188] */
    (xdc_Char)0x65,  /* [7189] */
    (xdc_Char)0x6d,  /* [7190] */
    (xdc_Char)0x3a,  /* [7191] */
    (xdc_Char)0x20,  /* [7192] */
    (xdc_Char)0x30,  /* [7193] */
    (xdc_Char)0x78,  /* [7194] */
    (xdc_Char)0x25,  /* [7195] */
    (xdc_Char)0x78,  /* [7196] */
    (xdc_Char)0x2c,  /* [7197] */
    (xdc_Char)0x20,  /* [7198] */
    (xdc_Char)0x63,  /* [7199] */
    (xdc_Char)0x6f,  /* [7200] */
    (xdc_Char)0x75,  /* [7201] */
    (xdc_Char)0x6e,  /* [7202] */
    (xdc_Char)0x74,  /* [7203] */
    (xdc_Char)0x3a,  /* [7204] */
    (xdc_Char)0x20,  /* [7205] */
    (xdc_Char)0x25,  /* [7206] */
    (xdc_Char)0x64,  /* [7207] */
    (xdc_Char)0x0,  /* [7208] */
    (xdc_Char)0x4c,  /* [7209] */
    (xdc_Char)0x4d,  /* [7210] */
    (xdc_Char)0x5f,  /* [7211] */
    (xdc_Char)0x70,  /* [7212] */
    (xdc_Char)0x65,  /* [7213] */
    (xdc_Char)0x6e,  /* [7214] */
    (xdc_Char)0x64,  /* [7215] */
    (xdc_Char)0x3a,  /* [7216] */
    (xdc_Char)0x20,  /* [7217] */
    (xdc_Char)0x73,  /* [7218] */
    (xdc_Char)0x65,  /* [7219] */
    (xdc_Char)0x6d,  /* [7220] */
    (xdc_Char)0x3a,  /* [7221] */
    (xdc_Char)0x20,  /* [7222] */
    (xdc_Char)0x30,  /* [7223] */
    (xdc_Char)0x78,  /* [7224] */
    (xdc_Char)0x25,  /* [7225] */
    (xdc_Char)0x78,  /* [7226] */
    (xdc_Char)0x2c,  /* [7227] */
    (xdc_Char)0x20,  /* [7228] */
    (xdc_Char)0x63,  /* [7229] */
    (xdc_Char)0x6f,  /* [7230] */
    (xdc_Char)0x75,  /* [7231] */
    (xdc_Char)0x6e,  /* [7232] */
    (xdc_Char)0x74,  /* [7233] */
    (xdc_Char)0x3a,  /* [7234] */
    (xdc_Char)0x20,  /* [7235] */
    (xdc_Char)0x25,  /* [7236] */
    (xdc_Char)0x64,  /* [7237] */
    (xdc_Char)0x2c,  /* [7238] */
    (xdc_Char)0x20,  /* [7239] */
    (xdc_Char)0x74,  /* [7240] */
    (xdc_Char)0x69,  /* [7241] */
    (xdc_Char)0x6d,  /* [7242] */
    (xdc_Char)0x65,  /* [7243] */
    (xdc_Char)0x6f,  /* [7244] */
    (xdc_Char)0x75,  /* [7245] */
    (xdc_Char)0x74,  /* [7246] */
    (xdc_Char)0x3a,  /* [7247] */
    (xdc_Char)0x20,  /* [7248] */
    (xdc_Char)0x25,  /* [7249] */
    (xdc_Char)0x64,  /* [7250] */
    (xdc_Char)0x0,  /* [7251] */
    (xdc_Char)0x4c,  /* [7252] */
    (xdc_Char)0x4d,  /* [7253] */
    (xdc_Char)0x5f,  /* [7254] */
    (xdc_Char)0x62,  /* [7255] */
    (xdc_Char)0x65,  /* [7256] */
    (xdc_Char)0x67,  /* [7257] */
    (xdc_Char)0x69,  /* [7258] */
    (xdc_Char)0x6e,  /* [7259] */
    (xdc_Char)0x3a,  /* [7260] */
    (xdc_Char)0x20,  /* [7261] */
    (xdc_Char)0x73,  /* [7262] */
    (xdc_Char)0x77,  /* [7263] */
    (xdc_Char)0x69,  /* [7264] */
    (xdc_Char)0x3a,  /* [7265] */
    (xdc_Char)0x20,  /* [7266] */
    (xdc_Char)0x30,  /* [7267] */
    (xdc_Char)0x78,  /* [7268] */
    (xdc_Char)0x25,  /* [7269] */
    (xdc_Char)0x78,  /* [7270] */
    (xdc_Char)0x2c,  /* [7271] */
    (xdc_Char)0x20,  /* [7272] */
    (xdc_Char)0x66,  /* [7273] */
    (xdc_Char)0x75,  /* [7274] */
    (xdc_Char)0x6e,  /* [7275] */
    (xdc_Char)0x63,  /* [7276] */
    (xdc_Char)0x3a,  /* [7277] */
    (xdc_Char)0x20,  /* [7278] */
    (xdc_Char)0x30,  /* [7279] */
    (xdc_Char)0x78,  /* [7280] */
    (xdc_Char)0x25,  /* [7281] */
    (xdc_Char)0x78,  /* [7282] */
    (xdc_Char)0x2c,  /* [7283] */
    (xdc_Char)0x20,  /* [7284] */
    (xdc_Char)0x70,  /* [7285] */
    (xdc_Char)0x72,  /* [7286] */
    (xdc_Char)0x65,  /* [7287] */
    (xdc_Char)0x54,  /* [7288] */
    (xdc_Char)0x68,  /* [7289] */
    (xdc_Char)0x72,  /* [7290] */
    (xdc_Char)0x65,  /* [7291] */
    (xdc_Char)0x61,  /* [7292] */
    (xdc_Char)0x64,  /* [7293] */
    (xdc_Char)0x3a,  /* [7294] */
    (xdc_Char)0x20,  /* [7295] */
    (xdc_Char)0x25,  /* [7296] */
    (xdc_Char)0x64,  /* [7297] */
    (xdc_Char)0x0,  /* [7298] */
    (xdc_Char)0x4c,  /* [7299] */
    (xdc_Char)0x44,  /* [7300] */
    (xdc_Char)0x5f,  /* [7301] */
    (xdc_Char)0x65,  /* [7302] */
    (xdc_Char)0x6e,  /* [7303] */
    (xdc_Char)0x64,  /* [7304] */
    (xdc_Char)0x3a,  /* [7305] */
    (xdc_Char)0x20,  /* [7306] */
    (xdc_Char)0x73,  /* [7307] */
    (xdc_Char)0x77,  /* [7308] */
    (xdc_Char)0x69,  /* [7309] */
    (xdc_Char)0x3a,  /* [7310] */
    (xdc_Char)0x20,  /* [7311] */
    (xdc_Char)0x30,  /* [7312] */
    (xdc_Char)0x78,  /* [7313] */
    (xdc_Char)0x25,  /* [7314] */
    (xdc_Char)0x78,  /* [7315] */
    (xdc_Char)0x0,  /* [7316] */
    (xdc_Char)0x4c,  /* [7317] */
    (xdc_Char)0x4d,  /* [7318] */
    (xdc_Char)0x5f,  /* [7319] */
    (xdc_Char)0x70,  /* [7320] */
    (xdc_Char)0x6f,  /* [7321] */
    (xdc_Char)0x73,  /* [7322] */
    (xdc_Char)0x74,  /* [7323] */
    (xdc_Char)0x3a,  /* [7324] */
    (xdc_Char)0x20,  /* [7325] */
    (xdc_Char)0x73,  /* [7326] */
    (xdc_Char)0x77,  /* [7327] */
    (xdc_Char)0x69,  /* [7328] */
    (xdc_Char)0x3a,  /* [7329] */
    (xdc_Char)0x20,  /* [7330] */
    (xdc_Char)0x30,  /* [7331] */
    (xdc_Char)0x78,  /* [7332] */
    (xdc_Char)0x25,  /* [7333] */
    (xdc_Char)0x78,  /* [7334] */
    (xdc_Char)0x2c,  /* [7335] */
    (xdc_Char)0x20,  /* [7336] */
    (xdc_Char)0x66,  /* [7337] */
    (xdc_Char)0x75,  /* [7338] */
    (xdc_Char)0x6e,  /* [7339] */
    (xdc_Char)0x63,  /* [7340] */
    (xdc_Char)0x3a,  /* [7341] */
    (xdc_Char)0x20,  /* [7342] */
    (xdc_Char)0x30,  /* [7343] */
    (xdc_Char)0x78,  /* [7344] */
    (xdc_Char)0x25,  /* [7345] */
    (xdc_Char)0x78,  /* [7346] */
    (xdc_Char)0x2c,  /* [7347] */
    (xdc_Char)0x20,  /* [7348] */
    (xdc_Char)0x70,  /* [7349] */
    (xdc_Char)0x72,  /* [7350] */
    (xdc_Char)0x69,  /* [7351] */
    (xdc_Char)0x3a,  /* [7352] */
    (xdc_Char)0x20,  /* [7353] */
    (xdc_Char)0x25,  /* [7354] */
    (xdc_Char)0x64,  /* [7355] */
    (xdc_Char)0x0,  /* [7356] */
    (xdc_Char)0x4c,  /* [7357] */
    (xdc_Char)0x4d,  /* [7358] */
    (xdc_Char)0x5f,  /* [7359] */
    (xdc_Char)0x73,  /* [7360] */
    (xdc_Char)0x77,  /* [7361] */
    (xdc_Char)0x69,  /* [7362] */
    (xdc_Char)0x74,  /* [7363] */
    (xdc_Char)0x63,  /* [7364] */
    (xdc_Char)0x68,  /* [7365] */
    (xdc_Char)0x3a,  /* [7366] */
    (xdc_Char)0x20,  /* [7367] */
    (xdc_Char)0x6f,  /* [7368] */
    (xdc_Char)0x6c,  /* [7369] */
    (xdc_Char)0x64,  /* [7370] */
    (xdc_Char)0x74,  /* [7371] */
    (xdc_Char)0x73,  /* [7372] */
    (xdc_Char)0x6b,  /* [7373] */
    (xdc_Char)0x3a,  /* [7374] */
    (xdc_Char)0x20,  /* [7375] */
    (xdc_Char)0x30,  /* [7376] */
    (xdc_Char)0x78,  /* [7377] */
    (xdc_Char)0x25,  /* [7378] */
    (xdc_Char)0x78,  /* [7379] */
    (xdc_Char)0x2c,  /* [7380] */
    (xdc_Char)0x20,  /* [7381] */
    (xdc_Char)0x6f,  /* [7382] */
    (xdc_Char)0x6c,  /* [7383] */
    (xdc_Char)0x64,  /* [7384] */
    (xdc_Char)0x66,  /* [7385] */
    (xdc_Char)0x75,  /* [7386] */
    (xdc_Char)0x6e,  /* [7387] */
    (xdc_Char)0x63,  /* [7388] */
    (xdc_Char)0x3a,  /* [7389] */
    (xdc_Char)0x20,  /* [7390] */
    (xdc_Char)0x30,  /* [7391] */
    (xdc_Char)0x78,  /* [7392] */
    (xdc_Char)0x25,  /* [7393] */
    (xdc_Char)0x78,  /* [7394] */
    (xdc_Char)0x2c,  /* [7395] */
    (xdc_Char)0x20,  /* [7396] */
    (xdc_Char)0x6e,  /* [7397] */
    (xdc_Char)0x65,  /* [7398] */
    (xdc_Char)0x77,  /* [7399] */
    (xdc_Char)0x74,  /* [7400] */
    (xdc_Char)0x73,  /* [7401] */
    (xdc_Char)0x6b,  /* [7402] */
    (xdc_Char)0x3a,  /* [7403] */
    (xdc_Char)0x20,  /* [7404] */
    (xdc_Char)0x30,  /* [7405] */
    (xdc_Char)0x78,  /* [7406] */
    (xdc_Char)0x25,  /* [7407] */
    (xdc_Char)0x78,  /* [7408] */
    (xdc_Char)0x2c,  /* [7409] */
    (xdc_Char)0x20,  /* [7410] */
    (xdc_Char)0x6e,  /* [7411] */
    (xdc_Char)0x65,  /* [7412] */
    (xdc_Char)0x77,  /* [7413] */
    (xdc_Char)0x66,  /* [7414] */
    (xdc_Char)0x75,  /* [7415] */
    (xdc_Char)0x6e,  /* [7416] */
    (xdc_Char)0x63,  /* [7417] */
    (xdc_Char)0x3a,  /* [7418] */
    (xdc_Char)0x20,  /* [7419] */
    (xdc_Char)0x30,  /* [7420] */
    (xdc_Char)0x78,  /* [7421] */
    (xdc_Char)0x25,  /* [7422] */
    (xdc_Char)0x78,  /* [7423] */
    (xdc_Char)0x0,  /* [7424] */
    (xdc_Char)0x4c,  /* [7425] */
    (xdc_Char)0x4d,  /* [7426] */
    (xdc_Char)0x5f,  /* [7427] */
    (xdc_Char)0x73,  /* [7428] */
    (xdc_Char)0x6c,  /* [7429] */
    (xdc_Char)0x65,  /* [7430] */
    (xdc_Char)0x65,  /* [7431] */
    (xdc_Char)0x70,  /* [7432] */
    (xdc_Char)0x3a,  /* [7433] */
    (xdc_Char)0x20,  /* [7434] */
    (xdc_Char)0x74,  /* [7435] */
    (xdc_Char)0x73,  /* [7436] */
    (xdc_Char)0x6b,  /* [7437] */
    (xdc_Char)0x3a,  /* [7438] */
    (xdc_Char)0x20,  /* [7439] */
    (xdc_Char)0x30,  /* [7440] */
    (xdc_Char)0x78,  /* [7441] */
    (xdc_Char)0x25,  /* [7442] */
    (xdc_Char)0x78,  /* [7443] */
    (xdc_Char)0x2c,  /* [7444] */
    (xdc_Char)0x20,  /* [7445] */
    (xdc_Char)0x66,  /* [7446] */
    (xdc_Char)0x75,  /* [7447] */
    (xdc_Char)0x6e,  /* [7448] */
    (xdc_Char)0x63,  /* [7449] */
    (xdc_Char)0x3a,  /* [7450] */
    (xdc_Char)0x20,  /* [7451] */
    (xdc_Char)0x30,  /* [7452] */
    (xdc_Char)0x78,  /* [7453] */
    (xdc_Char)0x25,  /* [7454] */
    (xdc_Char)0x78,  /* [7455] */
    (xdc_Char)0x2c,  /* [7456] */
    (xdc_Char)0x20,  /* [7457] */
    (xdc_Char)0x74,  /* [7458] */
    (xdc_Char)0x69,  /* [7459] */
    (xdc_Char)0x6d,  /* [7460] */
    (xdc_Char)0x65,  /* [7461] */
    (xdc_Char)0x6f,  /* [7462] */
    (xdc_Char)0x75,  /* [7463] */
    (xdc_Char)0x74,  /* [7464] */
    (xdc_Char)0x3a,  /* [7465] */
    (xdc_Char)0x20,  /* [7466] */
    (xdc_Char)0x25,  /* [7467] */
    (xdc_Char)0x64,  /* [7468] */
    (xdc_Char)0x0,  /* [7469] */
    (xdc_Char)0x4c,  /* [7470] */
    (xdc_Char)0x44,  /* [7471] */
    (xdc_Char)0x5f,  /* [7472] */
    (xdc_Char)0x72,  /* [7473] */
    (xdc_Char)0x65,  /* [7474] */
    (xdc_Char)0x61,  /* [7475] */
    (xdc_Char)0x64,  /* [7476] */
    (xdc_Char)0x79,  /* [7477] */
    (xdc_Char)0x3a,  /* [7478] */
    (xdc_Char)0x20,  /* [7479] */
    (xdc_Char)0x74,  /* [7480] */
    (xdc_Char)0x73,  /* [7481] */
    (xdc_Char)0x6b,  /* [7482] */
    (xdc_Char)0x3a,  /* [7483] */
    (xdc_Char)0x20,  /* [7484] */
    (xdc_Char)0x30,  /* [7485] */
    (xdc_Char)0x78,  /* [7486] */
    (xdc_Char)0x25,  /* [7487] */
    (xdc_Char)0x78,  /* [7488] */
    (xdc_Char)0x2c,  /* [7489] */
    (xdc_Char)0x20,  /* [7490] */
    (xdc_Char)0x66,  /* [7491] */
    (xdc_Char)0x75,  /* [7492] */
    (xdc_Char)0x6e,  /* [7493] */
    (xdc_Char)0x63,  /* [7494] */
    (xdc_Char)0x3a,  /* [7495] */
    (xdc_Char)0x20,  /* [7496] */
    (xdc_Char)0x30,  /* [7497] */
    (xdc_Char)0x78,  /* [7498] */
    (xdc_Char)0x25,  /* [7499] */
    (xdc_Char)0x78,  /* [7500] */
    (xdc_Char)0x2c,  /* [7501] */
    (xdc_Char)0x20,  /* [7502] */
    (xdc_Char)0x70,  /* [7503] */
    (xdc_Char)0x72,  /* [7504] */
    (xdc_Char)0x69,  /* [7505] */
    (xdc_Char)0x3a,  /* [7506] */
    (xdc_Char)0x20,  /* [7507] */
    (xdc_Char)0x25,  /* [7508] */
    (xdc_Char)0x64,  /* [7509] */
    (xdc_Char)0x0,  /* [7510] */
    (xdc_Char)0x4c,  /* [7511] */
    (xdc_Char)0x44,  /* [7512] */
    (xdc_Char)0x5f,  /* [7513] */
    (xdc_Char)0x62,  /* [7514] */
    (xdc_Char)0x6c,  /* [7515] */
    (xdc_Char)0x6f,  /* [7516] */
    (xdc_Char)0x63,  /* [7517] */
    (xdc_Char)0x6b,  /* [7518] */
    (xdc_Char)0x3a,  /* [7519] */
    (xdc_Char)0x20,  /* [7520] */
    (xdc_Char)0x74,  /* [7521] */
    (xdc_Char)0x73,  /* [7522] */
    (xdc_Char)0x6b,  /* [7523] */
    (xdc_Char)0x3a,  /* [7524] */
    (xdc_Char)0x20,  /* [7525] */
    (xdc_Char)0x30,  /* [7526] */
    (xdc_Char)0x78,  /* [7527] */
    (xdc_Char)0x25,  /* [7528] */
    (xdc_Char)0x78,  /* [7529] */
    (xdc_Char)0x2c,  /* [7530] */
    (xdc_Char)0x20,  /* [7531] */
    (xdc_Char)0x66,  /* [7532] */
    (xdc_Char)0x75,  /* [7533] */
    (xdc_Char)0x6e,  /* [7534] */
    (xdc_Char)0x63,  /* [7535] */
    (xdc_Char)0x3a,  /* [7536] */
    (xdc_Char)0x20,  /* [7537] */
    (xdc_Char)0x30,  /* [7538] */
    (xdc_Char)0x78,  /* [7539] */
    (xdc_Char)0x25,  /* [7540] */
    (xdc_Char)0x78,  /* [7541] */
    (xdc_Char)0x0,  /* [7542] */
    (xdc_Char)0x4c,  /* [7543] */
    (xdc_Char)0x4d,  /* [7544] */
    (xdc_Char)0x5f,  /* [7545] */
    (xdc_Char)0x79,  /* [7546] */
    (xdc_Char)0x69,  /* [7547] */
    (xdc_Char)0x65,  /* [7548] */
    (xdc_Char)0x6c,  /* [7549] */
    (xdc_Char)0x64,  /* [7550] */
    (xdc_Char)0x3a,  /* [7551] */
    (xdc_Char)0x20,  /* [7552] */
    (xdc_Char)0x74,  /* [7553] */
    (xdc_Char)0x73,  /* [7554] */
    (xdc_Char)0x6b,  /* [7555] */
    (xdc_Char)0x3a,  /* [7556] */
    (xdc_Char)0x20,  /* [7557] */
    (xdc_Char)0x30,  /* [7558] */
    (xdc_Char)0x78,  /* [7559] */
    (xdc_Char)0x25,  /* [7560] */
    (xdc_Char)0x78,  /* [7561] */
    (xdc_Char)0x2c,  /* [7562] */
    (xdc_Char)0x20,  /* [7563] */
    (xdc_Char)0x66,  /* [7564] */
    (xdc_Char)0x75,  /* [7565] */
    (xdc_Char)0x6e,  /* [7566] */
    (xdc_Char)0x63,  /* [7567] */
    (xdc_Char)0x3a,  /* [7568] */
    (xdc_Char)0x20,  /* [7569] */
    (xdc_Char)0x30,  /* [7570] */
    (xdc_Char)0x78,  /* [7571] */
    (xdc_Char)0x25,  /* [7572] */
    (xdc_Char)0x78,  /* [7573] */
    (xdc_Char)0x2c,  /* [7574] */
    (xdc_Char)0x20,  /* [7575] */
    (xdc_Char)0x63,  /* [7576] */
    (xdc_Char)0x75,  /* [7577] */
    (xdc_Char)0x72,  /* [7578] */
    (xdc_Char)0x72,  /* [7579] */
    (xdc_Char)0x54,  /* [7580] */
    (xdc_Char)0x68,  /* [7581] */
    (xdc_Char)0x72,  /* [7582] */
    (xdc_Char)0x65,  /* [7583] */
    (xdc_Char)0x61,  /* [7584] */
    (xdc_Char)0x64,  /* [7585] */
    (xdc_Char)0x3a,  /* [7586] */
    (xdc_Char)0x20,  /* [7587] */
    (xdc_Char)0x25,  /* [7588] */
    (xdc_Char)0x64,  /* [7589] */
    (xdc_Char)0x0,  /* [7590] */
    (xdc_Char)0x4c,  /* [7591] */
    (xdc_Char)0x4d,  /* [7592] */
    (xdc_Char)0x5f,  /* [7593] */
    (xdc_Char)0x73,  /* [7594] */
    (xdc_Char)0x65,  /* [7595] */
    (xdc_Char)0x74,  /* [7596] */
    (xdc_Char)0x50,  /* [7597] */
    (xdc_Char)0x72,  /* [7598] */
    (xdc_Char)0x69,  /* [7599] */
    (xdc_Char)0x3a,  /* [7600] */
    (xdc_Char)0x20,  /* [7601] */
    (xdc_Char)0x74,  /* [7602] */
    (xdc_Char)0x73,  /* [7603] */
    (xdc_Char)0x6b,  /* [7604] */
    (xdc_Char)0x3a,  /* [7605] */
    (xdc_Char)0x20,  /* [7606] */
    (xdc_Char)0x30,  /* [7607] */
    (xdc_Char)0x78,  /* [7608] */
    (xdc_Char)0x25,  /* [7609] */
    (xdc_Char)0x78,  /* [7610] */
    (xdc_Char)0x2c,  /* [7611] */
    (xdc_Char)0x20,  /* [7612] */
    (xdc_Char)0x66,  /* [7613] */
    (xdc_Char)0x75,  /* [7614] */
    (xdc_Char)0x6e,  /* [7615] */
    (xdc_Char)0x63,  /* [7616] */
    (xdc_Char)0x3a,  /* [7617] */
    (xdc_Char)0x20,  /* [7618] */
    (xdc_Char)0x30,  /* [7619] */
    (xdc_Char)0x78,  /* [7620] */
    (xdc_Char)0x25,  /* [7621] */
    (xdc_Char)0x78,  /* [7622] */
    (xdc_Char)0x2c,  /* [7623] */
    (xdc_Char)0x20,  /* [7624] */
    (xdc_Char)0x6f,  /* [7625] */
    (xdc_Char)0x6c,  /* [7626] */
    (xdc_Char)0x64,  /* [7627] */
    (xdc_Char)0x50,  /* [7628] */
    (xdc_Char)0x72,  /* [7629] */
    (xdc_Char)0x69,  /* [7630] */
    (xdc_Char)0x3a,  /* [7631] */
    (xdc_Char)0x20,  /* [7632] */
    (xdc_Char)0x25,  /* [7633] */
    (xdc_Char)0x64,  /* [7634] */
    (xdc_Char)0x2c,  /* [7635] */
    (xdc_Char)0x20,  /* [7636] */
    (xdc_Char)0x6e,  /* [7637] */
    (xdc_Char)0x65,  /* [7638] */
    (xdc_Char)0x77,  /* [7639] */
    (xdc_Char)0x50,  /* [7640] */
    (xdc_Char)0x72,  /* [7641] */
    (xdc_Char)0x69,  /* [7642] */
    (xdc_Char)0x20,  /* [7643] */
    (xdc_Char)0x25,  /* [7644] */
    (xdc_Char)0x64,  /* [7645] */
    (xdc_Char)0x0,  /* [7646] */
    (xdc_Char)0x4c,  /* [7647] */
    (xdc_Char)0x44,  /* [7648] */
    (xdc_Char)0x5f,  /* [7649] */
    (xdc_Char)0x65,  /* [7650] */
    (xdc_Char)0x78,  /* [7651] */
    (xdc_Char)0x69,  /* [7652] */
    (xdc_Char)0x74,  /* [7653] */
    (xdc_Char)0x3a,  /* [7654] */
    (xdc_Char)0x20,  /* [7655] */
    (xdc_Char)0x74,  /* [7656] */
    (xdc_Char)0x73,  /* [7657] */
    (xdc_Char)0x6b,  /* [7658] */
    (xdc_Char)0x3a,  /* [7659] */
    (xdc_Char)0x20,  /* [7660] */
    (xdc_Char)0x30,  /* [7661] */
    (xdc_Char)0x78,  /* [7662] */
    (xdc_Char)0x25,  /* [7663] */
    (xdc_Char)0x78,  /* [7664] */
    (xdc_Char)0x2c,  /* [7665] */
    (xdc_Char)0x20,  /* [7666] */
    (xdc_Char)0x66,  /* [7667] */
    (xdc_Char)0x75,  /* [7668] */
    (xdc_Char)0x6e,  /* [7669] */
    (xdc_Char)0x63,  /* [7670] */
    (xdc_Char)0x3a,  /* [7671] */
    (xdc_Char)0x20,  /* [7672] */
    (xdc_Char)0x30,  /* [7673] */
    (xdc_Char)0x78,  /* [7674] */
    (xdc_Char)0x25,  /* [7675] */
    (xdc_Char)0x78,  /* [7676] */
    (xdc_Char)0x0,  /* [7677] */
    (xdc_Char)0x4c,  /* [7678] */
    (xdc_Char)0x4d,  /* [7679] */
    (xdc_Char)0x5f,  /* [7680] */
    (xdc_Char)0x73,  /* [7681] */
    (xdc_Char)0x65,  /* [7682] */
    (xdc_Char)0x74,  /* [7683] */
    (xdc_Char)0x41,  /* [7684] */
    (xdc_Char)0x66,  /* [7685] */
    (xdc_Char)0x66,  /* [7686] */
    (xdc_Char)0x69,  /* [7687] */
    (xdc_Char)0x6e,  /* [7688] */
    (xdc_Char)0x69,  /* [7689] */
    (xdc_Char)0x74,  /* [7690] */
    (xdc_Char)0x79,  /* [7691] */
    (xdc_Char)0x3a,  /* [7692] */
    (xdc_Char)0x20,  /* [7693] */
    (xdc_Char)0x74,  /* [7694] */
    (xdc_Char)0x73,  /* [7695] */
    (xdc_Char)0x6b,  /* [7696] */
    (xdc_Char)0x3a,  /* [7697] */
    (xdc_Char)0x20,  /* [7698] */
    (xdc_Char)0x30,  /* [7699] */
    (xdc_Char)0x78,  /* [7700] */
    (xdc_Char)0x25,  /* [7701] */
    (xdc_Char)0x78,  /* [7702] */
    (xdc_Char)0x2c,  /* [7703] */
    (xdc_Char)0x20,  /* [7704] */
    (xdc_Char)0x66,  /* [7705] */
    (xdc_Char)0x75,  /* [7706] */
    (xdc_Char)0x6e,  /* [7707] */
    (xdc_Char)0x63,  /* [7708] */
    (xdc_Char)0x3a,  /* [7709] */
    (xdc_Char)0x20,  /* [7710] */
    (xdc_Char)0x30,  /* [7711] */
    (xdc_Char)0x78,  /* [7712] */
    (xdc_Char)0x25,  /* [7713] */
    (xdc_Char)0x78,  /* [7714] */
    (xdc_Char)0x2c,  /* [7715] */
    (xdc_Char)0x20,  /* [7716] */
    (xdc_Char)0x6f,  /* [7717] */
    (xdc_Char)0x6c,  /* [7718] */
    (xdc_Char)0x64,  /* [7719] */
    (xdc_Char)0x43,  /* [7720] */
    (xdc_Char)0x6f,  /* [7721] */
    (xdc_Char)0x72,  /* [7722] */
    (xdc_Char)0x65,  /* [7723] */
    (xdc_Char)0x3a,  /* [7724] */
    (xdc_Char)0x20,  /* [7725] */
    (xdc_Char)0x25,  /* [7726] */
    (xdc_Char)0x64,  /* [7727] */
    (xdc_Char)0x2c,  /* [7728] */
    (xdc_Char)0x20,  /* [7729] */
    (xdc_Char)0x6f,  /* [7730] */
    (xdc_Char)0x6c,  /* [7731] */
    (xdc_Char)0x64,  /* [7732] */
    (xdc_Char)0x41,  /* [7733] */
    (xdc_Char)0x66,  /* [7734] */
    (xdc_Char)0x66,  /* [7735] */
    (xdc_Char)0x69,  /* [7736] */
    (xdc_Char)0x6e,  /* [7737] */
    (xdc_Char)0x69,  /* [7738] */
    (xdc_Char)0x74,  /* [7739] */
    (xdc_Char)0x79,  /* [7740] */
    (xdc_Char)0x20,  /* [7741] */
    (xdc_Char)0x25,  /* [7742] */
    (xdc_Char)0x64,  /* [7743] */
    (xdc_Char)0x2c,  /* [7744] */
    (xdc_Char)0x20,  /* [7745] */
    (xdc_Char)0x6e,  /* [7746] */
    (xdc_Char)0x65,  /* [7747] */
    (xdc_Char)0x77,  /* [7748] */
    (xdc_Char)0x41,  /* [7749] */
    (xdc_Char)0x66,  /* [7750] */
    (xdc_Char)0x66,  /* [7751] */
    (xdc_Char)0x69,  /* [7752] */
    (xdc_Char)0x6e,  /* [7753] */
    (xdc_Char)0x69,  /* [7754] */
    (xdc_Char)0x74,  /* [7755] */
    (xdc_Char)0x79,  /* [7756] */
    (xdc_Char)0x20,  /* [7757] */
    (xdc_Char)0x25,  /* [7758] */
    (xdc_Char)0x64,  /* [7759] */
    (xdc_Char)0x0,  /* [7760] */
    (xdc_Char)0x4c,  /* [7761] */
    (xdc_Char)0x44,  /* [7762] */
    (xdc_Char)0x5f,  /* [7763] */
    (xdc_Char)0x73,  /* [7764] */
    (xdc_Char)0x63,  /* [7765] */
    (xdc_Char)0x68,  /* [7766] */
    (xdc_Char)0x65,  /* [7767] */
    (xdc_Char)0x64,  /* [7768] */
    (xdc_Char)0x75,  /* [7769] */
    (xdc_Char)0x6c,  /* [7770] */
    (xdc_Char)0x65,  /* [7771] */
    (xdc_Char)0x3a,  /* [7772] */
    (xdc_Char)0x20,  /* [7773] */
    (xdc_Char)0x63,  /* [7774] */
    (xdc_Char)0x6f,  /* [7775] */
    (xdc_Char)0x72,  /* [7776] */
    (xdc_Char)0x65,  /* [7777] */
    (xdc_Char)0x49,  /* [7778] */
    (xdc_Char)0x64,  /* [7779] */
    (xdc_Char)0x3a,  /* [7780] */
    (xdc_Char)0x20,  /* [7781] */
    (xdc_Char)0x25,  /* [7782] */
    (xdc_Char)0x64,  /* [7783] */
    (xdc_Char)0x2c,  /* [7784] */
    (xdc_Char)0x20,  /* [7785] */
    (xdc_Char)0x77,  /* [7786] */
    (xdc_Char)0x6f,  /* [7787] */
    (xdc_Char)0x72,  /* [7788] */
    (xdc_Char)0x6b,  /* [7789] */
    (xdc_Char)0x46,  /* [7790] */
    (xdc_Char)0x6c,  /* [7791] */
    (xdc_Char)0x61,  /* [7792] */
    (xdc_Char)0x67,  /* [7793] */
    (xdc_Char)0x3a,  /* [7794] */
    (xdc_Char)0x20,  /* [7795] */
    (xdc_Char)0x25,  /* [7796] */
    (xdc_Char)0x64,  /* [7797] */
    (xdc_Char)0x2c,  /* [7798] */
    (xdc_Char)0x20,  /* [7799] */
    (xdc_Char)0x63,  /* [7800] */
    (xdc_Char)0x75,  /* [7801] */
    (xdc_Char)0x72,  /* [7802] */
    (xdc_Char)0x53,  /* [7803] */
    (xdc_Char)0x65,  /* [7804] */
    (xdc_Char)0x74,  /* [7805] */
    (xdc_Char)0x4c,  /* [7806] */
    (xdc_Char)0x6f,  /* [7807] */
    (xdc_Char)0x63,  /* [7808] */
    (xdc_Char)0x61,  /* [7809] */
    (xdc_Char)0x6c,  /* [7810] */
    (xdc_Char)0x3a,  /* [7811] */
    (xdc_Char)0x20,  /* [7812] */
    (xdc_Char)0x25,  /* [7813] */
    (xdc_Char)0x64,  /* [7814] */
    (xdc_Char)0x2c,  /* [7815] */
    (xdc_Char)0x20,  /* [7816] */
    (xdc_Char)0x63,  /* [7817] */
    (xdc_Char)0x75,  /* [7818] */
    (xdc_Char)0x72,  /* [7819] */
    (xdc_Char)0x53,  /* [7820] */
    (xdc_Char)0x65,  /* [7821] */
    (xdc_Char)0x74,  /* [7822] */
    (xdc_Char)0x58,  /* [7823] */
    (xdc_Char)0x3a,  /* [7824] */
    (xdc_Char)0x20,  /* [7825] */
    (xdc_Char)0x25,  /* [7826] */
    (xdc_Char)0x64,  /* [7827] */
    (xdc_Char)0x2c,  /* [7828] */
    (xdc_Char)0x20,  /* [7829] */
    (xdc_Char)0x63,  /* [7830] */
    (xdc_Char)0x75,  /* [7831] */
    (xdc_Char)0x72,  /* [7832] */
    (xdc_Char)0x4d,  /* [7833] */
    (xdc_Char)0x61,  /* [7834] */
    (xdc_Char)0x73,  /* [7835] */
    (xdc_Char)0x6b,  /* [7836] */
    (xdc_Char)0x4c,  /* [7837] */
    (xdc_Char)0x6f,  /* [7838] */
    (xdc_Char)0x63,  /* [7839] */
    (xdc_Char)0x61,  /* [7840] */
    (xdc_Char)0x6c,  /* [7841] */
    (xdc_Char)0x3a,  /* [7842] */
    (xdc_Char)0x20,  /* [7843] */
    (xdc_Char)0x25,  /* [7844] */
    (xdc_Char)0x64,  /* [7845] */
    (xdc_Char)0x0,  /* [7846] */
    (xdc_Char)0x4c,  /* [7847] */
    (xdc_Char)0x44,  /* [7848] */
    (xdc_Char)0x5f,  /* [7849] */
    (xdc_Char)0x6e,  /* [7850] */
    (xdc_Char)0x6f,  /* [7851] */
    (xdc_Char)0x57,  /* [7852] */
    (xdc_Char)0x6f,  /* [7853] */
    (xdc_Char)0x72,  /* [7854] */
    (xdc_Char)0x6b,  /* [7855] */
    (xdc_Char)0x3a,  /* [7856] */
    (xdc_Char)0x20,  /* [7857] */
    (xdc_Char)0x63,  /* [7858] */
    (xdc_Char)0x6f,  /* [7859] */
    (xdc_Char)0x72,  /* [7860] */
    (xdc_Char)0x65,  /* [7861] */
    (xdc_Char)0x49,  /* [7862] */
    (xdc_Char)0x64,  /* [7863] */
    (xdc_Char)0x3a,  /* [7864] */
    (xdc_Char)0x20,  /* [7865] */
    (xdc_Char)0x25,  /* [7866] */
    (xdc_Char)0x64,  /* [7867] */
    (xdc_Char)0x2c,  /* [7868] */
    (xdc_Char)0x20,  /* [7869] */
    (xdc_Char)0x63,  /* [7870] */
    (xdc_Char)0x75,  /* [7871] */
    (xdc_Char)0x72,  /* [7872] */
    (xdc_Char)0x53,  /* [7873] */
    (xdc_Char)0x65,  /* [7874] */
    (xdc_Char)0x74,  /* [7875] */
    (xdc_Char)0x4c,  /* [7876] */
    (xdc_Char)0x6f,  /* [7877] */
    (xdc_Char)0x63,  /* [7878] */
    (xdc_Char)0x61,  /* [7879] */
    (xdc_Char)0x6c,  /* [7880] */
    (xdc_Char)0x3a,  /* [7881] */
    (xdc_Char)0x20,  /* [7882] */
    (xdc_Char)0x25,  /* [7883] */
    (xdc_Char)0x64,  /* [7884] */
    (xdc_Char)0x2c,  /* [7885] */
    (xdc_Char)0x20,  /* [7886] */
    (xdc_Char)0x63,  /* [7887] */
    (xdc_Char)0x75,  /* [7888] */
    (xdc_Char)0x72,  /* [7889] */
    (xdc_Char)0x53,  /* [7890] */
    (xdc_Char)0x65,  /* [7891] */
    (xdc_Char)0x74,  /* [7892] */
    (xdc_Char)0x58,  /* [7893] */
    (xdc_Char)0x3a,  /* [7894] */
    (xdc_Char)0x20,  /* [7895] */
    (xdc_Char)0x25,  /* [7896] */
    (xdc_Char)0x64,  /* [7897] */
    (xdc_Char)0x2c,  /* [7898] */
    (xdc_Char)0x20,  /* [7899] */
    (xdc_Char)0x63,  /* [7900] */
    (xdc_Char)0x75,  /* [7901] */
    (xdc_Char)0x72,  /* [7902] */
    (xdc_Char)0x4d,  /* [7903] */
    (xdc_Char)0x61,  /* [7904] */
    (xdc_Char)0x73,  /* [7905] */
    (xdc_Char)0x6b,  /* [7906] */
    (xdc_Char)0x4c,  /* [7907] */
    (xdc_Char)0x6f,  /* [7908] */
    (xdc_Char)0x63,  /* [7909] */
    (xdc_Char)0x61,  /* [7910] */
    (xdc_Char)0x6c,  /* [7911] */
    (xdc_Char)0x3a,  /* [7912] */
    (xdc_Char)0x20,  /* [7913] */
    (xdc_Char)0x25,  /* [7914] */
    (xdc_Char)0x64,  /* [7915] */
    (xdc_Char)0x0,  /* [7916] */
    (xdc_Char)0x4c,  /* [7917] */
    (xdc_Char)0x6f,  /* [7918] */
    (xdc_Char)0x67,  /* [7919] */
    (xdc_Char)0x67,  /* [7920] */
    (xdc_Char)0x65,  /* [7921] */
    (xdc_Char)0x72,  /* [7922] */
    (xdc_Char)0x53,  /* [7923] */
    (xdc_Char)0x74,  /* [7924] */
    (xdc_Char)0x6f,  /* [7925] */
    (xdc_Char)0x70,  /* [7926] */
    (xdc_Char)0x4d,  /* [7927] */
    (xdc_Char)0x6f,  /* [7928] */
    (xdc_Char)0x64,  /* [7929] */
    (xdc_Char)0x65,  /* [7930] */
    (xdc_Char)0x20,  /* [7931] */
    (xdc_Char)0x54,  /* [7932] */
    (xdc_Char)0x65,  /* [7933] */
    (xdc_Char)0x73,  /* [7934] */
    (xdc_Char)0x74,  /* [7935] */
    (xdc_Char)0x0,  /* [7936] */
    (xdc_Char)0x4c,  /* [7937] */
    (xdc_Char)0x4d,  /* [7938] */
    (xdc_Char)0x5f,  /* [7939] */
    (xdc_Char)0x62,  /* [7940] */
    (xdc_Char)0x65,  /* [7941] */
    (xdc_Char)0x67,  /* [7942] */
    (xdc_Char)0x69,  /* [7943] */
    (xdc_Char)0x6e,  /* [7944] */
    (xdc_Char)0x3a,  /* [7945] */
    (xdc_Char)0x20,  /* [7946] */
    (xdc_Char)0x68,  /* [7947] */
    (xdc_Char)0x77,  /* [7948] */
    (xdc_Char)0x69,  /* [7949] */
    (xdc_Char)0x3a,  /* [7950] */
    (xdc_Char)0x20,  /* [7951] */
    (xdc_Char)0x30,  /* [7952] */
    (xdc_Char)0x78,  /* [7953] */
    (xdc_Char)0x25,  /* [7954] */
    (xdc_Char)0x78,  /* [7955] */
    (xdc_Char)0x2c,  /* [7956] */
    (xdc_Char)0x20,  /* [7957] */
    (xdc_Char)0x66,  /* [7958] */
    (xdc_Char)0x75,  /* [7959] */
    (xdc_Char)0x6e,  /* [7960] */
    (xdc_Char)0x63,  /* [7961] */
    (xdc_Char)0x3a,  /* [7962] */
    (xdc_Char)0x20,  /* [7963] */
    (xdc_Char)0x30,  /* [7964] */
    (xdc_Char)0x78,  /* [7965] */
    (xdc_Char)0x25,  /* [7966] */
    (xdc_Char)0x78,  /* [7967] */
    (xdc_Char)0x2c,  /* [7968] */
    (xdc_Char)0x20,  /* [7969] */
    (xdc_Char)0x70,  /* [7970] */
    (xdc_Char)0x72,  /* [7971] */
    (xdc_Char)0x65,  /* [7972] */
    (xdc_Char)0x54,  /* [7973] */
    (xdc_Char)0x68,  /* [7974] */
    (xdc_Char)0x72,  /* [7975] */
    (xdc_Char)0x65,  /* [7976] */
    (xdc_Char)0x61,  /* [7977] */
    (xdc_Char)0x64,  /* [7978] */
    (xdc_Char)0x3a,  /* [7979] */
    (xdc_Char)0x20,  /* [7980] */
    (xdc_Char)0x25,  /* [7981] */
    (xdc_Char)0x64,  /* [7982] */
    (xdc_Char)0x2c,  /* [7983] */
    (xdc_Char)0x20,  /* [7984] */
    (xdc_Char)0x69,  /* [7985] */
    (xdc_Char)0x6e,  /* [7986] */
    (xdc_Char)0x74,  /* [7987] */
    (xdc_Char)0x4e,  /* [7988] */
    (xdc_Char)0x75,  /* [7989] */
    (xdc_Char)0x6d,  /* [7990] */
    (xdc_Char)0x3a,  /* [7991] */
    (xdc_Char)0x20,  /* [7992] */
    (xdc_Char)0x25,  /* [7993] */
    (xdc_Char)0x64,  /* [7994] */
    (xdc_Char)0x2c,  /* [7995] */
    (xdc_Char)0x20,  /* [7996] */
    (xdc_Char)0x69,  /* [7997] */
    (xdc_Char)0x72,  /* [7998] */
    (xdc_Char)0x70,  /* [7999] */
    (xdc_Char)0x3a,  /* [8000] */
    (xdc_Char)0x20,  /* [8001] */
    (xdc_Char)0x30,  /* [8002] */
    (xdc_Char)0x78,  /* [8003] */
    (xdc_Char)0x25,  /* [8004] */
    (xdc_Char)0x78,  /* [8005] */
    (xdc_Char)0x0,  /* [8006] */
    (xdc_Char)0x4c,  /* [8007] */
    (xdc_Char)0x44,  /* [8008] */
    (xdc_Char)0x5f,  /* [8009] */
    (xdc_Char)0x65,  /* [8010] */
    (xdc_Char)0x6e,  /* [8011] */
    (xdc_Char)0x64,  /* [8012] */
    (xdc_Char)0x3a,  /* [8013] */
    (xdc_Char)0x20,  /* [8014] */
    (xdc_Char)0x68,  /* [8015] */
    (xdc_Char)0x77,  /* [8016] */
    (xdc_Char)0x69,  /* [8017] */
    (xdc_Char)0x3a,  /* [8018] */
    (xdc_Char)0x20,  /* [8019] */
    (xdc_Char)0x30,  /* [8020] */
    (xdc_Char)0x78,  /* [8021] */
    (xdc_Char)0x25,  /* [8022] */
    (xdc_Char)0x78,  /* [8023] */
    (xdc_Char)0x0,  /* [8024] */
    (xdc_Char)0x4c,  /* [8025] */
    (xdc_Char)0x53,  /* [8026] */
    (xdc_Char)0x5f,  /* [8027] */
    (xdc_Char)0x63,  /* [8028] */
    (xdc_Char)0x70,  /* [8029] */
    (xdc_Char)0x75,  /* [8030] */
    (xdc_Char)0x4c,  /* [8031] */
    (xdc_Char)0x6f,  /* [8032] */
    (xdc_Char)0x61,  /* [8033] */
    (xdc_Char)0x64,  /* [8034] */
    (xdc_Char)0x3a,  /* [8035] */
    (xdc_Char)0x20,  /* [8036] */
    (xdc_Char)0x25,  /* [8037] */
    (xdc_Char)0x64,  /* [8038] */
    (xdc_Char)0x25,  /* [8039] */
    (xdc_Char)0x25,  /* [8040] */
    (xdc_Char)0x0,  /* [8041] */
    (xdc_Char)0x4c,  /* [8042] */
    (xdc_Char)0x53,  /* [8043] */
    (xdc_Char)0x5f,  /* [8044] */
    (xdc_Char)0x68,  /* [8045] */
    (xdc_Char)0x77,  /* [8046] */
    (xdc_Char)0x69,  /* [8047] */
    (xdc_Char)0x4c,  /* [8048] */
    (xdc_Char)0x6f,  /* [8049] */
    (xdc_Char)0x61,  /* [8050] */
    (xdc_Char)0x64,  /* [8051] */
    (xdc_Char)0x3a,  /* [8052] */
    (xdc_Char)0x20,  /* [8053] */
    (xdc_Char)0x25,  /* [8054] */
    (xdc_Char)0x64,  /* [8055] */
    (xdc_Char)0x2c,  /* [8056] */
    (xdc_Char)0x25,  /* [8057] */
    (xdc_Char)0x64,  /* [8058] */
    (xdc_Char)0x0,  /* [8059] */
    (xdc_Char)0x4c,  /* [8060] */
    (xdc_Char)0x53,  /* [8061] */
    (xdc_Char)0x5f,  /* [8062] */
    (xdc_Char)0x73,  /* [8063] */
    (xdc_Char)0x77,  /* [8064] */
    (xdc_Char)0x69,  /* [8065] */
    (xdc_Char)0x4c,  /* [8066] */
    (xdc_Char)0x6f,  /* [8067] */
    (xdc_Char)0x61,  /* [8068] */
    (xdc_Char)0x64,  /* [8069] */
    (xdc_Char)0x3a,  /* [8070] */
    (xdc_Char)0x20,  /* [8071] */
    (xdc_Char)0x25,  /* [8072] */
    (xdc_Char)0x64,  /* [8073] */
    (xdc_Char)0x2c,  /* [8074] */
    (xdc_Char)0x25,  /* [8075] */
    (xdc_Char)0x64,  /* [8076] */
    (xdc_Char)0x0,  /* [8077] */
    (xdc_Char)0x4c,  /* [8078] */
    (xdc_Char)0x53,  /* [8079] */
    (xdc_Char)0x5f,  /* [8080] */
    (xdc_Char)0x74,  /* [8081] */
    (xdc_Char)0x61,  /* [8082] */
    (xdc_Char)0x73,  /* [8083] */
    (xdc_Char)0x6b,  /* [8084] */
    (xdc_Char)0x4c,  /* [8085] */
    (xdc_Char)0x6f,  /* [8086] */
    (xdc_Char)0x61,  /* [8087] */
    (xdc_Char)0x64,  /* [8088] */
    (xdc_Char)0x3a,  /* [8089] */
    (xdc_Char)0x20,  /* [8090] */
    (xdc_Char)0x30,  /* [8091] */
    (xdc_Char)0x78,  /* [8092] */
    (xdc_Char)0x25,  /* [8093] */
    (xdc_Char)0x78,  /* [8094] */
    (xdc_Char)0x2c,  /* [8095] */
    (xdc_Char)0x25,  /* [8096] */
    (xdc_Char)0x64,  /* [8097] */
    (xdc_Char)0x2c,  /* [8098] */
    (xdc_Char)0x25,  /* [8099] */
    (xdc_Char)0x64,  /* [8100] */
    (xdc_Char)0x2c,  /* [8101] */
    (xdc_Char)0x30,  /* [8102] */
    (xdc_Char)0x78,  /* [8103] */
    (xdc_Char)0x25,  /* [8104] */
    (xdc_Char)0x78,  /* [8105] */
    (xdc_Char)0x0,  /* [8106] */
    (xdc_Char)0x78,  /* [8107] */
    (xdc_Char)0x64,  /* [8108] */
    (xdc_Char)0x63,  /* [8109] */
    (xdc_Char)0x2e,  /* [8110] */
    (xdc_Char)0x0,  /* [8111] */
    (xdc_Char)0x72,  /* [8112] */
    (xdc_Char)0x75,  /* [8113] */
    (xdc_Char)0x6e,  /* [8114] */
    (xdc_Char)0x74,  /* [8115] */
    (xdc_Char)0x69,  /* [8116] */
    (xdc_Char)0x6d,  /* [8117] */
    (xdc_Char)0x65,  /* [8118] */
    (xdc_Char)0x2e,  /* [8119] */
    (xdc_Char)0x0,  /* [8120] */
    (xdc_Char)0x41,  /* [8121] */
    (xdc_Char)0x73,  /* [8122] */
    (xdc_Char)0x73,  /* [8123] */
    (xdc_Char)0x65,  /* [8124] */
    (xdc_Char)0x72,  /* [8125] */
    (xdc_Char)0x74,  /* [8126] */
    (xdc_Char)0x0,  /* [8127] */
    (xdc_Char)0x43,  /* [8128] */
    (xdc_Char)0x6f,  /* [8129] */
    (xdc_Char)0x72,  /* [8130] */
    (xdc_Char)0x65,  /* [8131] */
    (xdc_Char)0x0,  /* [8132] */
    (xdc_Char)0x44,  /* [8133] */
    (xdc_Char)0x65,  /* [8134] */
    (xdc_Char)0x66,  /* [8135] */
    (xdc_Char)0x61,  /* [8136] */
    (xdc_Char)0x75,  /* [8137] */
    (xdc_Char)0x6c,  /* [8138] */
    (xdc_Char)0x74,  /* [8139] */
    (xdc_Char)0x73,  /* [8140] */
    (xdc_Char)0x0,  /* [8141] */
    (xdc_Char)0x44,  /* [8142] */
    (xdc_Char)0x69,  /* [8143] */
    (xdc_Char)0x61,  /* [8144] */
    (xdc_Char)0x67,  /* [8145] */
    (xdc_Char)0x73,  /* [8146] */
    (xdc_Char)0x0,  /* [8147] */
    (xdc_Char)0x45,  /* [8148] */
    (xdc_Char)0x72,  /* [8149] */
    (xdc_Char)0x72,  /* [8150] */
    (xdc_Char)0x6f,  /* [8151] */
    (xdc_Char)0x72,  /* [8152] */
    (xdc_Char)0x0,  /* [8153] */
    (xdc_Char)0x47,  /* [8154] */
    (xdc_Char)0x61,  /* [8155] */
    (xdc_Char)0x74,  /* [8156] */
    (xdc_Char)0x65,  /* [8157] */
    (xdc_Char)0x0,  /* [8158] */
    (xdc_Char)0x4c,  /* [8159] */
    (xdc_Char)0x6f,  /* [8160] */
    (xdc_Char)0x67,  /* [8161] */
    (xdc_Char)0x0,  /* [8162] */
    (xdc_Char)0x4c,  /* [8163] */
    (xdc_Char)0x6f,  /* [8164] */
    (xdc_Char)0x67,  /* [8165] */
    (xdc_Char)0x67,  /* [8166] */
    (xdc_Char)0x65,  /* [8167] */
    (xdc_Char)0x72,  /* [8168] */
    (xdc_Char)0x42,  /* [8169] */
    (xdc_Char)0x75,  /* [8170] */
    (xdc_Char)0x66,  /* [8171] */
    (xdc_Char)0x0,  /* [8172] */
    (xdc_Char)0x4d,  /* [8173] */
    (xdc_Char)0x61,  /* [8174] */
    (xdc_Char)0x69,  /* [8175] */
    (xdc_Char)0x6e,  /* [8176] */
    (xdc_Char)0x0,  /* [8177] */
    (xdc_Char)0x4d,  /* [8178] */
    (xdc_Char)0x65,  /* [8179] */
    (xdc_Char)0x6d,  /* [8180] */
    (xdc_Char)0x6f,  /* [8181] */
    (xdc_Char)0x72,  /* [8182] */
    (xdc_Char)0x79,  /* [8183] */
    (xdc_Char)0x0,  /* [8184] */
    (xdc_Char)0x52,  /* [8185] */
    (xdc_Char)0x65,  /* [8186] */
    (xdc_Char)0x67,  /* [8187] */
    (xdc_Char)0x69,  /* [8188] */
    (xdc_Char)0x73,  /* [8189] */
    (xdc_Char)0x74,  /* [8190] */
    (xdc_Char)0x72,  /* [8191] */
    (xdc_Char)0x79,  /* [8192] */
    (xdc_Char)0x0,  /* [8193] */
    (xdc_Char)0x53,  /* [8194] */
    (xdc_Char)0x74,  /* [8195] */
    (xdc_Char)0x61,  /* [8196] */
    (xdc_Char)0x72,  /* [8197] */
    (xdc_Char)0x74,  /* [8198] */
    (xdc_Char)0x75,  /* [8199] */
    (xdc_Char)0x70,  /* [8200] */
    (xdc_Char)0x0,  /* [8201] */
    (xdc_Char)0x53,  /* [8202] */
    (xdc_Char)0x79,  /* [8203] */
    (xdc_Char)0x73,  /* [8204] */
    (xdc_Char)0x74,  /* [8205] */
    (xdc_Char)0x65,  /* [8206] */
    (xdc_Char)0x6d,  /* [8207] */
    (xdc_Char)0x0,  /* [8208] */
    (xdc_Char)0x53,  /* [8209] */
    (xdc_Char)0x79,  /* [8210] */
    (xdc_Char)0x73,  /* [8211] */
    (xdc_Char)0x4d,  /* [8212] */
    (xdc_Char)0x69,  /* [8213] */
    (xdc_Char)0x6e,  /* [8214] */
    (xdc_Char)0x0,  /* [8215] */
    (xdc_Char)0x54,  /* [8216] */
    (xdc_Char)0x65,  /* [8217] */
    (xdc_Char)0x78,  /* [8218] */
    (xdc_Char)0x74,  /* [8219] */
    (xdc_Char)0x0,  /* [8220] */
    (xdc_Char)0x54,  /* [8221] */
    (xdc_Char)0x69,  /* [8222] */
    (xdc_Char)0x6d,  /* [8223] */
    (xdc_Char)0x65,  /* [8224] */
    (xdc_Char)0x73,  /* [8225] */
    (xdc_Char)0x74,  /* [8226] */
    (xdc_Char)0x61,  /* [8227] */
    (xdc_Char)0x6d,  /* [8228] */
    (xdc_Char)0x70,  /* [8229] */
    (xdc_Char)0x0,  /* [8230] */
    (xdc_Char)0x54,  /* [8231] */
    (xdc_Char)0x69,  /* [8232] */
    (xdc_Char)0x6d,  /* [8233] */
    (xdc_Char)0x65,  /* [8234] */
    (xdc_Char)0x73,  /* [8235] */
    (xdc_Char)0x74,  /* [8236] */
    (xdc_Char)0x61,  /* [8237] */
    (xdc_Char)0x6d,  /* [8238] */
    (xdc_Char)0x70,  /* [8239] */
    (xdc_Char)0x4e,  /* [8240] */
    (xdc_Char)0x75,  /* [8241] */
    (xdc_Char)0x6c,  /* [8242] */
    (xdc_Char)0x6c,  /* [8243] */
    (xdc_Char)0x0,  /* [8244] */
    (xdc_Char)0x54,  /* [8245] */
    (xdc_Char)0x79,  /* [8246] */
    (xdc_Char)0x70,  /* [8247] */
    (xdc_Char)0x65,  /* [8248] */
    (xdc_Char)0x73,  /* [8249] */
    (xdc_Char)0x0,  /* [8250] */
    (xdc_Char)0x74,  /* [8251] */
    (xdc_Char)0x69,  /* [8252] */
    (xdc_Char)0x2e,  /* [8253] */
    (xdc_Char)0x0,  /* [8254] */
    (xdc_Char)0x63,  /* [8255] */
    (xdc_Char)0x61,  /* [8256] */
    (xdc_Char)0x74,  /* [8257] */
    (xdc_Char)0x61,  /* [8258] */
    (xdc_Char)0x6c,  /* [8259] */
    (xdc_Char)0x6f,  /* [8260] */
    (xdc_Char)0x67,  /* [8261] */
    (xdc_Char)0x2e,  /* [8262] */
    (xdc_Char)0x0,  /* [8263] */
    (xdc_Char)0x61,  /* [8264] */
    (xdc_Char)0x72,  /* [8265] */
    (xdc_Char)0x6d,  /* [8266] */
    (xdc_Char)0x2e,  /* [8267] */
    (xdc_Char)0x0,  /* [8268] */
    (xdc_Char)0x63,  /* [8269] */
    (xdc_Char)0x6f,  /* [8270] */
    (xdc_Char)0x72,  /* [8271] */
    (xdc_Char)0x74,  /* [8272] */
    (xdc_Char)0x65,  /* [8273] */
    (xdc_Char)0x78,  /* [8274] */
    (xdc_Char)0x6d,  /* [8275] */
    (xdc_Char)0x34,  /* [8276] */
    (xdc_Char)0x2e,  /* [8277] */
    (xdc_Char)0x0,  /* [8278] */
    (xdc_Char)0x74,  /* [8279] */
    (xdc_Char)0x69,  /* [8280] */
    (xdc_Char)0x76,  /* [8281] */
    (xdc_Char)0x61,  /* [8282] */
    (xdc_Char)0x2e,  /* [8283] */
    (xdc_Char)0x0,  /* [8284] */
    (xdc_Char)0x63,  /* [8285] */
    (xdc_Char)0x65,  /* [8286] */
    (xdc_Char)0x2e,  /* [8287] */
    (xdc_Char)0x0,  /* [8288] */
    (xdc_Char)0x42,  /* [8289] */
    (xdc_Char)0x6f,  /* [8290] */
    (xdc_Char)0x6f,  /* [8291] */
    (xdc_Char)0x74,  /* [8292] */
    (xdc_Char)0x0,  /* [8293] */
    (xdc_Char)0x75,  /* [8294] */
    (xdc_Char)0x69,  /* [8295] */
    (xdc_Char)0x61,  /* [8296] */
    (xdc_Char)0x2e,  /* [8297] */
    (xdc_Char)0x0,  /* [8298] */
    (xdc_Char)0x65,  /* [8299] */
    (xdc_Char)0x76,  /* [8300] */
    (xdc_Char)0x65,  /* [8301] */
    (xdc_Char)0x6e,  /* [8302] */
    (xdc_Char)0x74,  /* [8303] */
    (xdc_Char)0x73,  /* [8304] */
    (xdc_Char)0x2e,  /* [8305] */
    (xdc_Char)0x0,  /* [8306] */
    (xdc_Char)0x44,  /* [8307] */
    (xdc_Char)0x76,  /* [8308] */
    (xdc_Char)0x74,  /* [8309] */
    (xdc_Char)0x54,  /* [8310] */
    (xdc_Char)0x79,  /* [8311] */
    (xdc_Char)0x70,  /* [8312] */
    (xdc_Char)0x65,  /* [8313] */
    (xdc_Char)0x73,  /* [8314] */
    (xdc_Char)0x0,  /* [8315] */
    (xdc_Char)0x55,  /* [8316] */
    (xdc_Char)0x49,  /* [8317] */
    (xdc_Char)0x41,  /* [8318] */
    (xdc_Char)0x42,  /* [8319] */
    (xdc_Char)0x65,  /* [8320] */
    (xdc_Char)0x6e,  /* [8321] */
    (xdc_Char)0x63,  /* [8322] */
    (xdc_Char)0x68,  /* [8323] */
    (xdc_Char)0x6d,  /* [8324] */
    (xdc_Char)0x61,  /* [8325] */
    (xdc_Char)0x72,  /* [8326] */
    (xdc_Char)0x6b,  /* [8327] */
    (xdc_Char)0x0,  /* [8328] */
    (xdc_Char)0x55,  /* [8329] */
    (xdc_Char)0x49,  /* [8330] */
    (xdc_Char)0x41,  /* [8331] */
    (xdc_Char)0x45,  /* [8332] */
    (xdc_Char)0x72,  /* [8333] */
    (xdc_Char)0x72,  /* [8334] */
    (xdc_Char)0x0,  /* [8335] */
    (xdc_Char)0x55,  /* [8336] */
    (xdc_Char)0x49,  /* [8337] */
    (xdc_Char)0x41,  /* [8338] */
    (xdc_Char)0x45,  /* [8339] */
    (xdc_Char)0x76,  /* [8340] */
    (xdc_Char)0x74,  /* [8341] */
    (xdc_Char)0x0,  /* [8342] */
    (xdc_Char)0x73,  /* [8343] */
    (xdc_Char)0x79,  /* [8344] */
    (xdc_Char)0x73,  /* [8345] */
    (xdc_Char)0x62,  /* [8346] */
    (xdc_Char)0x69,  /* [8347] */
    (xdc_Char)0x6f,  /* [8348] */
    (xdc_Char)0x73,  /* [8349] */
    (xdc_Char)0x2e,  /* [8350] */
    (xdc_Char)0x0,  /* [8351] */
    (xdc_Char)0x42,  /* [8352] */
    (xdc_Char)0x49,  /* [8353] */
    (xdc_Char)0x4f,  /* [8354] */
    (xdc_Char)0x53,  /* [8355] */
    (xdc_Char)0x0,  /* [8356] */
    (xdc_Char)0x6b,  /* [8357] */
    (xdc_Char)0x6e,  /* [8358] */
    (xdc_Char)0x6c,  /* [8359] */
    (xdc_Char)0x2e,  /* [8360] */
    (xdc_Char)0x0,  /* [8361] */
    (xdc_Char)0x43,  /* [8362] */
    (xdc_Char)0x6c,  /* [8363] */
    (xdc_Char)0x6f,  /* [8364] */
    (xdc_Char)0x63,  /* [8365] */
    (xdc_Char)0x6b,  /* [8366] */
    (xdc_Char)0x0,  /* [8367] */
    (xdc_Char)0x49,  /* [8368] */
    (xdc_Char)0x64,  /* [8369] */
    (xdc_Char)0x6c,  /* [8370] */
    (xdc_Char)0x65,  /* [8371] */
    (xdc_Char)0x0,  /* [8372] */
    (xdc_Char)0x49,  /* [8373] */
    (xdc_Char)0x6e,  /* [8374] */
    (xdc_Char)0x74,  /* [8375] */
    (xdc_Char)0x72,  /* [8376] */
    (xdc_Char)0x69,  /* [8377] */
    (xdc_Char)0x6e,  /* [8378] */
    (xdc_Char)0x73,  /* [8379] */
    (xdc_Char)0x69,  /* [8380] */
    (xdc_Char)0x63,  /* [8381] */
    (xdc_Char)0x73,  /* [8382] */
    (xdc_Char)0x0,  /* [8383] */
    (xdc_Char)0x45,  /* [8384] */
    (xdc_Char)0x76,  /* [8385] */
    (xdc_Char)0x65,  /* [8386] */
    (xdc_Char)0x6e,  /* [8387] */
    (xdc_Char)0x74,  /* [8388] */
    (xdc_Char)0x0,  /* [8389] */
    (xdc_Char)0x4d,  /* [8390] */
    (xdc_Char)0x61,  /* [8391] */
    (xdc_Char)0x69,  /* [8392] */
    (xdc_Char)0x6c,  /* [8393] */
    (xdc_Char)0x62,  /* [8394] */
    (xdc_Char)0x6f,  /* [8395] */
    (xdc_Char)0x78,  /* [8396] */
    (xdc_Char)0x0,  /* [8397] */
    (xdc_Char)0x51,  /* [8398] */
    (xdc_Char)0x75,  /* [8399] */
    (xdc_Char)0x65,  /* [8400] */
    (xdc_Char)0x75,  /* [8401] */
    (xdc_Char)0x65,  /* [8402] */
    (xdc_Char)0x0,  /* [8403] */
    (xdc_Char)0x53,  /* [8404] */
    (xdc_Char)0x65,  /* [8405] */
    (xdc_Char)0x6d,  /* [8406] */
    (xdc_Char)0x61,  /* [8407] */
    (xdc_Char)0x70,  /* [8408] */
    (xdc_Char)0x68,  /* [8409] */
    (xdc_Char)0x6f,  /* [8410] */
    (xdc_Char)0x72,  /* [8411] */
    (xdc_Char)0x65,  /* [8412] */
    (xdc_Char)0x0,  /* [8413] */
    (xdc_Char)0x53,  /* [8414] */
    (xdc_Char)0x77,  /* [8415] */
    (xdc_Char)0x69,  /* [8416] */
    (xdc_Char)0x0,  /* [8417] */
    (xdc_Char)0x54,  /* [8418] */
    (xdc_Char)0x61,  /* [8419] */
    (xdc_Char)0x73,  /* [8420] */
    (xdc_Char)0x6b,  /* [8421] */
    (xdc_Char)0x0,  /* [8422] */
    (xdc_Char)0x67,  /* [8423] */
    (xdc_Char)0x61,  /* [8424] */
    (xdc_Char)0x74,  /* [8425] */
    (xdc_Char)0x65,  /* [8426] */
    (xdc_Char)0x73,  /* [8427] */
    (xdc_Char)0x2e,  /* [8428] */
    (xdc_Char)0x0,  /* [8429] */
    (xdc_Char)0x47,  /* [8430] */
    (xdc_Char)0x61,  /* [8431] */
    (xdc_Char)0x74,  /* [8432] */
    (xdc_Char)0x65,  /* [8433] */
    (xdc_Char)0x48,  /* [8434] */
    (xdc_Char)0x77,  /* [8435] */
    (xdc_Char)0x69,  /* [8436] */
    (xdc_Char)0x0,  /* [8437] */
    (xdc_Char)0x47,  /* [8438] */
    (xdc_Char)0x61,  /* [8439] */
    (xdc_Char)0x74,  /* [8440] */
    (xdc_Char)0x65,  /* [8441] */
    (xdc_Char)0x4d,  /* [8442] */
    (xdc_Char)0x75,  /* [8443] */
    (xdc_Char)0x74,  /* [8444] */
    (xdc_Char)0x65,  /* [8445] */
    (xdc_Char)0x78,  /* [8446] */
    (xdc_Char)0x50,  /* [8447] */
    (xdc_Char)0x72,  /* [8448] */
    (xdc_Char)0x69,  /* [8449] */
    (xdc_Char)0x0,  /* [8450] */
    (xdc_Char)0x47,  /* [8451] */
    (xdc_Char)0x61,  /* [8452] */
    (xdc_Char)0x74,  /* [8453] */
    (xdc_Char)0x65,  /* [8454] */
    (xdc_Char)0x4d,  /* [8455] */
    (xdc_Char)0x75,  /* [8456] */
    (xdc_Char)0x74,  /* [8457] */
    (xdc_Char)0x65,  /* [8458] */
    (xdc_Char)0x78,  /* [8459] */
    (xdc_Char)0x0,  /* [8460] */
    (xdc_Char)0x68,  /* [8461] */
    (xdc_Char)0x61,  /* [8462] */
    (xdc_Char)0x6c,  /* [8463] */
    (xdc_Char)0x2e,  /* [8464] */
    (xdc_Char)0x0,  /* [8465] */
    (xdc_Char)0x48,  /* [8466] */
    (xdc_Char)0x77,  /* [8467] */
    (xdc_Char)0x69,  /* [8468] */
    (xdc_Char)0x0,  /* [8469] */
    (xdc_Char)0x45,  /* [8470] */
    (xdc_Char)0x76,  /* [8471] */
    (xdc_Char)0x65,  /* [8472] */
    (xdc_Char)0x6e,  /* [8473] */
    (xdc_Char)0x74,  /* [8474] */
    (xdc_Char)0x48,  /* [8475] */
    (xdc_Char)0x64,  /* [8476] */
    (xdc_Char)0x72,  /* [8477] */
    (xdc_Char)0x0,  /* [8478] */
    (xdc_Char)0x51,  /* [8479] */
    (xdc_Char)0x75,  /* [8480] */
    (xdc_Char)0x65,  /* [8481] */
    (xdc_Char)0x75,  /* [8482] */
    (xdc_Char)0x65,  /* [8483] */
    (xdc_Char)0x44,  /* [8484] */
    (xdc_Char)0x65,  /* [8485] */
    (xdc_Char)0x73,  /* [8486] */
    (xdc_Char)0x63,  /* [8487] */
    (xdc_Char)0x72,  /* [8488] */
    (xdc_Char)0x69,  /* [8489] */
    (xdc_Char)0x70,  /* [8490] */
    (xdc_Char)0x74,  /* [8491] */
    (xdc_Char)0x6f,  /* [8492] */
    (xdc_Char)0x72,  /* [8493] */
    (xdc_Char)0x0,  /* [8494] */
    (xdc_Char)0x55,  /* [8495] */
    (xdc_Char)0x49,  /* [8496] */
    (xdc_Char)0x41,  /* [8497] */
    (xdc_Char)0x4d,  /* [8498] */
    (xdc_Char)0x65,  /* [8499] */
    (xdc_Char)0x74,  /* [8500] */
    (xdc_Char)0x61,  /* [8501] */
    (xdc_Char)0x44,  /* [8502] */
    (xdc_Char)0x61,  /* [8503] */
    (xdc_Char)0x74,  /* [8504] */
    (xdc_Char)0x61,  /* [8505] */
    (xdc_Char)0x0,  /* [8506] */
    (xdc_Char)0x6c,  /* [8507] */
    (xdc_Char)0x6f,  /* [8508] */
    (xdc_Char)0x67,  /* [8509] */
    (xdc_Char)0x67,  /* [8510] */
    (xdc_Char)0x65,  /* [8511] */
    (xdc_Char)0x72,  /* [8512] */
    (xdc_Char)0x73,  /* [8513] */
    (xdc_Char)0x2e,  /* [8514] */
    (xdc_Char)0x0,  /* [8515] */
    (xdc_Char)0x4c,  /* [8516] */
    (xdc_Char)0x6f,  /* [8517] */
    (xdc_Char)0x67,  /* [8518] */
    (xdc_Char)0x67,  /* [8519] */
    (xdc_Char)0x65,  /* [8520] */
    (xdc_Char)0x72,  /* [8521] */
    (xdc_Char)0x53,  /* [8522] */
    (xdc_Char)0x74,  /* [8523] */
    (xdc_Char)0x6f,  /* [8524] */
    (xdc_Char)0x70,  /* [8525] */
    (xdc_Char)0x4d,  /* [8526] */
    (xdc_Char)0x6f,  /* [8527] */
    (xdc_Char)0x64,  /* [8528] */
    (xdc_Char)0x65,  /* [8529] */
    (xdc_Char)0x0,  /* [8530] */
    (xdc_Char)0x66,  /* [8531] */
    (xdc_Char)0x61,  /* [8532] */
    (xdc_Char)0x6d,  /* [8533] */
    (xdc_Char)0x69,  /* [8534] */
    (xdc_Char)0x6c,  /* [8535] */
    (xdc_Char)0x79,  /* [8536] */
    (xdc_Char)0x2e,  /* [8537] */
    (xdc_Char)0x0,  /* [8538] */
    (xdc_Char)0x6d,  /* [8539] */
    (xdc_Char)0x33,  /* [8540] */
    (xdc_Char)0x2e,  /* [8541] */
    (xdc_Char)0x0,  /* [8542] */
    (xdc_Char)0x49,  /* [8543] */
    (xdc_Char)0x6e,  /* [8544] */
    (xdc_Char)0x74,  /* [8545] */
    (xdc_Char)0x72,  /* [8546] */
    (xdc_Char)0x69,  /* [8547] */
    (xdc_Char)0x6e,  /* [8548] */
    (xdc_Char)0x73,  /* [8549] */
    (xdc_Char)0x69,  /* [8550] */
    (xdc_Char)0x63,  /* [8551] */
    (xdc_Char)0x73,  /* [8552] */
    (xdc_Char)0x53,  /* [8553] */
    (xdc_Char)0x75,  /* [8554] */
    (xdc_Char)0x70,  /* [8555] */
    (xdc_Char)0x70,  /* [8556] */
    (xdc_Char)0x6f,  /* [8557] */
    (xdc_Char)0x72,  /* [8558] */
    (xdc_Char)0x74,  /* [8559] */
    (xdc_Char)0x0,  /* [8560] */
    (xdc_Char)0x54,  /* [8561] */
    (xdc_Char)0x61,  /* [8562] */
    (xdc_Char)0x73,  /* [8563] */
    (xdc_Char)0x6b,  /* [8564] */
    (xdc_Char)0x53,  /* [8565] */
    (xdc_Char)0x75,  /* [8566] */
    (xdc_Char)0x70,  /* [8567] */
    (xdc_Char)0x70,  /* [8568] */
    (xdc_Char)0x6f,  /* [8569] */
    (xdc_Char)0x72,  /* [8570] */
    (xdc_Char)0x74,  /* [8571] */
    (xdc_Char)0x0,  /* [8572] */
    (xdc_Char)0x68,  /* [8573] */
    (xdc_Char)0x65,  /* [8574] */
    (xdc_Char)0x61,  /* [8575] */
    (xdc_Char)0x70,  /* [8576] */
    (xdc_Char)0x73,  /* [8577] */
    (xdc_Char)0x2e,  /* [8578] */
    (xdc_Char)0x0,  /* [8579] */
    (xdc_Char)0x48,  /* [8580] */
    (xdc_Char)0x65,  /* [8581] */
    (xdc_Char)0x61,  /* [8582] */
    (xdc_Char)0x70,  /* [8583] */
    (xdc_Char)0x4d,  /* [8584] */
    (xdc_Char)0x65,  /* [8585] */
    (xdc_Char)0x6d,  /* [8586] */
    (xdc_Char)0x0,  /* [8587] */
    (xdc_Char)0x75,  /* [8588] */
    (xdc_Char)0x74,  /* [8589] */
    (xdc_Char)0x69,  /* [8590] */
    (xdc_Char)0x6c,  /* [8591] */
    (xdc_Char)0x73,  /* [8592] */
    (xdc_Char)0x2e,  /* [8593] */
    (xdc_Char)0x0,  /* [8594] */
    (xdc_Char)0x4c,  /* [8595] */
    (xdc_Char)0x6f,  /* [8596] */
    (xdc_Char)0x61,  /* [8597] */
    (xdc_Char)0x64,  /* [8598] */
    (xdc_Char)0x0,  /* [8599] */
    (xdc_Char)0x6c,  /* [8600] */
    (xdc_Char)0x6d,  /* [8601] */
    (xdc_Char)0x34,  /* [8602] */
    (xdc_Char)0x2e,  /* [8603] */
    (xdc_Char)0x0,  /* [8604] */
    (xdc_Char)0x54,  /* [8605] */
    (xdc_Char)0x69,  /* [8606] */
    (xdc_Char)0x6d,  /* [8607] */
    (xdc_Char)0x65,  /* [8608] */
    (xdc_Char)0x73,  /* [8609] */
    (xdc_Char)0x74,  /* [8610] */
    (xdc_Char)0x61,  /* [8611] */
    (xdc_Char)0x6d,  /* [8612] */
    (xdc_Char)0x70,  /* [8613] */
    (xdc_Char)0x50,  /* [8614] */
    (xdc_Char)0x72,  /* [8615] */
    (xdc_Char)0x6f,  /* [8616] */
    (xdc_Char)0x76,  /* [8617] */
    (xdc_Char)0x69,  /* [8618] */
    (xdc_Char)0x64,  /* [8619] */
    (xdc_Char)0x65,  /* [8620] */
    (xdc_Char)0x72,  /* [8621] */
    (xdc_Char)0x0,  /* [8622] */
    (xdc_Char)0x54,  /* [8623] */
    (xdc_Char)0x69,  /* [8624] */
    (xdc_Char)0x6d,  /* [8625] */
    (xdc_Char)0x65,  /* [8626] */
    (xdc_Char)0x72,  /* [8627] */
    (xdc_Char)0x0,  /* [8628] */
    (xdc_Char)0x74,  /* [8629] */
    (xdc_Char)0x69,  /* [8630] */
    (xdc_Char)0x2e,  /* [8631] */
    (xdc_Char)0x73,  /* [8632] */
    (xdc_Char)0x79,  /* [8633] */
    (xdc_Char)0x73,  /* [8634] */
    (xdc_Char)0x62,  /* [8635] */
    (xdc_Char)0x69,  /* [8636] */
    (xdc_Char)0x6f,  /* [8637] */
    (xdc_Char)0x73,  /* [8638] */
    (xdc_Char)0x2e,  /* [8639] */
    (xdc_Char)0x6b,  /* [8640] */
    (xdc_Char)0x6e,  /* [8641] */
    (xdc_Char)0x6c,  /* [8642] */
    (xdc_Char)0x2e,  /* [8643] */
    (xdc_Char)0x54,  /* [8644] */
    (xdc_Char)0x61,  /* [8645] */
    (xdc_Char)0x73,  /* [8646] */
    (xdc_Char)0x6b,  /* [8647] */
    (xdc_Char)0x2e,  /* [8648] */
    (xdc_Char)0x49,  /* [8649] */
    (xdc_Char)0x64,  /* [8650] */
    (xdc_Char)0x6c,  /* [8651] */
    (xdc_Char)0x65,  /* [8652] */
    (xdc_Char)0x54,  /* [8653] */
    (xdc_Char)0x61,  /* [8654] */
    (xdc_Char)0x73,  /* [8655] */
    (xdc_Char)0x6b,  /* [8656] */
    (xdc_Char)0x0,  /* [8657] */
    (xdc_Char)0x4c,  /* [8658] */
    (xdc_Char)0x6f,  /* [8659] */
    (xdc_Char)0x61,  /* [8660] */
    (xdc_Char)0x64,  /* [8661] */
    (xdc_Char)0x20,  /* [8662] */
    (xdc_Char)0x4c,  /* [8663] */
    (xdc_Char)0x6f,  /* [8664] */
    (xdc_Char)0x67,  /* [8665] */
    (xdc_Char)0x67,  /* [8666] */
    (xdc_Char)0x65,  /* [8667] */
    (xdc_Char)0x72,  /* [8668] */
    (xdc_Char)0x0,  /* [8669] */
    (xdc_Char)0x4d,  /* [8670] */
    (xdc_Char)0x61,  /* [8671] */
    (xdc_Char)0x69,  /* [8672] */
    (xdc_Char)0x6e,  /* [8673] */
    (xdc_Char)0x20,  /* [8674] */
    (xdc_Char)0x4c,  /* [8675] */
    (xdc_Char)0x6f,  /* [8676] */
    (xdc_Char)0x67,  /* [8677] */
    (xdc_Char)0x67,  /* [8678] */
    (xdc_Char)0x65,  /* [8679] */
    (xdc_Char)0x72,  /* [8680] */
    (xdc_Char)0x0,  /* [8681] */
    (xdc_Char)0x53,  /* [8682] */
    (xdc_Char)0x59,  /* [8683] */
    (xdc_Char)0x53,  /* [8684] */
    (xdc_Char)0x42,  /* [8685] */
    (xdc_Char)0x49,  /* [8686] */
    (xdc_Char)0x4f,  /* [8687] */
    (xdc_Char)0x53,  /* [8688] */
    (xdc_Char)0x20,  /* [8689] */
    (xdc_Char)0x53,  /* [8690] */
    (xdc_Char)0x79,  /* [8691] */
    (xdc_Char)0x73,  /* [8692] */
    (xdc_Char)0x74,  /* [8693] */
    (xdc_Char)0x65,  /* [8694] */
    (xdc_Char)0x6d,  /* [8695] */
    (xdc_Char)0x20,  /* [8696] */
    (xdc_Char)0x4c,  /* [8697] */
    (xdc_Char)0x6f,  /* [8698] */
    (xdc_Char)0x67,  /* [8699] */
    (xdc_Char)0x67,  /* [8700] */
    (xdc_Char)0x65,  /* [8701] */
    (xdc_Char)0x72,  /* [8702] */
    (xdc_Char)0x0,  /* [8703] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[69] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1fab,  /* left */
        (xdc_Bits16)0x1fb0,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fb9,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fc0,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fc5,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fce,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fd4,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fda,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fdf,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fe3,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1fed,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ff2,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ff9,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2002,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x200a,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2011,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2018,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x201d,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2027,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2035,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x203b,  /* left */
        (xdc_Bits16)0x203f,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x2048,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x204d,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x2057,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x205d,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x2061,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x203b,  /* left */
        (xdc_Bits16)0x2066,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x206b,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x2073,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x207c,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x2089,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x2090,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x203b,  /* left */
        (xdc_Bits16)0x2097,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x20a0,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x20a5,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20aa,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20b0,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20b5,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20c0,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20c6,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20ce,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20d4,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20de,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x20e2,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x20e7,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x20ee,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x20f6,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x2103,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x210d,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x2112,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1fb0,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x2116,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x211f,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x212f,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x213b,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036,  /* left */
        (xdc_Bits16)0x2144,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x2153,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8038,  /* left */
        (xdc_Bits16)0x2048,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8039,  /* left */
        (xdc_Bits16)0x215b,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x2112,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x215f,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x2171,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x217d,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x803e,  /* left */
        (xdc_Bits16)0x2184,  /* right */
    },  /* [63] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x218c,  /* right */
    },  /* [64] */
    {
        (xdc_Bits16)0x8040,  /* left */
        (xdc_Bits16)0x2193,  /* right */
    },  /* [65] */
    {
        (xdc_Bits16)0x8039,  /* left */
        (xdc_Bits16)0x2198,  /* right */
    },  /* [66] */
    {
        (xdc_Bits16)0x8042,  /* left */
        (xdc_Bits16)0x219d,  /* right */
    },  /* [67] */
    {
        (xdc_Bits16)0x8042,  /* left */
        (xdc_Bits16)0x21af,  /* right */
    },  /* [68] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x2200;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x45;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((const CT__xdc_runtime_Timestamp_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((const CT__xdc_runtime_Timestamp_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((const CT__xdc_runtime_Timestamp_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((const CT__xdc_runtime_Timestamp_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = NULL;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((const CT__xdc_runtime_TimestampNull_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((const CT__xdc_runtime_TimestampNull_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((const CT__xdc_runtime_TimestampNull_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((const CT__xdc_runtime_Types_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((const CT__xdc_runtime_Types_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((const CT__xdc_runtime_Types_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((const CT__xdc_runtime_Types_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((const CT__xdc_runtime_Types_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((const CT__xdc_runtime_Types_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((const CT__xdc_runtime_Types_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((const CT__xdc_runtime_Types_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((const CT__xdc_runtime_Types_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = NULL;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_printf_va__F(fmt, arg__va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_printf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_aprintf_va__F(fmt, arg__va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_aprintf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);

    va_end(arg__va);
    return retval;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_arm_m3_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_arm_m3_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_arm_lm4_Timer_create(id, tickFxn, (const ti_sysbios_family_arm_lm4_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_LoggerBuf_Module_GateProxy_Handle xdc_runtime_LoggerBuf_Module_GateProxy_create( const xdc_runtime_LoggerBuf_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_LoggerBuf_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_LoggerBuf_Module_GateProxy_delete(xdc_runtime_LoggerBuf_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S(void)
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutexPri OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutexPri_Object2__ s0; char c; } ti_sysbios_gates_GateMutexPri___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutexPri_Object__DESC__C, ".const:ti_sysbios_gates_GateMutexPri_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutexPri_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutexPri_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutexPri_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutexPri___S1) - sizeof(ti_sysbios_gates_GateMutexPri_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutexPri_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutexPri_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutexPri_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Mailbox OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Mailbox_Object2__ s0; char c; } ti_sysbios_knl_Mailbox___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__DESC__C, ".const:ti_sysbios_knl_Mailbox_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Mailbox_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Mailbox___S1) - sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Mailbox_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Mailbox_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (xdc_CPtr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (xdc_CPtr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__DESC__C, ".const:xdc_runtime_LoggerBuf_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerBuf_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module mod, const xdc_runtime_IFilterLogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IFilterLogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IFilterLogger_Params), eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module mod, const xdc_runtime_ILogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_ILogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_ILogger_Params), eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module mod, const ti_uia_runtime_IUIATransfer_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (ti_uia_runtime_IUIATransfer_Params), eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module mod, const ti_uia_runtime_ILoggerSnapshot_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32836;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_lm4_Timer_Object__ * const)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_lm4_Timer_Args__create *__args = req_args;
    ti_sysbios_family_arm_lm4_Timer_Params instPrms;
    ti_sysbios_family_arm_lm4_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_lm4_Timer_Params prms;
    ti_sysbios_family_arm_lm4_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *objp, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_lm4_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32827;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_m3_Hwi_Object__ * const)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_m3_Hwi_Args__create *__args = req_args;
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    ti_sysbios_family_arm_m3_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32813;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params instPrms;
    ti_sysbios_gates_GateHwi_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *objp, const ti_sysbios_gates_GateHwi_Params *paramsPtr)
{
    ti_sysbios_gates_GateHwi_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32815;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params instPrms;
    ti_sysbios_gates_GateMutex_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *objp, const ti_sysbios_gates_GateMutex_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutex_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutexPri SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutexPri_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutexPri_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutexPri_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutexPri_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutexPri_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutexPri_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutexPri_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutexPri_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutexPri_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutexPri_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutexPri_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutexPri_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutexPri_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutexPri_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutexPri_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutexPri_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutexPri_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutexPri_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutexPri_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutexPri_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32814;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutexPri_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutexPri_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutexPri_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutexPri_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutexPri_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutexPri_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutexPri_Params instPrms;
    ti_sysbios_gates_GateMutexPri_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutexPri_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutexPri_Handle ti_sysbios_gates_GateMutexPri_create( const ti_sysbios_gates_GateMutexPri_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutexPri_Params prms;
    ti_sysbios_gates_GateMutexPri_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutexPri_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutexPri_construct(ti_sysbios_gates_GateMutexPri_Struct *objp, const ti_sysbios_gates_GateMutexPri_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutexPri_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutexPri_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutexPri_destruct(ti_sysbios_gates_GateMutexPri_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutexPri_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutexPri_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, *((ti_sysbios_gates_GateMutexPri_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutexPri_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutexPri_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutexPri_delete(ti_sysbios_gates_GateMutexPri_Handle *instp)
{
    ti_sysbios_gates_GateMutexPri_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32817;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = req_args;
    ti_sysbios_hal_Hwi_Params instPrms;
    ti_sysbios_hal_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32831;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;
    ti_sysbios_heaps_HeapMem_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *objp, const ti_sysbios_heaps_HeapMem_Params *paramsPtr)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = req_args;
    ti_sysbios_knl_Clock_Params instPrms;
    ti_sysbios_knl_Clock_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(objp, __args->clockFxn, __args->timeout, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *objp, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr)
{
    ti_sysbios_knl_Clock_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)objp, clockFxn, timeout, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params instPrms;
    ti_sysbios_knl_Event_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *objp, const ti_sysbios_knl_Event_Params *paramsPtr)
{
    ti_sysbios_knl_Event_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Mailbox SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Mailbox_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Mailbox_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Mailbox_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Mailbox_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Mailbox_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Mailbox_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Mailbox_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Mailbox_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Mailbox_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Mailbox_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Mailbox_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Mailbox_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Mailbox_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Mailbox_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Mailbox_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Mailbox_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Mailbox_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Mailbox_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Mailbox_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Mailbox_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Mailbox_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Mailbox_Args__create *__args = req_args;
    ti_sysbios_knl_Mailbox_Params instPrms;
    ti_sysbios_knl_Mailbox_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E(objp, __args->msgSize, __args->numMsgs, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Mailbox_Handle ti_sysbios_knl_Mailbox_create( xdc_SizeT msgSize, xdc_UInt numMsgs, const ti_sysbios_knl_Mailbox_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Mailbox_Params prms;
    ti_sysbios_knl_Mailbox_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E(obj, msgSize, numMsgs, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Mailbox_construct(ti_sysbios_knl_Mailbox_Struct *objp, xdc_SizeT msgSize, xdc_UInt numMsgs, const ti_sysbios_knl_Mailbox_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Mailbox_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E((xdc_Ptr)objp, msgSize, numMsgs, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Mailbox_destruct(ti_sysbios_knl_Mailbox_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Mailbox_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, *((ti_sysbios_knl_Mailbox_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Mailbox_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Mailbox_delete(ti_sysbios_knl_Mailbox_Handle *instp)
{
    ti_sysbios_knl_Mailbox_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32808;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params instPrms;
    ti_sysbios_knl_Queue_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *objp, const ti_sysbios_knl_Queue_Params *paramsPtr)
{
    ti_sysbios_knl_Queue_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32809;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = req_args;
    ti_sysbios_knl_Semaphore_Params instPrms;
    ti_sysbios_knl_Semaphore_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(objp, __args->count, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *objp, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr)
{
    ti_sysbios_knl_Semaphore_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)objp, count, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32810;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = req_args;
    ti_sysbios_knl_Swi_Params instPrms;
    ti_sysbios_knl_Swi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(objp, __args->swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *objp, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)objp, swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32811;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = req_args;
    ti_sysbios_knl_Task_Params instPrms;
    ti_sysbios_knl_Task_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(objp, __args->fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *objp, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)objp, fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIABenchmark SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIABenchmark_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32823;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_uia_loggers_LoggerStopMode_Object__ * const)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_uia_loggers_LoggerStopMode_Params instPrms;
    ti_uia_loggers_LoggerStopMode_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_uia_loggers_LoggerStopMode_Params prms;
    ti_uia_loggers_LoggerStopMode_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *objp, const ti_uia_loggers_LoggerStopMode_Params *paramsPtr)
{
    ti_uia_loggers_LoggerStopMode_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32777;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &xdc_runtime_LoggerBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((xdc_runtime_LoggerBuf_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((xdc_runtime_LoggerBuf_Object__ * const)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    xdc_runtime_LoggerBuf_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
xdc_runtime_LoggerBuf_Handle xdc_runtime_LoggerBuf_create( const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params prms;
    xdc_runtime_LoggerBuf_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(obj, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void xdc_runtime_LoggerBuf_construct(xdc_runtime_LoggerBuf_Struct *objp, const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E((xdc_Ptr)objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void xdc_runtime_LoggerBuf_destruct(xdc_runtime_LoggerBuf_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, *((xdc_runtime_LoggerBuf_Object**)instp), (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, FALSE);
    *((xdc_runtime_LoggerBuf_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_LoggerBuf_delete(xdc_runtime_LoggerBuf_Handle *instp)
{
    xdc_runtime_LoggerBuf_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
#ifdef __GNUC__
#if defined(__clang__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __ti__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

