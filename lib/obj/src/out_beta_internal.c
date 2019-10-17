/* **** Notes

Console output
Output a tab as whitespace

Remarks:
Launch on vu.exe
Use fn. c_out_beta (along with fn. c_out_ht_beta and fn. c_out_ht_beta_internal)
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl out_beta_internal(signed short(cols),COORD(*coord),signed char(*base),CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const HT = ('\t');
auto COORD coord_b;
auto signed char *offset;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!coord) return(0x00);
if(!base) return(0x00);
if(!argp) return(0x00);

if(!(*base)) return(0x00);

r = ct_word_internal(base);
r = (r+((*coord).X));

if(r<(cols)) flag = (0x00);
else flag = (0x01);


/* UN-COMPLETED.. */


r = SetConsoleCursorPosition((*argp).s_out,*coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01+(out_beta_internal(cols,coord,base,argp)));
}
