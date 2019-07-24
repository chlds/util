/* **** Notes

Check numerals.

Remarks:
Based on the decimal notation
*/


signed(__cdecl include_num_internal(signed short(*flagp), signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const(*table) = ("0123456789");
auto signed(i), (r);
auto signed char(c);

/* **** CODE/TEXT */
if(!flagp) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

c = (*argp);
i = (i^(i));

while(0x01) {
if(!(*(i+(table)))) break;
if(!(c^(*(i+(table))))) {
*flagp = (0x01);
return(0x01);
}
i++;
}

argp++;
return(0x01+(include_num_internal(flagp,argp)));
}
