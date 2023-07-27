/*

Press <Ctrl-Y> to invoke the function

Remarks:
Refer at fn. ctrl_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_key_y(void(*argp))) {
if(DBG) printf("%s ","<Ctrl-Y>");
return(CTRL_Y);
}
