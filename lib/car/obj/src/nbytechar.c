/*

Check the leading Unicode byte for a character based on UTF-8:

.iiii.o*** (0xF0) that stands for the leading byte for a 4-byte character i.e.,
for a 21-bit-efficient character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32 bits,
.iiio.**** (0xE0) that stands for the leading byte for a 3-byte character i.e.,
for a 16-bit-efficient character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24 bits,
.iio*.**** (0xC0) that stands for the leading byte for a 2-byte character i.e.,
for an 11-bit-efficient character expressed in .iio*.**** .io**.**** (5+6) on 16 bits,
and
.io**.**** (0x80) that stands for a sequential byte i.e.,
for a 6-bit-efficient byte expressed in .io**.**** (6) on 8 bits for the n-byte characters based on UTF-8.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl nbytechar(signed char arg)) {

auto signed char c;
auto signed char const AL_80 = (0x80); // a sequential (.io**.****) byte for a n-byte character
auto signed char const AL_C0 = (0xC0); // the leading (.iio*.****) byte for a 2-byte character expressed in 11 (5+6) bits
auto signed char const AL_E0 = (0xE0); // the leading (.iiio.****) byte for a 3-byte character expressed in 16 (4+6+6) bits
auto signed char const AL_F0 = (0xF0); // the leading (.iiii.o***) byte for a 4-byte character expressed in 21 (3+6+6+6) bits

c = (arg);
c = (c&(AL_80));
if(!c) return(0x01);

arg = (arg&(AL_F0));
if(!(arg^(AL_F0))) return(0x04);

arg = (arg&(AL_E0));
if(!(arg^(AL_E0))) return(0x03);

arg = (arg&(AL_C0));
if(!(arg^(AL_C0))) return(0x02);

arg = (arg&(AL_80));
if(!(arg^(AL_80))) return(0x80);

return(0x00);
}
