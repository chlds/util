/* **** Notes

Retrieve the leading address after wrapping words.

Remarks:
Add support for Unicode characters in UTF-8.
*/


signed(__cdecl cli_wrap_internal(signed char(**wrap),signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
static signed char const HT = ('\t');
static signed char const LF = ('\n');
static signed char const CR = ('\r');
static signed char const SP = (' ');
static signed char const HYPHEN = ('-');

auto signed char symbol[] = {
(HYPHEN),
(SP),
(CR),
(LF),
(HT),
(0x00),
};

auto signed long long sll;
auto signed c,i,l,r;

/* **** CODE/TEXT */
if(!wrap) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
if(di<(si)) return(0x00);

sll = (signed long long) (di);
if(!(sll^((signed long long) si))) return(0x00);

//* Support for Unicode characters
r = decode2uni(&c,si);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(r);
}

i = (0x00);
while(*(symbol+(i))) {
if(!(c^((signed) *(symbol+(i++))))) {
*wrap = (r+(si));
break;
}}

si = (r+(si));
return(0x01+(cli_wrap_internal(wrap,di,si)));
}
