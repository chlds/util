/*

Check the leading byte:
.iiii.o*** that stands for a 4-byte character i.e., a 21-bit character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32b,
.iiio.**** that stands for a 3-byte character i.e., a 16-bit character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24b,
.iio*.**** that stands for a 2-byte character i.e., a 11-bit character expressed in .iio*.**** .io**.**** (5+6) on 16b,

Remarks:
Expressed in UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl encode_d_r(signed(arg),signed char(*di),signed(si))) {
auto signed r;
auto signed seq_flag = (0x80); // the leading 2-bit (.io.oo.oooo) flag for a sequential character to an n-byte character
auto signed seq_mask = (0x3F); // the terminating 6-bit (.oo.ii.iiii) mask for a sequential character to an n-byte character
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
r = (si);
r = (seq_mask&(r)); // i.e., a 6b mask (.ooii.iiii(0x3F))
r = (seq_flag|(r)); // i.e., a sequential byte for an n-byte character (.iooo.oooo(0x80))
*(--arg+(di)) = (signed char) (r);
SHR(si,0x06);
return(0x01+(encode_d_r(arg,di,si)));
}
