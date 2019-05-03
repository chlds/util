/* **** Notes

Exchange the DI and the SI
*/


signed(__cdecl sw(signed(*di), signed(*si))) {

/* **** DATA, BSS and DATA
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));
//*/

auto signed(cache);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

cache = (*di);
*di = (*si);
*si = (cache);

return(0x01);
}
