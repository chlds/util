# C makefile
#
# Syntax:
# nmake -f makefile.mak T=<target> [OBJS=<objs>]
#
# e.g.,
#
# nmake -f makefile.mak T=calend
# (To make an executable file (calend.exe))
#
# nmake -f makefile.mak T=t
# (To make an executable file (t.exe))


CC = cl.exe
CFLAG = -c
T =
OBJ = $(T).obj
OBJS =
SRC = $(T).c
HDR = ./incl/decl/config.h


$(T).exe: $(OBJ)
	$(CC) $(OBJ) $(OBJS)

$(OBJ): $(SRC) $(HDR)
	$(CC) $(CFLAG) $(SRC)
