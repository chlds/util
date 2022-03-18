/* **** Notes

Check values input in Unicode.
*/


# define CAR
# include <stdio.h>
# include "../../../lib/incl/config.h"

signed(__cdecl main(void)) {

auto signed SECOND = (0xDC00);
auto signed FIRST = (0xD800);
auto signed CR = (0x0D);

auto signed short buff[0x04] = {
(signed short) (0x00),
};

auto signed short *w;
auto signed char *b;
auto signed c,i,r;

system("cls");

printf("\n");
printf("%s\n","Check values input in Unicode and then press <Enter> key to quit:");

b = (0x00);
while(0x01) {
w = (buff);
r = (0x00);
c = _getwch();
c = (0xFFFF&(c));
if(c<(SECOND)) {
if(!(c<(FIRST))) {
r = _getwch();
r = (0xFFFF&(r));
}}
printf("%Xh ",c);
if(r) printf("%s %Xh ","&",r);
/* to encode to UTF-8 */
*w = (signed short) (c);
w++;
if(r) {
*w = (signed short) (r);
w++;
}
*w = (0x00);
r = cv_bw(&b,buff);
printf("%s%d%s ","(",r,"B:");
AND(i,0x00);
while(*(b+(i))) printf("%Xh%s",0xFF&(*(b+(i++))),",");
printf("%s ",")");
rl(b);
b = (0x00);
/* terminate */
if(!(CR^(c))) break;
}

printf("\n");
printf("%s\n","Done!");

return(0x00);
}
