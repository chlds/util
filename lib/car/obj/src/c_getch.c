/*

Fn. getch for Linux
*/


// # include <termios.h>
# include <stdio.h>
// # include "./incl/car.h"

signed(__cdecl c_getch(signed(arg))) {
/*
auto signed fd;
auto signed r;
auto struct termios current,old;
fd = (0x00);
tcgetattr(fd,&old);
current = (old);
current.c_lflag &= (~ICANON);
if(arg) current.c_lflag |= (ECHO);
else current.c_lflag &= (~ECHO);
tcsetattr(fd,TCSANOW,&current);
r = fgetc(stdin);
tcsetattr(fd,TCSANOW,&old);
return(r);
//*/
return(0x01);
}
