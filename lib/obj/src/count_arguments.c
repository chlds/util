/* **** **** **** **** Notes

Count the arguments (to the terminating null character).

argp: the leading address of an array of letters

//*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


short signed(__cdecl count_arguments(char signed(*argp))) {

/* **** **** DATA */
auto char signed const(delimiter) = (char signed) (' ');
static short signed(flag) = (NIL);

/* **** **** CODE/TEXT */
if(!argp) return(NIL);

if(!(*argp)) {
XOR(flag, flag);
return(NIL);
}

if(!(delimiter^(*argp))) {
XOR(flag, flag);
(argp++);
return(count_arguments(argp));
}

if(flag) {
(argp++);
return(count_arguments(argp));
}

OR(flag, 0x01);
(argp++);
return(1+(count_arguments(argp)));
}
