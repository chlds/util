/* **** Notes

Retrieve

Remarks:
Return (0x00) on failure
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_operating_workarea(signed(arg))) {
auto signed r;
auto RECT rc;
r = (SPI_GETWORKAREA);
if(!(SystemParametersInfo(r,0x00,&rc,0x00))) return(0x00);
r = (R(bottom,rc));
if(EQ(0x02,arg)) r = (R(right,rc));
if(EQ(0x01,arg)) r = (R(top,rc));
if(EQ(0x00,arg)) r = (R(left,rc));
return(r);
}
