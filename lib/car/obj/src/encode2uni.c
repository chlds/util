/*

Get Unicode bytes out of the character based on UTF-8.

Return the number of encoded bytes.

Check the leading byte for one Unicode character based on UTF-8:

.iiii.o*** (0xF0) that stands for the leading byte for a 4-byte character i.e.,
for a 21-bit-efficient character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (3+6+6+6) on 32 bits,
.iiio.**** (0xE0) that stands for the leading byte for a 3-byte character i.e.,
for a 16-bit-efficient character expressed in .iiio.**** .io**.**** .io**.**** (4+6+6) on 24 bits,
.iio*.**** (0xC0) that stands for the leading byte for a 2-byte character i.e.,
for an 11-bit-efficient character expressed in .iio*.**** .io**.**** (5+6) on 16 bits,
and
.io**.**** (0x80) that stands for a sequential byte i.e.,
for a 6-bit-efficient byte expressed in .io**.**** (6) on 8 bits for the n-byte characters.

Remarks:
Expressed in UTF-8
Use fn. decode2uni (and fn. decode2uni_internal) to read/write bytes mapped out of a storage.
Decode bytes in Unicode mapped on the RAM out of an SSD/HDD storage to characters in Unicode to read them on the console screen.
Use fn. encode2uni (and fn. encode2uni_internal) to save/store bytes mapped on the RAM into a storage.
Encode characters in Unicode decoded on the RAM to bytes in Unicode to store them into an SSD/HDD storage.
*/


signed(__cdecl encode2uni(signed(size),signed char(*array),signed(character))) {

/* DATA, BSS and STACK */
static signed const UTF_16 = (0xFFFF);
static signed const THRESHOLD = (0x01+(0x04));

auto signed al[] = {
(signed) (0x00), // a one-byte character expressed in .o***.**** (7-bit)
(signed) (0x80), // a sequential byte with efficient 6 bits expressed in .io**.**** (6-bit) for the n-byte characters
(signed) (0xC0), // a two-byte character expressed in .iio*.**** .io**.**** (11-bit(5+6))
(signed) (0xE0), // a three-byte character expressed in .iiio.**** .io**.**** .io**.**** (16-bit(4+6+6))
(signed) (0xF0), // a four-byte character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (21-bit(3+6+6+6))
(signed) (0x00),
};

auto signed i,r;
auto signed char c;

/* CODE/TEXT */
if(!array) return(0x00);
if(size<(THRESHOLD)) return(0x00);

r = ncharbyte(character);
if(!r) {
printf("%s\n","<< Error at fn. ncharbyte()");
return(r);
}

*(array+(r)) = (0x00);

if(!(0x01^(r))) {
character = (character&(0x7F));
*array = (signed char) (character);
return(0x01);
}

character = (character&(UTF_16));

r = encode2uni_internal(r,size,array,character);
if(!r) {
printf("%s\n","<< Error at fn. encode2uni_internal()");
return(0x00);
}

c = (*array);
*array = (c|(*(al+(r))));

return(r);
}
