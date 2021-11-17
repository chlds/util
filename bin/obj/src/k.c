/* **** Notes

Check values input in Unicode.
*/


# include <conio.h>
# include <stdio.h>

signed(__cdecl main(void)) {

auto signed SECOND = (0xDC00);
auto signed FIRST = (0xD800);
auto signed CR = (0x0D);
auto signed c,i,r;

system("cls");

printf("\n");
printf("%s\n","Check values input in Unicode and then press <Enter> key to quit:");

while(0x01) {
r = (0x00);
c = _getwch();
if(c<(SECOND)) {
i = (-0x01+(FIRST));
if(i<(c)) r = _getwch();
}
printf("%s%Xh%s","[i.",c,"] ");
if(r) printf("%s%Xh%s","[ii.",r,"] ");
/* terminate */
if(!(CR^(c))) break;
}

printf("\n");
printf("%s\n","Done!");

return(0x00);
}
