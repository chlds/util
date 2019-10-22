# C makefile
#
#
# Please type the follow command to make the <u.exe> executable file for Unicode.
#
# > nmake


T = u
# target

SUB_ROUT_C = output_in_utf_8.c
SUB_ROUT_O = output_in_utf_8.obj
# sub routines

HDR =
# header files

SRC = ./$(T).c
SRCS = ./$(SUB_ROUT_C)

OBJ = ./$(T).obj
OBJS = ./$(SUB_ROUT_O)

LIBS =

MAP = ./$(T).map
EXE = ./$(T).exe

UTF_8 = -source-charset:utf-8
# compiler option for unicode:
# e.g., define _UNICODE, save files in UTF-8, include <tchar.h>, auto TCHAR *p = (L"...."), fn. _putch/_putwch/_puttch and more..

CFLAGS = -c $(UTF_8)
CC = cl.exe
LILFLAGS = -out:$(EXE) -map:$(MAP) -stack:1024000 # about 1MB
LIL = link.exe


$(EXE): $(OBJ) $(OBJS)
	$(LIL) $(LILFLAGS) $(OBJ) $(OBJS) $(LIBS)

$(OBJS): $(SRCS) $(HDR)
	$(CC) $(CFLAGS) $(SRCS)

$(OBJ): $(SRC) $(HDR)
	$(CC) $(CFLAGS) $(SRC)


.PHONY: clean
clean:
	del .\*.asm
	del .\*.obj
	del .\*.map
	del .\*.exe
