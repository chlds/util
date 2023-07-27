/*

Press <Ctrl-B> to invoke the function

Remarks:
Refer at fn. ctrl_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_key_b(void(*argp))) {
if(DBG) printf("%s ","<Ctrl-B>");
return(CTRL_B);
}
