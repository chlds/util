/*

Press <Ctrl-P> to invoke the function

Remarks:
Refer at fn. ctrl_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_key_p(void(*argp))) {
if(DBG) printf("%s ","<Ctrl-P>");
return(CTRL_P);
}
