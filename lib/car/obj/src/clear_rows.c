/* **** Notes

Clear rows

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clear_rows(signed(arg))) {
auto signed r;
auto coord_t coord;
if(arg<(0x00)) return(es(CTRL_J));
if(!arg) return(es(CTRL_L));
if(!(es(CTRL_K))) return(0x00);
AND(r,0x00);
if(--arg) {
if(!(coord_b(0x00/* CLI_IN */,OBJS,&coord))) return(0x00);
if(!(es(CTRL_A))) return(0x00);
r = clear_rows_r(arg);
if(!r) return(0x00);
if(!(coord_b(0x01/* CLI_OUT */,CLI_B,&coord))) return(0x00);
}
r++;
return(r);
}
