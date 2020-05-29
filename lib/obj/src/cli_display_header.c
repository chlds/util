/* **** Notes

Display the two-row header.

Remarks:
EOL with CR (0x0D) and LF (0x0A)
Along with C library
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_display_header(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *(day_of_the_week[]) = {
(signed char(*)) ("SUNDAY"),
(signed char(*)) ("MONDAY"),
(signed char(*)) ("TUESDAY"),
(signed char(*)) ("WEDNESDAY"),
(signed char(*)) ("THURSDAY"),
(signed char(*)) ("FRIDAY"),
(signed char(*)) ("SATURDAY"),
(signed char(*)) (0x00)
};

auto signed char *(mon[]) = {
(signed char(*)) ("JANUARY"),
(signed char(*)) ("FEBRUARY"),
(signed char(*)) ("MARCH"),
(signed char(*)) ("APRIL"),
(signed char(*)) ("MAY"),
(signed char(*)) ("JUNE"),
(signed char(*)) ("JULY"),
(signed char(*)) ("AUGUST"),
(signed char(*)) ("SEPTEMBER"),
(signed char(*)) ("OCTOBER"),
(signed char(*)) ("NOVEMBER"),
(signed char(*)) ("DECEMBER"),
(signed char(*)) (0x00)
};

auto struct tm *tp;
auto time_t t;

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

t = time(&t);
if(!(t^(~(0x00)))) {
printf("%s\n","<< Error at fn. time()");
return(0x00);
}

tp = localtime(&t);
if(!tp) {
printf("%s\n","<< Error at fn. localtime()");
return(0x00);
}

/* The two-row header */
printf("%s %d %s %d",*(day_of_the_week+(R(tm_wday,*tp))),R(tm_mday,*tp),*(mon+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));

if(!(CLI_DEFAULT^(R(display_header,R(config,*argp))))) {
printf("%s%s"," | ","Ctrl-Q to quit");
printf("%s%s"," | ","UTF-8");
printf("%s%s%d"," | ","Tab: ",R(align_tab,R(config,*argp)));
flag = (0x00);
if(!(LINEBREAK_CRLF^(R(linebreak_form,R(config,*argp))))) {
printf("%s%s"," | ","EOL: CRLF (0x0D and 0x0A)");
flag++;
}
if(!(LINEBREAK_LF^(R(linebreak_form,R(config,*argp))))) {
printf("%s%s"," | ","EOL: LF (0x0A)");
flag++;
}
if(!flag) {
printf("%s\n","<< Set the linebreak form at (R(linebreak_form,R(config,*argp..");
return(0x00);
}}

return(0x01);
}
