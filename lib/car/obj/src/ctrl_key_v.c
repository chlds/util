/*

Press <Ctrl-V> to invoke the function

Remarks:
Refer at fn. ctrl_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_key_v(void(*argp))) {
if(DBG) printf("%s ","<Ctrl-V>");
return(CTRL_V);
}
