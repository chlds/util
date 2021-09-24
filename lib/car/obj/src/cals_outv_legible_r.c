/* **** Notes

Output.

Remarks:
A character string should be terminated with the null character.
Refer at fn. cv_ww, fn. read_b and fn. rm_crlf to replace CR/LF with the null character.
Return the number of rows output for characters (..or the number of characters).
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_outv_legible_r(signed(arg/* delay */),signed char(**argp))) {

auto signed char *b;
auto signed i,r;
auto signed char a[] = {
CR,LF,HT,0x00,
};

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(cli_es(CTRL_K))) return(0x00);

b = (a);
while(*b) {
cli_out(b);
b++;
}

cli_align(ALIGN_TAB);

// msleep(arg);
sleep_b(arg);
cli_outs_legible(arg,*argp);
argp++;

return(0x01+(cals_outv_legible_r(arg,argp)));
}
