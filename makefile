# C makefile
#
# Synopsis:
#
# Use the following commands:
# cl.exe, lib.exe and link.exe
#
# cl.exe -c *.c
# lib.exe -out:<library-name-you-like>.lib *.obj (Please refer at ./incl/lib/makefile)
# link.exe [-map] *.obj [*.obj..] [*.lib..]
#
# Syntax:
# nmake T=<target> [OBJS="*.obj [*.obj.."]] [LIBS="*.lib [*.lib.."]]
#
# Usage:
# e.g.,
# nmake T=calend
# (To make an executable file (calend.exe))
# e.g.,
# nmake T=t
# (To make an executable file (t.exe))
#
# Remarks:
#  i) Making a file (or files) in the Timestamp Comparison
# ii) The quotation marks ..are not necessary in a C Make file.
#
# Tips:
# A LIB will be not used on a C make file in Windows 10 OS..
# That screws up the LIB environment variable in the OS.
# Refer on site https://stackoverflow.com/questions/4477043/c-link-exe-fails-from-makefile-but-not-from-the-command-line


T =

HDR = ./incl/decl/config.h

SRC = $(T).c
OBJ = $(T).obj
CLB = $(T).lib
EXE = $(T).exe

SRCS = ./*.c
OBJS =
LIBS = ./incl/lib/*.lib user32.lib gdi32.lib
# LIBS = ./incl/lib/*.lib

AS = /Fa"$(T).s"
C = -c
CFLAG = $(C)
CFLAGS = $(C) $(AS)
CC = cl.exe

LILFLAGS = -map # -e
LIL = link.exe


$(EXE): $(OBJ)
	$(LIL) $(LILFLAGS) $(OBJ) $(OBJS) $(LIBS)


$(OBJ): $(SRC) $(HDR)
	$(CC) $(CFLAGS) $(SRC)


.PHONY: clean
clean:
	del $(T).map
	del $(T).s
	del $(T).exe
	del $(T).obj


.PHONY: allclean
allclean:
	del *.map
	del *.s
	del *.exe
	del *.obj
