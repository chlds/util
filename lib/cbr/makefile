# Make cbr library

L = cbr
MSG = "Stage CBR.LIBR2"

LIBR = $(L).lib
OBJS = ./obj/*.obj
SRCS = ./obj/src/*.c
HDRS = ../incl/*.h

CC = cl.exe
CCFLAG = -Fo"./obj/" -c
# CCFLAG = -Fo"./obj/" -Fa"./obj/src/" -c

LB = lib.exe
LBFLAG = -out:$(LIBR)

$(LIBR): $(SRCS) $(HDRS)
	@echo $(MSG)
	$(CC) $(CCFLAG) $(SRCS)
	$(LB) $(LBFLAG) $(OBJS)

# and more..
