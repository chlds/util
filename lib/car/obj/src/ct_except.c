/* **** Notes

Count letters to the terminating null character except for a letter you'd select.
*/


signed(__cdecl ct_except(signed char(di), signed char(*base))) {

/* **** CODE/TEXT */
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(!(di^(*base))) {
base++;
return(ct_except(di, base));
}

base++;
return(1+(ct_except(di, base)));
}
