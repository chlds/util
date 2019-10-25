/* **** Notes

Count the arguments to the terminating null character.

Remarks:
Using along with fn. ct_ars2 or with fn. ct_ars.
*/


# define COUNT_DELIMITERS (0x03)

# define LOCK (0x02)
# define PREPARE (0x01)
# define UNLOCK (0x00)

signed(__cdecl ct_ars_internal(signed short(flag),signed(*retv),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char const HYPHEN = ('-');
static signed char const SP = (' ');
static signed char const HT = ('\t');

auto signed char const delimiter[COUNT_DELIMITERS] = {
(signed char) HYPHEN,
(signed char) SP,
(signed char) HT
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

return(0x01+(ct_ars_internal(flag,retv,base)));
}
