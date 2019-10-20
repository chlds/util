/* **** Notes

Count letters to the terminating null character.
*/


# define C_CODE_STDS
# define C_AS
// # define C_W32API
// # define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl n_putch(signed(n),signed(letter))) {

auto signed r;

if(n<(0x00)) return(0x00);
if(!n) return(0x00);

r = _putch(letter);

if(!(EOF^(r))) {
printf("%s", "<< Error at fn. _putch()");
return(0x00);
}

return(0x01+(n_putch(--n,letter)));
}
