# define CAW_H
# define CAR_H
# define WIN32_H
# include "./../../../config.h"

signed(__stdcall currently_operating_window_handle_r(void(*args/*whdl*/),signed long long(argp/*LPARAM*/))) {
auto signed long long **b;
auto signed pid;
AND(pid,0x00);
GetWindowThreadProcessId(args,&pid);
if(!(EQ(pid,GetCurrentProcessId()))) return(0x01);
b = (signed long long**)(argp);
*b = (signed long long*)(args);
return(0x00);
}
