# invoke SourceDir generated makefile for app.pem4f
app.pem4f: .libraries,app.pem4f
.libraries,app.pem4f: package/cfg/app_pem4f.xdl
	$(MAKE) -f G:\David\UNI\SE2\Practicas\Workspace\TP/src/makefile.libs

clean::
	$(MAKE) -f G:\David\UNI\SE2\Practicas\Workspace\TP/src/makefile.libs clean

