/* **** Notes

monitor
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl mon_b(signed(arg),pg_t(*argp))) {
auto signed char *b;
auto pg_t *p;
auto coord_t coord;
auto signed i,r;
auto signed short flag;
auto signed short x,y;
auto signed char c;
auto signed short algn = (0x08);
auto signed short row = (0x08);
auto signed char *m = "No pg..";
auto signed char *(a[]) = {
"B","O","I","D",0x00,
};
if(!arg) return(0x01);
if(!argp) return(0x00);
if(!(coord_b(CLIH_IN,OBJS,&coord))) {
r = cli_message(0x00,"<< Error at fn. coord_b() \n");
return(0x00);
}
AND(x,0x00);
y = (row);
*(CLI_B+(R(y,coord))) = (y);
*(CLI_B+(R(x,coord))) = (x);
if(!(coord_b(CLIH_OUT,CLI_B,&coord))) {
r = cli_message(0x00,"<< Error at fn. coord_b() \n");
return(0x00);
}
/* output */
if(!(clear_rows(0x01))) return(0x00);
r = (0x50);
while(--r) _putch('*');
co_br(0x01);
/* monitor */
r = (OBJS);
while(r) {
p = (*(--r+(R(p,*argp))));
if(!p) b = m;
else b = (*(CLI_B+(R(b,*p))));
printf("%s: [%p] ",*(r+(a)),p);
cli_outs_b(algn,b);
co_br(0x01);
}
/* come back */
r = coord_b(CLIH_OUT,CLIH_DIFF,&coord);
if(!r) r = cli_message(r,"<< Error at fn. coord_b() \n");
return(r);
}
