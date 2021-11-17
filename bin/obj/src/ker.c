/*

Key events
*/


# define R(A,B) (B).A
# define THRESHOLD (0x02)

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <windows.h>

signed(__cdecl main(signed(argc),signed short(**argv),signed short(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char CR = (0x0D);
auto signed char LF = (0x0A);

auto signed char *p;
auto void *cin;
auto KEY_EVENT_RECORD ker;
auto INPUT_RECORD ir;
auto signed long long ll;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
r = system("cls");

printf("\n");
printf("%s\n","Check input status and then press <Enter> key to quit.");

cin = (void(*)) GetStdHandle(STD_INPUT_HANDLE);
if(cin==(INVALID_HANDLE_VALUE)) {
printf("%s\n","<< Error at fn. GetStdHandle()");
return(0x00);
}

while(0x01) {
r = ReadConsoleInput(cin,&ir,0x01,&i);
if(!r) {
r = GetLastError();
printf("%s%d%s%Xh\n","<< Error at fn. ReadConsoleInput() with error no. ",r," or ",r);
return(0x00);
}
if(!(MOUSE_EVENT^(R(EventType,ir)))) {
}
if(!(KEY_EVENT^(R(EventType,ir)))) {
ker = R(KeyEvent,R(Event,ir));
if(R(bKeyDown,ker)) printf("<Pressed> ");
else printf("(Released) ");
}
if(!(CR^(R(AsciiChar,R(uChar,ker))))) break;
if(!(LF^(R(AsciiChar,R(uChar,ker))))) break;
}

printf("%s\n","Done!");

return(0x00);
}
