/*

Check the leading byte:
.iiii.o*** that stands for a 4-byte character i.e., a 21-bit character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32 bits,
.iiio.**** that stands for a 3-byte character i.e., a 16-bit character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24 bits,
.iio*.**** that stands for a 2-byte character i.e., a 11-bit character expressed in .iio*.**** .io**.**** (5+6) on 16 bits,

Remarks:
Expressed in UTF-8
Use fn. decode2uni (and fn. decode2uni_internal) to read/write bytes mapped out of a storage.
Decode bytes in Unicode mapped on the RAM out of an SSD/HDD storage to characters in Unicode to read them on the console screen.
Use fn. encode2uni (and fn. encode2uni_internal) to save/store bytes mapped on the RAM into a storage.
Encode characters in Unicode decoded on the RAM to bytes in Unicode to store them into an SSD/HDD storage.
*/


signed(__cdecl decode2uni(signed *character,signed char *argp)) {

/* DATA, BSS and STACK */
auto signed const AH_8 = (0x80); // a sequential (.io**.****) byte for a n-byte character
auto signed const AH_C = (0xC0); // the leading (.iio*.****) byte for a 2-byte character
auto signed const AH_E = (0xE0); // the leading (.iiio.****) byte for a 3-byte character
auto signed const AH_F = (0xF0); // the leading (.iiii.o***) byte for a 4-byte character

auto signed ar[] = {
// (signed) 0x00, // a one-byte character expressed in .o***.**** (7-bit)
(signed) AH_8, // a sequential character followed for the n-byte character expressed in .io**.**** (6-bit)
(signed) AH_C, // a two-byte character expressed in .iio*.**** .io**.**** (11-bit(5+6))
(signed) AH_E, // a three-byte character expressed in .iiio.**** .io**.**** .io**.**** (16-bit(4+6+6))
(signed) AH_F, // a four-byte character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (21-bit(3+6+6+6))
(signed) 0x00,
};

auto signed i,r;

/* CODE/TEXT */
if(!character) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

i = nbytechar(*argp);

if(!(AH_8^(i))) {
printf("%s\n","<< Error at fn. nbytechar()");
return(i);
}

if(!i) {
printf("%s\n","<< Error at fn. nbytechar()");
return(i);
}

r = (signed) (*argp);

if(!(0x01^(i))) {
r = (r&(0x7F));
*character = (r);
return(0x01);
}

r = (r&(0x000000FF));
r = (r&(~(*(ar+(--i)))));
r = (r<<(0x06));

*character = (r);
argp++;
r = decode2uni_internal(i,character,argp);

r++;
return(r);
}
