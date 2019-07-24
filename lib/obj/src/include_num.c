/* **** Notes

Check numerals.

Remarks:
Based on the decimal notation
*/


signed(__cdecl include_num(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

flag = (0x00);

r = include_num_internal(&flag,argp);

if(!r) {
printf("%s", "<< Error at fn. include_num_internal()");
return(0x00);
}

return(flag);
}
