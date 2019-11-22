/*

Check the leading byte:
.iiii.o*** that stands for a 4-byte character i.e., a 21-bit character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32 bits,
.iiio.**** that stands for a 3-byte character i.e., a 16-bit character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24 bits,
.iio*.**** that stands for a 2-byte character i.e., a 11-bit character expressed in .iio*.**** .io**.**** (5+6) on 16 bits,

Remarks:
Expressed in UTF-8
*/


signed(__cdecl nbytechar(signed char arg)) {

auto signed char const AH_8 = (0x80); // a sequential (.io**.****) byte for a n-byte character
auto signed char const AH_C = (0xC0); // the leading (.iio*.****) byte for a 2-byte character expressed in 11 (5+6) bits
auto signed char const AH_E = (0xE0); // the leading (.iiio.****) byte for a 3-byte character expressed in 16 (4+6+6) bits
auto signed char const AH_F = (0xF0); // the leading (.iiii.o***) byte for a 4-byte character expressed in 21 (3+6+6+6) bits
auto signed char c;

c = (arg);
c = (c&(AH_8));
if(!c) return(0x01);

arg = (arg&(AH_F));
if(!(arg^(AH_F))) return(0x04);

arg = (arg&(AH_E));
if(!(arg^(AH_E))) return(0x03);

arg = (arg&(AH_C));
if(!(arg^(AH_C))) return(0x02);

arg = (arg&(AH_8));
if(!(arg^(AH_8))) return(0x80);

return(0x00);
}
