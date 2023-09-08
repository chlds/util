# define CAR_H
# include "./../../../config.h"

signed(__cdecl cvdt_txt_rr(signed char(*argp),signed(__cdecl*f)(signed char(**argv)))) {
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
return(cvdt_txt_rrr(sym,argp,f));
}
