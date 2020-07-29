/* **** Notes

Check the attributes of a directory or of a file
*/


# include <stdio.h>

signed(__cdecl attrib_of(unsigned(cache), unsigned(*di), signed char(**si))) {

/* **** CODE/TEXT */
// if(!cache) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*di)) return(0x00);
if(!(*si)) return(0x00);

/* Monitor
printf("\n");
printf("%s%Xh\n", ("cache is: "), (cache));
printf("%s%p\n", ("di is: "), (di));
printf("%s%p\n", ("si is: "), (si));
printf("%s%Xh\n", ("*di is: "), (*di));
printf("%s%s\n", ("*si is: "), (*si));
//*/

if(cache&(*di)) printf("%s%s", "  ", *si);

di++;
si++;
return (1+(attrib_of(cache, di, si)));
}
