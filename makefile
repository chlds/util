# C makefile
#
# Synopsis
#
# Use the following commands:
# cl.exe, lib.exe and link.exe
#
# cl.exe -c *.c (to compile the C files)
# lib.exe -out:<library-name-you-like>.lib *.obj [*.obj..] (to make a library file)
# link.exe [-map] *.obj [*.obj..] [*.lib..] (to make an executable file)
#
# To make a library file:
# nmake lb [L=<a-library-file-name-you-like>]
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
# Refer on site https://stackoverflow.com/questions/4477043/c-link-exe-fails-from-makefile-but-not-from-the-command-line


L = cui # Please put a library file name you like
T =

HDR = ./incl/config.h

SRC = ./bin/obj/src/$(T).c
SRCS = ./bin/obj/src/*.c

LBSRC = ./lib/obj/src/$(L).c
LBSRCS = ./lib/obj/src/*.c

S = ./bin/obj/src/$(T).asm
SS = ./bin/obj/src/*.asm

LBS = ./lib/obj/src/$(L).asm
LBSS = ./lib/obj/src/*.asm

OBJ = ./bin/obj/$(T).obj
OBJS =  # ./bin/obj/*.obj

LBOBJ = ./lib/obj/src/$(L).obj  # e.g., ./lib/obj/$(L).obj
LBOBJS = ./lib/obj/src/*.obj  # e.g., ./lib/obj/*.obj

MAP = ./bin/obj/$(T).map
EXE = ./bin/$(T).exe

MYLIB = ./lib/$(L).lib
MYLIBS = ./lib/*.lib
LIBS = ./lib/*.lib user32.lib gdi32.lib

CFLAGS = -c -Fo$(OBJ) -Fa$(S)
CC = cl.exe
LILFLAGS = -out:$(EXE) -map:$(MAP)
LIL = link.exe


# Type the following command on directory util/ to make the executable file on directory ./bin/ out of a C source file on directory ./bin/obj/src/.
# > nmake T=<a-C-source-file-name-except-the-.c-extension>
# e.g.,
# > nmake T=calend


$(EXE): $(OBJ) $(OBJS) $(MYLIBS)
	$(LIL) $(LILFLAGS) $(OBJ) $(OBJS) $(LIBS)


$(OBJ): $(SRC) $(HDR)
	$(CC) $(CFLAGS) $(SRC)


# Type the following command on directory util/ to make a library file on directory ./lib/.
# > nmake lb L=<a-library-file-name-you-like>
# e.g.,
# > nmake lb L=my


.PHONY: lb
lb:
	cl -Fo"lib/obj/" -Fa"lib/obj/src/" -c "lib/obj/src/*.c"
	lib.exe -out:lib/$(L).lib "lib/obj/*.obj"


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
	del .\lib\obj\src\*.asm
	del .\lib\obj\*.obj
	del .\lib\*.lib
