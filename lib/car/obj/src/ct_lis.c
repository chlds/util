/* **** Notes

Count elements of a list.
*/


signed(__cdecl ct_lis(signed char(*lis))) {

if(!lis) return(0x00);
if(!(*lis)) return(0x00);

lis++;
return(0x01+(ct_lis(lis)));
}
