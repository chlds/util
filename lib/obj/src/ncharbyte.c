/*

Check the leading byte:
.iiii.o*** that stands for a 4-byte character i.e., a 21-bit character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32 bits,
.iiio.**** that stands for a 3-byte character i.e., a 16-bit character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24 bits,
.iio*.**** that stands for a 2-byte character i.e., a 11-bit character expressed in .iio*.**** .io**.**** (5+6) on 16 bits,

Remarks:
Return the number of bytes for a character
Based on UTF-8
*/


signed(__cdecl ncharbyte(signed arg)) {

auto signed const A_1B = (0x0000007F); // a 7-bit (.oooo.oooo .oooo.oooo .oooo.oooo .oiii.iiii) character expressed in 1 byte
auto signed const A_2B = (0x000003FF); // an 11-bit (.oooo.oooo .oooo.oooo .oooo.oiii .iiii.iiii) character expressed in 2 bytes
auto signed const A_3B = (0x0000FFFF); // a 16-bit (.oooo.oooo .oooo.oooo .iiii.iiii .iiii.iiii) character expressed in 3 bytes
auto signed const A_4B = (0x001FFFFF); // a 21-bit (.oooo.oooo .oooi.iiii .iiii.iiii .iiii.iiii) character expressed in 4bytes
auto signed r;

r = (arg);

r = (r&(~(A_1B)));
if(!r) return(0x01);

r = (r&(~(A_2B)));
if(!r) return(0x02);

r = (r&(~(A_3B)));
if(!r) return(0x03);

r = (r&(~(A_4B)));
if(!r) return(0x04);

return(0x00);
}
