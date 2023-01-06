/* **** Notes

Coordinate

Remarks:
ESC,[,<row>,;,<column>,R,0x00,
*/


# define CAR_H
# include <conio.h>
# include "./../../../config.h"

signed(__cdecl coord_report_rr(signed char(**argp))) {
auto signed r;
auto signed short flag;
auto signed delim = ('R');
auto signed guard = (0x10);
if(!argp) return(0x00);
AND(flag,0x00);
// if(!(_kbhit())) return(0x00);
r = _getch();
r = (0xFF&(r));
if(!(cat_bb(argp,r))) OR(flag,0x01);
if(guard<(ct(*argp))) OR(flag,0x02);
if(flag) {
if(EQ(0x02,flag)) printf("%s \n","<< Over..");
if(EQ(0x01,flag)) printf("%s \n","<< Error at fn. cat_bb()");
rl(*argp);
*argp = (0x00);
return(0x00);
}
if(!(delim^(r))) return(0x00);
return(0x01+(coord_report_rr(argp)));
}
