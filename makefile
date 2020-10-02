# Make an executable file (after making czr library)
#
# Synopsis
# cl.exe -c *.c (to compile the C files)
# lib.exe -out:<library-name-you-like>.lib *.obj [*.obj..] (to make a library file)
# link.exe [-map] *.obj [*.obj..] [*.lib..] (to make an executable file)
#
# To make an executable file:
# nmake T=<target> [OBJS="*.obj [*.obj.."]] [LIBS="*.lib [*.lib.."]]
#
# Remarks:
#  i) Building/Making a file (or files) with the Comparison of the timestamps
# ii) The quotation marks ..are not necessary in a C Make file.
#
# Tips:
# A LIB will be not used on a C make file in Windows 10 OS..
# That screws up the LIB environment variable in the OS.


L = czr
T =

MSG = "Making.. "

HDRS = ./lib/incl/*.h
SRC = ./bin/obj/src/$(T).c
S = ./bin/obj/src/$(T).asm
SS = ./bin/obj/src/*.asm
OBJ = ./bin/obj/$(T).obj
OBJS = ./bin/obj/*.obj

MAP = ./bin/obj/$(T).map
EXE = ./bin/$(T).exe

LIBR3 = ./lib/ccr/ccr.lib
LIBR2 = ./lib/cbr/cbr.lib
LIBR1 = ./lib/car/car.lib
LIBRS = $(LIBR3) $(LIBR2) $(LIBR1)
LIBR = ./lib/$(L).lib
OS_LIBRS = user32.lib gdi32.lib psapi.lib advapi32.lib

UTF_8 = -source-charset:utf-8
# compiler option for unicode:
# e.g., define _UNICODE, save files in UTF-8, include <tchar.h>, auto TCHAR *p = (L"...."), fn. _putch/_putwch/_puttch and more..

# CFLAGS = -c -Fo$(OBJ) -Fa$(S) # $(UTF_8)
CFLAGS = -c -Fo$(OBJ) # -Fa$(S) $(UTF_8)
CC = cl.exe
LILFLAGS = -out:$(EXE) -map:$(MAP) -stack:128000000
LIL = link.exe

# Type the following command on directory util/ to make the executable file on directory ./bin/ out of a C source file on directory ./bin/obj/src/.
# > nmake T=<a-C-source-file-name-except-the-.c-extension>
# e.g.,
# > nmake T=calend

$(EXE): $(OBJ) $(LIBR) $(LIBRS) # $(OS_LIBRS)
	@echo $(MSG)
	$(LIL) $(LILFLAGS) $(OBJ) $(LIBR) $(OS_LIBRS)

$(OBJ): $(SRC) $(HDRS)
	@echo "Stage 1 "
	$(CC) $(CFLAGS) $(SRC)

$(LIBR): $(LIBR3) $(LIBR2) $(LIBR1)
	@echo "Making LIBR.. "
	lib.exe -out:$(LIBR) $(LIBRS)
$(LIBR3): "lib/ccr/obj/src/*.c" "lib/incl/ccr*.h"
	@echo "Making LIBR3.. "
	cd lib/ccr/
	nmake
	cd ../../
$(LIBR2): "lib/cbr/obj/src/*.c" "lib/incl/cbr*.h"
	@echo "Making LIBR2.. "
	cd lib/cbr/
	nmake
	cd ../../
$(LIBR1): "lib/car/obj/src/*.c" "lib/incl/car*.h"
	@echo "Making LIBR1.. "
	cd lib/car/
	nmake
	cd ../../

.PHONY: clean
clean:
	del .\bin\obj\src\$(T).asm
	del .\bin\obj\$(T).obj
	del .\bin\obj\$(T).map
	del .\bin\$(T).exe

.PHONY: allclean
allclean:
	del .\bin\obj\src\*.asm
	del .\bin\obj\*.obj
	del .\bin\obj\*.map
	del .\bin\*.exe

.PHONY: allcleanlb
allcleanlb:
	del .\lib\ccr\obj\src\*.asm
	del .\lib\ccr\obj\*.obj
	del .\lib\ccr\ccr.lib
	del .\lib\cbr\obj\src\*.asm
	del .\lib\cbr\obj\*.obj
	del .\lib\cbr\cbr.lib
	del .\lib\car\obj\src\*.asm
	del .\lib\car\obj\*.obj
	del .\lib\car\car.lib
	del .\lib\*.lib
