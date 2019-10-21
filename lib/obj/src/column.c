/* **** Notes

Console output

Remarks:
Output a tab as whitespace
Wrap words
*/


# define C_CODE_STDS
# define C_AS
// # define C_W32API
// # define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl column(signed short(cols),signed(algn),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char const HYPHEN = ('-');
static signed char const SP = (' ');
static signed char const HT = ('\t');

auto signed char *p;
auto signed c,i,r;
auto signed short col,flag;

/* **** CODE/TEXT */
if(cols<(0x00)) return(0x00);
if(!cols) return(0x00);
if(!base) return(0x00);

// To insert an LF at the end of (a row of) columns..
// DEC(cols);

XOR(col,col);

r = column_internal(cols,algn,col,base /* cur */,base /* offset */);

return(r);
}
