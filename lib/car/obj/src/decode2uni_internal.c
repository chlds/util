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

signed(__cdecl decode2uni_internal(signed(nbyte),signed(*character),signed char(*argp))) {

/* DATA, BSS and STACK */
auto signed const SEQ_MASK = (0x3F); // the 6-bit (.ooii.iiii) mask for a sequential character to an n-byte character
auto signed i,r;

/* CODE/TEXT */
if(nbyte<(0x01)) return(0x00);
if(!character) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = (signed) (*argp);
r = (SEQ_MASK&(r));
i = (signed) (*character);
i = (i<<(0x06));
i = (r|(i));
*character = (i);
argp++;

return(0x01+(decode2uni_internal(--nbyte,character,argp)));
}
