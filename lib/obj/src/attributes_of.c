/* **** Notes

Check the attributes of a directory or of a file

*/


# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"
# include <windows.h>

# define BUFF (0x300)
# define N (0x03)


char signed(__cdecl attributes_of(int unsigned(cache), int unsigned(*di), char signed(**si))) {

/* **** **** CODE/TEXT */
// if(!cache) return(NIL);
if(!di) return(NIL);
if(!si) return(NIL);
if(!(*di)) return(NIL);
if(!(*si)) return(NIL);

/* Monitor
printf("\n");
printf("%s%Xh\n", ("cache is: "), (cache));
printf("%s%p\n", ("di is: "), (di));
printf("%s%p\n", ("si is: "), (si));
printf("%s%Xh\n", ("*di is: "), (*di));
printf("%s%s\n", ("*si is: "), (*si));
//*/

if(cache&(*di)) printf("  %s", (*si));

(di++);
(si++);

return (1+(attributes_of(cache, (di), (si))));
}
