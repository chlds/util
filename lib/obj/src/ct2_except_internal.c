/* **** Notes

Count letters to the terminating null character except for a letter you'd select.

Remark:
Using along with fn. ct2_except.
*/


signed(__cdecl ct2_except_internal(signed char(cache), signed(*di), signed char(*base))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(!(cache^(*base))) {
}
else (*di)++;

base++;
return(1+(ct2_except_internal(cache, di, base)));
}
