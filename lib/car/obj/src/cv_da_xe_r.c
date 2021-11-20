/* **** Notes

Convert into a signed double word out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_da_xe_r(signed short(radix),signed char(*table),signed(*di),signed char(*si))) {

auto signed i,r;
auto signed short flag;
auto signed char c;
auto signed bi_unit[] = {
1024*(1024*(1024*(1024))),
1024*(1024*(1024)),
1024*(1024),
1024,
0x00,
};
auto signed char *(bi_units[]) = {
"T","G","M","K",0x00,
};
auto signed unit[] = {
1000000000000,
1000000000,
1000000,
1000,
0x00,
};
auto signed char *(units[]) = {
"t","g","m","k",0x00,
};

if(!table) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

c = (*si);
r = ord(table,c);
if(r<(radix)) *di = (r+(radix*(*di))) /* % LIMIT */ ;

r = ords(units,si);
if(r<(ct_v(units))) {
r = (*(unit+(r))) /* % LIMIT */ ;
*di = (r*(*di)) /* % LIMIT */ ;
}

r = ords(bi_units,si);
if(r<(ct_v(bi_units))) {
r = (*(bi_unit+(r))) /* % LIMIT */ ;
*di = (r*(*di)) /* % LIMIT */ ;
}

si++;

return(0x01+(cv_da_xe_r(radix,table,di,si)));
}
