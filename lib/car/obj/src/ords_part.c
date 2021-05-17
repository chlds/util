/* **** Notes

Check the ordinal number.
//*/


signed(__cdecl ords_part(signed char(**di),signed char(*si))) {

auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

if(!(*di)) return(0x00);

r = cmpr_part(&i,si,*di);
if(!i) return(0x00);

di++;

return(0x01+(ords_part(di,si)));
}
