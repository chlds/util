/* **** Notes

Convert to an unsigned or signed interger.

radix: Put the radix at.
di: Put the address to retrieve the unsigned or signed number at.
base: Put the leading address for the letters at.

Now not implemented..
commentary of the flag:
signed: 0x0100 e.g., signed hexa-decimal 0x0110, signed decimal 0x010A, signed octal 0x0108, signed binary 0x0102
unsigned: 0x0000 e.g., unsigned hexa-decimal 0x0010, unsigned decimal 0x000A, unsigned octal 0x0008, unsigned binary 0x0002
//*/


signed int(__cdecl cv_i(signed short(radix), signed int(*di), signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed int(d) = (0x00);
static signed short(flag) = (0x00);

auto signed int const(LIMIT) = (3600);

auto signed char const(*table) = ("0123456789ABCDEF");
auto signed char const(MINUS) = ('-');

auto signed short(HEXA) = (0x10);
auto signed short(DECI) = (0x0A);
auto signed short(BINA) = (0x02);

auto signed int(r);
auto signed char(c);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);
if(radix<(BINA)) radix = (DECI);
if(HEXA<(radix)) radix = (HEXA);

if(!(*base)) {
if(!(flag^(0x02))) {
d = (0x01+(~(d)));
*di = (d);
}
else {
*di = (d);
}
d = (d^(d));
flag = (flag^(flag));
return(0x00);
}

if(!flag) {
flag = (flag|(0x01));
if(!(MINUS^(*base))) {
if(!(MINUS^(*(base+(0x01))))) {
}
else {
flag = (flag^(flag));
flag = (flag|(0x02));
}}}

c = (*base);
r = tablescan(c, table);

if(r<(radix)) d = (r+radix*(d)) /* % LIMIT */ ;

base++;
return(1+(cv_i(radix, di, base)));
}
