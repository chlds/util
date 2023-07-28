/*

Press <Ctrl-Z> to invoke the function

Remarks:
Refer at fn. ctrl_key
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ctrl_key_z(void(*argp))) {
if(DBG) printf("%s ","<Ctrl-Z>");
if(!(clih_undo(argp))) return(0x00);
return(CTRL_Z);
}
