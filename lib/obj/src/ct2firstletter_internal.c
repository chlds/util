/* **** Notes

Count up to the first letter of one word on the current address.
*/


signed(__cdecl ct2firstletter_internal(signed(rest),signed char(*cur))) {

static signed char const(HYPHEN) = ('-');
static signed char const(SP) = (' ');
static signed char const(HT) = ('\t');

if(rest<(0x00)) return(0x00);
if(!rest) return(0x00);
if(!cur) return(0x00);
// if(!(*cur)) return(0x00);

--cur;

if(!(HYPHEN^(*cur))) return(0x00);
if(!(SP^(*cur))) return(0x00);
if(!(HT^(*cur))) return(0x00);

return(0x01+(ct2firstletter_internal(--rest,cur)));
}
