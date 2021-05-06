/*

Encode a character into bytes based on UTF-8.

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
Return the number of encoded bytes.
Expressed in UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl encode_w(signed char(**di),signed(si))) {

auto signed utf_16 = (0xFFFF);
auto signed al[] = {
(signed) (0x00), // a one-byte character expressed in .o***.**** (7-bit)
(signed) (0x80), // a sequential byte with efficient 6 bits expressed in .io**.**** (6-bit) for the n-byte characters
(signed) (0xC0), // a two-byte character expressed in .iio*.**** .io**.**** (11-bit(5+6))
(signed) (0xE0), // a three-byte character expressed in .iiio.**** .io**.**** .io**.**** (16-bit(4+6+6))
(signed) (0xF0), // a four-byte character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (21-bit(3+6+6+6))
(signed) (0x00),
};

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed char c;

if(!di) return(0x00);
if(*di) return(0x00);

r = ncharbyte(si);
if(!r) {
printf("%s \n","<< Error at fn. ncharbyte()");
return(r);
}

b = (0x00);
if(!(concatenate(r,&b,0x00))) return(0x00);

*(r+(b)) = (0x00);
if(!(0x01^(r))) {
si = (0x7F&(si));
*b = (signed char) (si);
*di = (b);
b = (0x00);
return(0x01);
}

si = (utf_16&(si));

AND(flag,0x00);
r = encode_w_r(r,b,si);
if(!r) {
printf("%s \n","<< Error at fn. encode_w_r()");
OR(flag,0x01);
}

if(flag) {
embed(0x00,b);
if(b) rl(b);
b = (0x00);
*di = (b);
return(0x00);
}

c = (*b);
*b = (c|(*(al+(r))));
*di = (b);
b = (0x00);

return(r);
}
