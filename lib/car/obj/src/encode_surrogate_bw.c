/*

Get Unicode bytes out of the character based on UTF-8.

Remarks:
Return the number of encoded bytes.
*/


# define CL_MACRO

# include "../../../incl/cl.h"

signed(__cdecl encode_surrogate_bw(signed(size),signed char(*array),signed short(second),signed short(first))) {

/* DATA, BSS and STACK */
static signed const UTF_16 = (0xFFFF);
static signed const THRESHOLD = (0x01+(0x04));
auto signed i,r;
auto signed short surrog;
auto signed char c;

/* CODE/TEXT */
if(!array) return(0x00);
if(size<(THRESHOLD)) return(0x00);

second = (second&(UTF_16));
first = (first&(UTF_16));

*(0x03+(array)) = (0x00);
surrog = (second);
AND(surrog,0x3F); // 6-bit range
OR(*(0x03+(array)),surrog);
OR(*(0x03+(array)),0x80);

*(0x02+(array)) = (0x00);
surrog = (second);
SHR(surrog,0x06);
AND(surrog,0x0F); // 4-bit range
OR(*(0x02+(array)),surrog);
surrog = (first);
AND(surrog,0x03); // 2-bit range
SHL(surrog,0x04);
OR(*(0x02+(array)),surrog);
OR(*(0x02+(array)),0x80);

*(0x01+(array)) = (0x00);
surrog = (first);
SHR(surrog,0x02);
AND(surrog,0x3F); // 6-bit range
ADD(surrog,0x10); // Additional
OR(*(0x01+(array)),surrog);
OR(*(0x01+(array)),0x80);

*(0x00+(array)) = (0x00);
surrog = (first);
SHR(surrog,0x08);
AND(surrog,0x03); // 2-bit range
OR(*(0x00+(array)),surrog);
OR(*(0x00+(array)),0xF0);

return(0x04);
}
