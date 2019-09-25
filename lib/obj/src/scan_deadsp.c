/* **** Notes

Count the last dead space by wrapping words
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl scan_deadsp(signed char(*di),signed char(*si),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(cols),(col),(diff);
auto signed(r);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("%s", "<< Error at fn. current_caret_pos()");
return(0x00);
}

cols = (0x01+((*argp).csbi.srWindow.Right));
col = (0x00);
diff = (0x00);

r = scan_deadsp_internal(di,si,argp,&diff,cols,col);

if(!r) {
printf("%s", "<< Error at fn. scan_deadsp_internal()");
return(0x00);
}

return(diff);
}
