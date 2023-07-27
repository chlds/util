/*

Press <Ctrl-M> to invoke the function

Remarks:
Refer at fn. ctrl_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_key_m(void(*argp))) {
if(DBG) printf("%s ","<Ctrl-M>");
return(CTRL_M);
}
