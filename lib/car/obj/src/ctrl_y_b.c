/*

Press <Ctrl-Y> to invoke the function

Remarks:
Refer at fn. ctrl_fn_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_y_b(void(*argp))) {
// if(!argp) return(0x00);
if(DBG) printf("%s ","<Ctrl-Y>");
if(!(ctrl_none_b(argp))) return(0x00);
return(CTRL_Y);
}