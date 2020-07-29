# Make cbr library

./cbr.lib: ./obj/src/*.c ../incl/*.h
	@echo "Stage CBR:LIBR2 "
	cl.exe -Fo"./obj/" -Fa"./obj/src/" -c ./obj/src/*.c
	lib.exe -out:./cbr.lib ./obj/*.obj

# and more..
