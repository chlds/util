/* **** Notes

Retrieve the leading address after wrapping words.

Remarks:
Add support for Unicode characters in UTF-8.
*/


signed(__cdecl cli_wrap(signed char(**wrap),signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed long long sll;
auto signed r;

/* **** CODE/TEXT */
if(!wrap) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(di<(si)) return(0x00);

sll = (signed long long) (di);
if(!(sll^((signed long long) si))) return(0x00);

*wrap = (si);

r = cli_wrap_internal(wrap,di,si);
if(!r) {
printf("%s\n","<< Error at fn. cli_wrap_internal()");
return(0x00);
}

return(r);
}
