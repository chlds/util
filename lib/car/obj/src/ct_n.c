/* **** Notes

Count to the terminating null address.
*/


signed int(__cdecl ct_n(signed char(**argp))) {

/* **** DATA
auto signed int const(QUANTUM) = (0x10);
auto signed int const(SNOOZE) = (0x04);
auto signed int const(DELAY) = (0x02*(QUANTUM));
//*/

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

argp++;
return(1+(ct_n(argp)));
}
