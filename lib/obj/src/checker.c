/* **** Notes

Check.
*/


signed(__cdecl checker(signed char(*lis),signed char(*argp))) {

auto signed char c;

if(!lis) return(0x00);
if(!argp) return(0x00);
if(!(*lis)) return(0x00);

c = (*argp);

if(!(c^(*lis))) return(0x00);

lis++;
return(0x01+(checker(lis,argp)));
}
