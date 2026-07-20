# define CAR_H
# include <stdlib.h>
# include "./../../../config.h"

void *(__cdecl dealloc(void(*argp))) {
if(!argp) return(argp);
free(argp);
argp = (0x00);
return(argp);
}
