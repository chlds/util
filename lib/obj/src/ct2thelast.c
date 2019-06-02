/* **** Notes

Count to the last letter of the word.
*/


signed(__cdecl ct2thelast(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(WS) = (' ');
auto signed char const(HT) = ('\t');

/* Or..
auto signed char const(WS) = (0x20);
auto signed char const(HT) = (0x09);
//*/

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(WS^(*argp))) return(0x00);
if(!(HT^(*argp))) return(0x00);

argp++;
return(1+(ct2thelast(argp)));
}
