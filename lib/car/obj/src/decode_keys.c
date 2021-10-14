/* **** Notes

Decode bytes based on UTF-8 into a character in UTF-16 or for control function.

Remarks:
Refer at fn. cli_i_b and cli_io_b.
Based on UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl decode_keys(signed(arg),signed(*di),signed char(*si))) {

auto signed r;
auto signed(__cdecl*f)(signed(*di),signed char(*si));
auto signed(__cdecl*(fn[]))(signed(*di),signed char(*si)) = {
decode_key_00,
decode_key_01,
decode_b,
0x00,
};

if(!arg) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

AND(r,0x00);
if(!(EQ(arg,~0x00))) OR(r,0x02);
if(EQ(0xE0,nbytechar(*si))) {
if(!(EQ(0x03,ct(si)))) --r;
}

f = (*(r+(fn)));

return(f(di,si));
}
