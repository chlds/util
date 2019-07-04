/* **** Notes

Sustain message for the current knot associated with the delegate list - argp - in the CMDLN_STAT structure.

Remarks:
Synchronise coordinates
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl sustain(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/*
r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

(*((*argp).t)).depart.X = (0x00);
(*((*argp).t)).depart.Y = (coord.Y);
//*/

if((*((*argp).t)).p) {
free((*((*argp).t)).p);
// (*((*argp).t)).p = (signed char(*)) (0x00);
}
r = ct((*argp).init_p);
INC(r);
(*((*argp).t)).p = (signed char(*)) malloc(r*(sizeof(signed char)));
if(!((*((*argp).t)).p)) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}
r = cpy((*((*argp).t)).p,(*argp).init_p);

return(r);
}
