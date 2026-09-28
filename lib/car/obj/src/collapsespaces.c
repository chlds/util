# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl collapsespaces(signed char(*arg))) {
if(!deref(arg)) return(arg);
if(!(EQ(0x20,deref(arg)))) return(ante(collapsespaces(++arg)));
if(!(EQ(0x20,deref(post(arg))))) return(ante(collapsespaces(++arg)));
return(collapsespaces(shed(arg)));
}
