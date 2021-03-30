/*

Get Unicode bytes out of the character based on UTF-8.

Remarks:
Return the number of encoded bytes.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl encode_surrogate_bw(signed char(**di),signed short(second),signed short(first))) {

/* DATA, BSS and STACK */
auto signed const UTF_16 = (0xFFFF);
auto signed char *b;
auto signed i,r;
auto signed short surrog;

/* CODE/TEXT */
if(!di) return(0x00);
if(*di) return(0x00);

b = (0x00);
if(!(concatenate(0x04,&b,0x00))) return(0x00);

*(0x04+(b)) = (0x00);
second = (UTF_16&(second));
first = (UTF_16&(first));

*(0x03+(b)) = (0x00);
surrog = (second);
AND(surrog,0x3F); // 6-bit range
OR(*(0x03+(b)),surrog);
OR(*(0x03+(b)),0x80);

*(0x02+(b)) = (0x00);
surrog = (second);
SHR(surrog,0x06);
AND(surrog,0x0F); // 4-bit range
OR(*(0x02+(b)),surrog);
surrog = (first);
AND(surrog,0x03); // 2-bit range
SHL(surrog,0x04);
OR(*(0x02+(b)),surrog);
OR(*(0x02+(b)),0x80);

*(0x01+(b)) = (0x00);
surrog = (first);
SHR(surrog,0x02);
AND(surrog,0x3F); // 6-bit range
ADD(surrog,0x10); // Additional
OR(*(0x01+(b)),surrog);
OR(*(0x01+(b)),0x80);

*(0x00+(b)) = (0x00);
surrog = (first);
SHR(surrog,0x08);
AND(surrog,0x03); // 2-bit range
OR(*(0x00+(b)),surrog);
OR(*(0x00+(b)),0xF0);

*di = (b);
b = (0x00);

return(0x04);
}
