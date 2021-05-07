/*

Decode bytes into a character based on UTF-16.

Check the leading byte for one Unicode character based on UTF-8:

.iiii.o*** (0xF0) that stands for the leading byte for a 4-byte character i.e.,
for a 21-bit-efficient character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32 bits,
.iiio.**** (0xE0) that stands for the leading byte for a 3-byte character i.e.,
for a 16-bit-efficient character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24 bits,
.iio*.**** (0xC0) that stands for the leading byte for a 2-byte character i.e.,
for an 11-bit-efficient character expressed in .iio*.**** .io**.**** (5+6) on 16 bits,
and
.io**.**** (0x80) that stands for a sequential byte i.e.,
for a 6-bit-efficient byte expressed in .io**.**** (6) on 8 bits for the n-byte characters.

Remarks:
Return the number of decoded bytes.
Expressed in UTF-8
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl decode_b(signed(*di),signed char(*si))) {

auto signed al[] = {
(signed) (0x00), // a one-byte character expressed in .o***.**** (7-bit)
(signed) (0x80), // a sequential byte with efficient 6 bits expressed in .io**.**** (6-bit) for the n-byte characters
(signed) (0xC0), // a two-byte character expressed in .iio*.**** .io**.**** (11-bit(5+6))
(signed) (0xE0), // a three-byte character expressed in .iiio.**** .io**.**** .io**.**** (16-bit(4+6+6))
(signed) (0xF0), // a four-byte character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (21-bit(3+6+6+6))
(signed) (0x00),
};

auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

i = nbytechar(*si);
if(!(0x80^(i))) return(0x00);
if(!i) return(i);

r = (signed) (*si);
r = (0xFF&(r));
r = (r&(~(*(al+(i)))));
*di = (r);
if(!(--i)) return(0x01);

si++;
r = decode_b_r(i,di,si);
if(!r) return(r);

r++;

return(r);
}
