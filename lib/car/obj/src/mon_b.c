/* **** Notes

monitor
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl mon_b(signed(arg),pg_t(*argp),signed char(**argpp))) {
auto signed char *b;
auto pg_t *p;
auto coord_t coord;
auto signed i,r;
auto signed short flag;
auto signed short x,y;
auto signed char c;
auto signed short algn = (0x08);
auto signed short row = (0x14);
auto signed char *m = "No pg..";
auto signed char *(a[]) = {
"B","O","I","D",0x00,
};
if(!arg) return(0x01);
// if(!argp) return(0x00);
// if(!argpp) return(0x00);
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
co_br(~0x00);
/* monitor */
co_br(0x01);
printf("[%s] \n","PG");
if(argp) {
r = (OBJS);
while(r) {
p = (*(--r+(R(p,*argp))));
if(!p) b = m;
else b = (*(CLI_B+(R(b,*p))));
printf("%s: [%p] ",*(r+(a)),p);
cli_outs_b(algn,b);
co_br(0x01);
}}
/* also
co_br(0x01);
printf("[%s] \n","VA");
if(argpp) {
r = (OBJS);
while(r) {
b = (*(--r+(argpp)));
if(!b) b = ("Empty");
printf("%s: [%p] <",*(r+(a)),b);
cli_outs_b(algn,b);
printf("> ");
co_br(0x01);
}}
//*/
//* No VA
co_br(0x01);
printf("[%s] \n","No VA");
b = (*argpp);
if(!b) b = ("Empty");
printf("[%p] <",b);
cli_outs_b(algn,b);
printf("> ");
co_br(0x01);
//*/
/* come back */
r = coord_b(CLIH_OUT,CLIH_DIFF,&coord);
if(!r) r = cli_message(r,"<< Error at fn. coord_b() \n");
return(r);
}
