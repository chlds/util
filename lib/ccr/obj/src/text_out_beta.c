/* **** Notes

Commandlet to output the local time
*/


# define CCR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl text_out_beta(void(*dc),signed(x),signed(y),signed char(*buff),signed(len),signed(clr))) {

auto signed old;
auto signed r;

old = SetTextColor(dc,clr);
if(EQ(CLR_INVALID,old)) {
printf("%s \n","<< Error at fn. SetTextColor()");
return(0x00);
}

r = TextOut(dc,x,y,buff,len);
if(!r) printf("%s \n","<< Error at fn. TextOut()");

old = SetTextColor(dc,old);
if(EQ(CLR_INVALID,old)) {
printf("%s \n","<< Error at fn. SetTextColor()");
return(0x00);
}

return(r);
}
