/* **** Notes

Check values input in Unicode.
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

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

while(0x01) {
w = (buff);
r = (0x00);
c = _getwch();
if(c<(SECOND)) {
i = (-0x01+(FIRST));
if(i<(c)) r = _getwch();
}
printf("%Xh%s",c," ");
if(r) printf("%s%Xh%s","& ",r," ");
/* to encode to UTF-8 */
*w = (c);
w++;
if(r) {
*w = (r);
w++;
}
*w = (0x00);
r = encode_bw(&b,buff);
printf("%s%d%s","(",r,"B: ");
i = (0x00);
while(*(b+(i))) printf("%Xh%s",*(b+(i++)),",");
printf("%s",") ");
free(b);
/* terminate */
if(!(CR^(c))) break;
}

printf("\n");
printf("%s\n","Done!");

return(0x01);
}
