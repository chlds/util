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

HDRS = ./lib/incl/*.h

SRC = ./bin/obj/src/$(T).c

S = ./bin/obj/src/$(T).asm
SS = ./bin/obj/src/*.asm

OBJ = ./bin/obj/$(T).obj
OBJS = ./bin/obj/*.obj

MAP = ./bin/obj/$(T).map
EXE = ./bin/$(T).exe

LIBR2 = ./lib/cbr/cbr.lib
LIBR1 = ./lib/car/car.lib
LIBR = ./lib/$(L).lib
LIBRS = user32.lib gdi32.lib

UTF_8 = -source-charset:utf-8
# compiler option for unicode:
# e.g., define _UNICODE, save files in UTF-8, include <tchar.h>, auto TCHAR *p = (L"...."), fn. _putch/_putwch/_puttch and more..

CFLAGS = -c -Fo$(OBJ) -Fa$(S) # $(UTF_8)
CC = cl.exe
LILFLAGS = -out:$(EXE) -map:$(MAP) -stack:128000000
LIL = link.exe

# Type the following command on directory util/ to make the executable file on directory ./bin/ out of a C source file on directory ./bin/obj/src/.
# > nmake T=<a-C-source-file-name-except-the-.c-extension>
# e.g.,
# > nmake T=calend

$(EXE): $(OBJ) $(LIBR) # $(LIBRS)
	@echo "Stage 0 "
	$(LIL) $(LILFLAGS) $(OBJ) $(LIBR) $(LIBRS)

$(OBJ): $(SRC) $(HDRS)
	@echo "Stage 1 "
	$(CC) $(CFLAGS) $(SRC)

# Type the following command on directory util/ to make a library file on directory ./lib/.
# > nmake lb L=<a-library-file-name-you-like>
# e.g.,
# > nmake lb L=my

$(LIBR): $(LIBR2) $(LIBR1)
$(LIBR2):
	@echo "Stage LIBR2 "
	cd lib/cbr/
	nmake
$(LIBR1):
	@echo "Stage LIBR1 "
	cd ../car/
	nmake
$(LIBR):
	@echo "Stage LIBR "
	cd ../../
	lib.exe -out:$(LIBR) $(LIBR2) $(LIBR1)

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
	del .\lib\cbr\obj\src\*.asm
	del .\lib\cbr\obj\*.obj
	del .\lib\cbr\cbr.lib
	del .\lib\car\obj\src\*.asm
	del .\lib\car\obj\*.obj
	del .\lib\car\car.lib
	del .\lib\*.lib
