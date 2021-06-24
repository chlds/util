/* **** Notes

Transcribe dots retrieved from a dc to a dc with a handle.
*/

# define CCR
# define C_W32API
# include "../../../incl/config.h"

signed(__cdecl transcribe_beta(signed(width),signed(height),void(*di/* hdl */),void(*si/* dc */))) {

auto void *dc;
auto signed r;
auto signed short flag;

if(width<(0x01)) return(0x00);
if(height<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

dc = (void(*)) GetDC((void(*)) di);
if(!dc) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetDC() with error no.",r,"or",r);
return(0x00);
}

AND(flag,0x00);
r = BitBlt(dc,0x00,0x00,width,height,si,0x00,0x00,SRCCOPY);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. BitBlt() with error no.",r,"or",r);
OR(flag,0x01);
}

r = ReleaseDC(di,dc);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. ReleaseDC() with error no.",r,"or",r);
return(0x00);
}

if(flag) AND(r,0x00);

return(r);
}
