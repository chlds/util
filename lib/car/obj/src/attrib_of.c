/* **** Notes

Check the attributes of a directory or of a file
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl attrib_of(signed(cache),signed(*di),signed char(**si))) {

auto signed r;

// if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

printf(" {");

r = attrib_of_r(cache,di,si);

printf("} ");

return(r);
}
