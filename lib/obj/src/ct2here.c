/* **** Notes

Count length of characters up to the current address.
*/


signed(__cdecl ct2here(signed char(*cur),signed char(*orig))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed r;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!orig) return(0x00);

if(cur<(orig)) return(0x00);

r = ct(orig);
p = (r+(orig));
if(p<(cur)) return(0x00);

r = ct(cur);
r = (-r+(ct(orig)));

return(r);
}
