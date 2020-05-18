/*

Retrieve the leading address to a previous word.

Along with C library

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_r_beta and fn. cli_ctrl_b_beta.
*/


# define CL_MACRO

# include <stdio.h>
# include "../../../incl/cl.h"
# include "../../../incl/cli_sym.h"

signed(__cdecl cue_backward_internal(signed short(flag),signed char(**retrv),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char HT = ('\t');
static signed char SP = (' ');

auto signed char delim[] = {
SYM_EXCLAMATION_MARK,
SYM_QUOTATION_MARK,
SYM_NUMBER_SIGN,
SYM_DOLLAR_SIGN,
SYM_PERCENT_SIGN,
SYM_AMPERSAND,
SYM_APOSTROPHE,
SYM_LEFT_PARENTHESIS,
SYM_RIGHT_PARENTHESIS,
SYM_ASTERISK,
SYM_PLUS_SIGN,
SYM_COMMA,
SYM_HYPHEN_MINUS,
SYM_FULL_STOP,
SYM_SOLIDUS,
SYM_COLON,
SYM_SEMICOLON,
SYM_LESS_THAN_SIGN,
SYM_EQUALS_SIGN,
SYM_GREATER_THAN_SIGN,
SYM_QUESTION_MARK,
SYM_COMMERCIAL_AT,
SYM_LEFT_SQUARE_BRACKET,
SYM_REVERSE_SOLIDUS,
SYM_RIGHT_SQUARE_BRACKET,
SYM_CIRCUMFLEX_ACCENT,
SYM_LOW_LINE,
SYM_GRAVE_ACCENT,
SYM_LEFT_CURLY_BRACKET,
SYM_VERTICAL_LINE,
SYM_RIGHT_CURLY_BRACKET,
SYM_TILDE,
0x00,
};

auto signed short NON_DELIM = (0x20);
auto signed short DELIM = (0x10);

auto signed char *p;
auto signed long long ll;
auto signed i,l,r;
auto signed short fini;

/* **** CODE/TEXT */
if(!retrv) return(0x00);
if(!base) return(0x00);

p = (*retrv);
if(p<(base)) return(0x00);

ll = (signed long long) (p);
if(!(ll^((signed long long) base))) return(0x01);

while(0x01) {
--p;
r = nbytechar(*p);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
if(0x80^(r)) break;
}

*retrv = (p);

r = decode2uni(&i,p);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}

if(!(i^((signed) HT))) return(0x01);

fini = (0x00);

if(!(i^((signed) SP))) {
OR(flag,0x01);
if(0x01<(flag)) fini++;
}

else {
l = (0x00);
while(*(delim+(l))) {
if(!(i^((signed) *(delim+(l))))) {
OR(flag,DELIM);
break;
}
l++;
}
if(!(*(delim+(l)))) OR(flag,NON_DELIM);
if(NON_DELIM<(-0x01+(flag))) fini++;
}

if(fini) {
*retrv = (r+(p));
return(0x00);
}

return(0x01+(cue_backward_internal(flag,retrv,base)));
}
