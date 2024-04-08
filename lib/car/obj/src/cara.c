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


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cara(signed arg)) {
auto signed mask = (0xFF);
auto signed const AL_80 = (0x80); // a sequential (.io**.****) byte for a n-byte character
auto signed const AL_C0 = (0xC0); // the leading (.iio*.****) byte for a 2-byte character expressed in 11b (5+6)
auto signed const AL_E0 = (0xE0); // the leading (.iiio.****) byte for a 3-byte character expressed in 16b (4+6+6)
auto signed const AL_F0 = (0xF0); // the leading (.iiii.o***) byte for a 4-byte character expressed in 21b (3+6+6+6)
// auto signed const AL_F8 = (0xF8); // the leading (.iiii.io**) byte for a 5-byte character expressed in 26b (2+6+6+6+6)
// auto signed const AL_FC = (0xFC); // the leading (.iiii.iio*) byte for a 6-byte character expressed in 31b (1+6+6+6+6+6)
// auto signed const AL_FE = (0xFE); // the leading (.iiii.iiio) byte for a 7-byte character expressed in 36b (0+6+6+6+6+6+6)
AND(arg,mask);
if(!arg) return(arg);
if(!(AL_80&(arg))) return(0x01);
/*
AND(arg,AL_FE);
if(!(AL_FE^(arg))) return(0x07);
AND(arg,AL_FC);
if(!(AL_FC^(arg))) return(0x06);
AND(arg,AL_F8);
if(!(AL_F8^(arg))) return(0x05);
//*/
AND(arg,AL_F0);
if(!(AL_F0^(arg))) return(0x04);
AND(arg,AL_E0);
if(!(AL_E0^(arg))) return(0x03);
AND(arg,AL_C0);
if(!(AL_C0^(arg))) return(0x02);
return(0x80);
}
