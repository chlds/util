/* **** Notes

Wrap.

Remarks:
Select a created, loaded, mapped or previous object into the specified device context.
The new object replaces the previous object of the same type.
*/


# include "./incl/config.h"

void *(__cdecl select_object_beta(void(*di/* dc */),void(*si/* obj */))) {

auto void *v;

v = (void*) SelectObject(di,si);
if(EQ(HGDI_ERROR,v)) {
printf("%s \n","<< Error at fn. SelectObject with HGDI_ERROR"); // region only
v = (0x00);
}

return(v);
}
