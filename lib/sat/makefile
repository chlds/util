# Make library SAT

L = sat
LBR = ./$(L).lib
MSG = "Build library SAT"

CC = cl.exe
CFLAG = -c -Fo$(OBJ_DIR)
SFLAG = -Fa$(SRC_DIR)

LB = lib.exe
LFLAG = -out:$(LBR)

OBJ_DIR = ./obj/
SRC_DIR = ./obj/src/
HDR_DIR = ./obj/src/incl/
HDRS = $(HDR_DIR)*.h
SRCS = $(SRC_DIR)*.c
OBJS = $(OBJ_DIR)*.obj

$(LBR): $(SRCS) $(HDRS)
	@echo $(MSG)
	$(CC) $(CFLAG) $(SFLAG) $(SRCS)
	$(LB) $(LFLAG) $(OBJS)

.PHONY: _clean_all
_clean_all:
	del .\$(L).lib
	del .\obj\*.obj
	del .\obj\src\*.asm

# and more..
