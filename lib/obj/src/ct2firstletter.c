/* **** Notes

Count up to the first letter of one word on the current address.
*/


signed(__cdecl ct2firstletter(signed char(*cur),signed char(*orig))) {

auto signed r;

if(!cur) return(0x00);
if(!orig) return(0x00);

if(!(*cur)) return(0x00);
if(!(*orig)) return(0x00);

r = ct2here(cur,orig);
if(!r) return(0x00);

r = ct2firstletter_internal(r,cur);

return(r);
}
