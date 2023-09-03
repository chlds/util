# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvatt_rr(signed char(*argp),signed(__cdecl*f)(signed char(**argv)))) {
auto signed char *(sym[]) = {
"!",
"\"",
"#",
"$",
"%",
"&",
"'",
"(",
")",
"*",
"+",
",",
"-",
".",
"/",
"@",
"[",
"\\",
"]",
"^",
"_",
"`",
"{",
"|",
"}",
"~",
0x00,
};
return(cvatt_rrr(sym,argp,f));
}
