/*

Fn. kbhit for Linux
*/


// # include <termios.h>
// # include <fcntl.h>
# include <stdio.h>
// # include "./incl/car.h"

signed(__cdecl c_kbhit(void)) {
/*
auto signed flag;
auto signed fd;
auto signed r;
auto struct termios current,old;
fd = (0x00);
tcgetattr(fd,&old);
current = (old);
current.c_lflag &= (~(ICANON|(ECHO)));
tcsetattr(fd,TCSANOW,&current);
flag = fcntl(fd,F_GETFL,0x00);
fcntl(fd,F_SETFL,flag|(O_NONBLOCK));
r = fgetc(stdin);
fcntl(fd,F_SETFL,flag);
tcsetattr(fd,TCSANOW,&old);
if(EQ(EOF,r)) return(0x00);
ungetc(r,stdin);
return(0x01);
//*/
return(0x01);
}
