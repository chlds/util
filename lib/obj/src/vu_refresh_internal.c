/* **** Notes

Refresh the console screen.

Remarks:
Along with fn. refresh_row_numbers
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl vu_refresh_internal(signed short(col),KNOT(*k),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);

auto COORD(coord), (coord_b);
auto signed(i), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!k) return(0x00);
if(!((*k).p)) return(0x00);
if(!argp) return(0x00);


if(!(*(col+((*k).p)))) {

r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
if(!(col^((*argp).count))) {
(*argp).cached_coord.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).cached_coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
(*argp).cached_linebreak.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).cached_linebreak.Y = ((*argp).csbi.dwCursorPosition.Y);

return(0x01);
}


//* word_wrap
i = ((*argp).deadsp_by_wrapping);
col = (col+(i));
while(i++) {
if(!(col^((*argp).count))) {
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
(*argp).cached_coord.X = (-0x01+(i+((*argp).csbi.dwCursorPosition.X)));
(*argp).cached_coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
col++;
}
if(!(col^((*argp).count))) {
r = current_caret_pos(argp);
if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}
(*argp).cached_coord.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).cached_coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}
//*/

r = c_out_beta(col+((*argp).init_p),argp);

/* empty or..
if(!r) {
printf("<< Error at fn. c_outs_beta()");
return(0x00);
}
//*/

INC(col);

return(0x01+(vu_refresh_internal(col,k,argp)));
}
