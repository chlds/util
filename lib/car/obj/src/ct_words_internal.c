/* **** Notes

Count words to the terminating null character.

Remarks:
Based on fn. ct_ars_internal (to count arguments)
*/


# define COUNT_DELIMITERS (0x03+(0x02*(0x03)))

# define LOCK (0x02)
# define PREPARE (0x01)
# define UNLOCK (0x00)

signed(__cdecl ct_words_internal(signed short(flag),signed(*retv),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char const HYPHEN = ('-');
static signed char const SP = (' ');
static signed char const HT = ('\t');
// e.g.,
static signed char const EXCLAMATION_MARK = ('!');
static signed char const PERIOD = ('.');
static signed char const COMMA = (',');
// also..
static signed char const REVERSE_SOLIDUS = ('\\');
static signed char const QUOTATION_MARK = ('\"');
static signed char const APOSTROPHE = ('\'');

auto signed char const delimiter[COUNT_DELIMITERS] = {
(signed char) HYPHEN,
(signed char) SP,
(signed char) HT,
// e.g.,
(signed char) EXCLAMATION_MARK,
(signed char) PERIOD,
(signed char) COMMA,
// also..
(signed char) REVERSE_SOLIDUS,
(signed char) QUOTATION_MARK,
(signed char) APOSTROPHE, // add or remove..
// or..
};

auto signed i;
auto signed char c;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);

if(!(*base)) return(0x00);

c = (*base);
i = (COUNT_DELIMITERS);

while(i) {
if(!(c^(*(--i+(delimiter))))) {
flag = (UNLOCK);
break;
}}

if(!flag) flag = (PREPARE);

else {
if(!(flag^(PREPARE))) {
flag = (LOCK);
(*retv)++;
}}

base++;

return(0x01+(ct_words_internal(flag,retv,base)));
}
