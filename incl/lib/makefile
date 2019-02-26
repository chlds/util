# A C make file
# to create a library file out of the object file(s) and of the source file(s)
#
# Synopsis:
#
# Syntax:
# nmake L=<library-name-you-like>
#
# or
#
# cl.exe -c *.c
# lib.exe -out:<library-file-name-you-like>.lib *.obj
#
# Remarks:
# The LIB is used for an environment variable on Windows 10.


L =

SRCS = ./*.c
OBJS = ./*.obj
CLB = $(L).lib

CFLAGS = -c
CC = cl.exe

LBFLAGS = -out:$(L).lib
LB = lib.exe


$(CLB): $(OBJS)
	$(LB) $(LBFLAGS) $(OBJS)


$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)


.PHONY: clean
clean:
	del $(L).s
	del $(L).obj
	del $(L).lib


.PHONY: allclean
allclean:
	del *.obj
	del *.s
	del *.lib
	del *.exe
	del *.map
