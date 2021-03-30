/*

Check the leading byte:
.iiii.o*** that stands for a 4-byte character i.e., a 21-bit character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32 bits,
.iiio.**** that stands for a 3-byte character i.e., a 16-bit character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24 bits,
.iio*.**** that stands for a 2-byte character i.e., a 11-bit character expressed in .iio*.**** .io**.**** (5+6) on 16 bits,

Remarks:
Expressed in UTF-8
To read: Use fn. decode2uni (and fn. decode2uni_internal)
To write: Use fn. encode2uni (and fn. encode2uni_internal)
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl encode2uni_internal(signed(arg),signed char(*di),signed(si))) {

/* DATA, BSS and STACK */
auto signed const SEQ_FLAG = (0x80); // the leading 2-bit (.io.oo.oooo) flag for a sequential character to an n-byte character
auto signed const SEQ_MASK = (0x3F); // the terminating 6-bit (.oo.ii.iiii) mask for a sequential character to an n-byte character
auto signed i,r;

/* CODE/TEXT */
if(arg<(0x01)) return(0x00);
if(!di) return(0x00);

r = (si);
r = (SEQ_MASK&(r)); // i.e., a 6-bit mask (.ooii.iiii(0x3F))
r = (SEQ_FLAG|(r)); // i.e., a sequential byte for an n-byte character (.iooo.oooo(0x80))

*(--arg+(di)) = (signed char) (r);

SHR(si,0x06);

return(0x01+(encode2uni_internal(arg,di,si)));
}
