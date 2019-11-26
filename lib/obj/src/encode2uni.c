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


signed(__cdecl encode2uni(signed char *arr,signed arr_size,signed character)) {

/* DATA, BSS and STACK */
auto signed const THRESHOLD = (0x01+(0x04));
auto signed const SEQ_MASK = (0x3F); // the terminating 6-bit (.oo.ii.iiii) mask for a sequential character to an n-byte character
auto signed const SEQ_FLAG = (0x80); // the leading 2-bit (.io.oo.oooo) flag for a sequential character to an n-byte character

auto signed al[] = {
// (signed) (0x00), // a one-byte character expressed in .o***.**** (7-bit)
(signed) (0x80), // a sequential byte with efficient 6 bits expressed in .io**.**** (6-bit) for the n-byte characters
(signed) (0xC0), // a two-byte character expressed in .iio*.**** .io**.**** (11-bit(5+6))
(signed) (0xE0), // a three-byte character expressed in .iiio.**** .io**.**** .io**.**** (16-bit(4+6+6))
(signed) (0xF0), // a four-byte character expressed in .iiii.o*** .io**.**** .io**.**** .io**.**** (21-bit(3+6+6+6))
(signed) (0x00),
};

auto signed i,r;
auto signed char c;

/* CODE/TEXT */
if(!arr) return(0x00);
if(arr_size<(THRESHOLD)) return(0x00);

i = ncharbyte(character);

if(!i) {
printf("%s\n","<< Error at fn. ncharbyte()");
return(i);
}

*(arr+(i)) = (0x00);
r = (signed) (character);

if(!(0x01^(i))) {
r = (r&(0x7F));
*arr = (signed char) (r);
return(0x01);
}

r = (r&(SEQ_MASK)); // i.e., a 6-bit mask (.ooii.iiii(0x3F))
r = (r|(SEQ_FLAG)); // i.e., a sequential byte for an n-byte character (.iooo.oooo(0x80))
*(arr+(--i)) = (signed char) (r);
character = (character>>(0x06));

r = encode2uni_internal(i,arr,arr_size,character);

c = (*arr);
*arr = (c|(*(al+(r))));

r++;
return(r);
}
