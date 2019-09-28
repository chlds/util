/* **** Notes

Find the < last > dead sp to the current address out of the leading address.

Remarks:
Derivated out of fn. cumulate.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl find_deadsp(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(*p);
auto signed(cols),(col),(diff);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("%s", "<< Error at fn. current_caret_pos()");
return(0x00);
}

cols = (0x01+((*argp).csbi.srWindow.Right));
col = (0x00);
diff = (0x00);
p = ((*argp).init_p);

if(!p) {
printf("%s", "<< Error at fn. cumulate()");
return(0x00);
}

r = find_deadsp_internal(&diff,p,col,cols,argp);

/* empty or occurred an error..
if(!r) {
printf("%s", "<< Error at fn. find_deadsp_internal()");
return(0x00);
}
//*/

return(diff);
}
