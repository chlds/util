/* **** Notes

Exchange the DI and the SI
*/


signed int(__cdecl sw(signed int(*di), signed int(*si))) {

/* **** DATA
auto signed int const(QUANTUM) = (0x10);
auto signed int const(SNOOZE) = (0x04);
auto signed int const(DELAY) = (0x02*(QUANTUM));
//*/

auto signed int(cache);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

cache = (*di);
*di = (*si);
*si = (cache);

return(1);
}
