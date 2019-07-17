/* **** Notes

Prepare to load a file.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_load_prep(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord), (coord_b);
auto signed(r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

/* Announcement */
printf("LOADING..");

r = cmdln_load(argp);
if(!r) {
printf("%s", "<< Error at fn. cmdln_load()");
return(0x00);
}

coord_b.X = (0x00);
coord_b.Y = ((*argp).orig.Y);

r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

r = clearbody(argp);
if(!r) {
printf("%s", "<< Error at fn. clearbody()");
return(0x00);
}

r = cat_ll((*argp).b);
if(!r) {
printf("%s", "<< Error at fn. cat_ll()");
return(0x00);
}

coord_b.Y = (0x00);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

coord_b.Y = ((*argp).orig.Y);
r = SetConsoleCursorPosition((*argp).s_out, coord_b);
if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

// set workspace parameters.
(*argp).t = ((*argp).b);
r = cpy((*argp).init_p,(*((*argp).t)).p);
if(!r) {
printf("%s", "<< Error at fn. cpy()");
return(0x00);
}
(*argp).tail = (r);
(*argp).clih.l = (SNAPSHOT*) ((*((*argp).t)).clih.l);
(*argp).clih.t = (SNAPSHOT*) ((*((*argp).t)).clih.t);
(*argp).clih.b = (SNAPSHOT*) ((*((*argp).t)).clih.b);

r = sync_coordinates(argp);
if(!r) {
printf("%s", "<< Error at fn. sync_coordinates()");
return(0x00);
}

return(0x01);
}
