# Make an executable file (after making ca library)
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


L = ca
T =

MSG = "Making.. "
RES =

HDR_PATH = ./lib/incl/
HDRS = $(HDR_PATH)*.h
CONFIG_HDR = $(HDR_PATH)config.h
SRC = ./bin/obj/src/$(T).c
S = ./bin/obj/src/$(T).asm
SS = ./bin/obj/src/*.asm
OBJ = ./bin/obj/$(T).obj
OBJS = ./bin/obj/*.obj

MAP = ./bin/obj/$(T).map
EXE = ./bin/$(T).exe

L99 = ck
L15 = sched
L14 = cal
L13 = cat
L12 = si
L11 = cre
L10 = priv
L9 = dump
L8 = dk
L7 = pin
L6 = depin
L5 = unpin
L4 = caw
L3 = sat
LIBR99 = # ./lib/$(L99)/$(L99).lib
LIBR15 = ./lib/$(L15)/$(L15).lib
LIBR14 = ./lib/$(L14)/$(L14).lib
LIBR13 = ./lib/$(L13)/$(L13).lib
LIBR12 = ./lib/$(L12)/$(L12).lib
LIBR11 = ./lib/$(L11)/$(L11).lib
LIBR10 = ./lib/$(L10)/$(L10).lib
LIBR9 = ./lib/$(L9)/$(L9).lib
LIBR8 = ./lib/$(L8)/$(L8).lib
LIBR7 = ./lib/$(L7)/$(L7).lib
LIBR6 = ./lib/$(L6)/$(L6).lib
LIBR5 = ./lib/$(L5)/$(L5).lib
LIBR4 = ./lib/$(L4)/$(L4).lib
LIBR3 = ./lib/$(L3)/$(L3).lib
LIBR2 = ./lib/cbr/cbr.lib
LIBR1 = ./lib/car/car.lib
LIBRS = $(LIBR99) $(LIBR15) $(LIBR14) $(LIBR13) $(LIBR12) $(LIBR11) $(LIBR10) $(LIBR9) $(LIBR8) $(LIBR7) $(LIBR6) $(LIBR5) $(LIBR4) $(LIBR3) $(LIBR2) $(LIBR1)
LIBR = ./lib/$(L).lib
OS_LIBRS = user32.lib gdi32.lib psapi.lib advapi32.lib winmm.lib

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

$(EXE): $(OBJ) $(LIBR) $(LIBRS) $(HDRS) # $(OS_LIBRS)
	@echo $(MSG)
	$(LIL) $(LILFLAGS) $(OBJ) $(LIBR) $(OS_LIBRS) $(RES)

$(OBJ): $(SRC) $(HDRS)
	@echo "Stage 1 "
	$(CC) $(CFLAGS) $(SRC)

$(LIBR): $(LIBRS) $(HDRS)
	@echo "Making LIBR.. "
	lib.exe -out:$(LIBR) $(LIBRS)
$(LIBR15): "lib/$(L15)/obj/src/*.c" "lib/$(L15)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR15.. "
	cd lib/$(L15)/
	nmake
	cd ../../
$(LIBR14): "lib/$(L14)/obj/src/*.c" "lib/$(L14)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR14.. "
	cd lib/$(L14)/
	nmake
	cd ../../
$(LIBR13): "lib/$(L13)/obj/src/*.c" "lib/$(L13)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR13.. "
	cd lib/$(L13)/
	nmake
	cd ../../
$(LIBR12): "lib/$(L12)/obj/src/*.c" "lib/$(L12)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR12.. "
	cd lib/$(L12)/
	nmake
	cd ../../
$(LIBR11): "lib/$(L11)/obj/src/*.c" "lib/$(L11)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR11.. "
	cd lib/$(L11)/
	nmake
	cd ../../
$(LIBR10): "lib/$(L10)/obj/src/*.c" "lib/$(L10)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR10.. "
	cd lib/$(L10)/
	nmake
	cd ../../
$(LIBR9): "lib/$(L9)/obj/src/*.c" "lib/$(L9)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR9.. "
	cd lib/$(L9)/
	nmake
	cd ../../
$(LIBR8): "lib/$(L8)/obj/src/*.c" "lib/$(L8)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR8.. "
	cd lib/$(L8)/
	nmake
	cd ../../
$(LIBR7): "lib/$(L7)/obj/src/*.c" "lib/$(L7)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR7.. "
	cd lib/$(L7)/
	nmake
	cd ../../
$(LIBR6): "lib/$(L6)/obj/src/*.c" "lib/$(L6)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR6.. "
	cd lib/$(L6)/
	nmake
	cd ../../
$(LIBR5): "lib/$(L5)/obj/src/*.c" "lib/$(L5)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR5.. "
	cd lib/$(L5)/
	nmake
	cd ../../
$(LIBR4): "lib/$(L4)/obj/src/*.c" "lib/$(L4)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR4.. "
	cd lib/$(L4)/
	nmake
	cd ../../
$(LIBR3): "lib/$(L3)/obj/src/*.c" "lib/$(L3)/obj/src/incl/*.h" $(CONFIG_HDR)
	@echo "Making LIBR3.. "
	cd lib/$(L3)/
	nmake
	cd ../../
$(LIBR2): "lib/cbr/obj/src/*.c" "lib/incl/cbr*.h" $(CONFIG_HDR)
	@echo "Making LIBR2.. "
	cd lib/cbr/
	nmake
	cd ../../
$(LIBR1): "lib/car/obj/src/*.c" "lib/incl/*.h" # $(CONFIG_HDR)
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
