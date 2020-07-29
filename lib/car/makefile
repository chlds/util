# Make car library

./car.lib: ./obj/src/*.c ../incl/*.h
	@echo "Stage CAR:LIBR1 "
	cl.exe -Fo"./obj/" -Fa"./obj/src/" -c ./obj/src/*.c
	lib.exe -out:./car.lib ./obj/*.obj

# and more..
