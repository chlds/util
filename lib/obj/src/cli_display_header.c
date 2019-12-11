/* **** Notes

Display the two-row header.

Remarks:
EOL with CR (0x0D) and LF (0x0A)
Along with C library
*/


# define R(D,S) (S).D

# include <time.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_display_header(CLI_STAT(*argp))) {

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
if(R(file,*argp)) printf("%s%s"," | ",R(file,*argp));
printf("%s%s"," | ","Ctrl-Q to quit");
printf("%s%s"," | ","Based on UTF-8");
if(!(LINEBREAK_CRLF^(R(linebreak_form,*argp)))) printf("%s%s"," | ","EOL with CR (0x0D) and LF (0x0A)");
else printf("%s%s"," | ","EOL with LF (0x0A)");
printf("\n");
printf("\n");

return(0x01);
}
