/* **** Notes

Dump a file in the binary
*/


# define DUAL_CONFIG_H
# define CAW_H
# define DUMP_H
# define STDIO_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl agent_dump_rr(signed(fd),void(*argp))) {

auto signed char **v;
auto fl_t *fl;
auto signed l,r;
auto signed d;
auto signed row;
auto signed line;
auto signed total;
auto signed short quickflag;
auto signed char c;
auto signed COLUMN = (0x10);
auto signed QUANTUM = (0x10);
auto signed SNOOZE = (0x08);
auto signed DELAY = (0x02*(QUANTUM));

if(fd<(0x00)) return(0x00);
if(!argp) return(0x00);

fl = (fl_t*) (argp);
quickflag = (*(CLI_BASE+(R(fd,*fl))));
v = (signed char(**)) (*(CLI_OFFSET+(R(v,*fl))));
if(DBG) printf("%s %Xh \n","File descriptor to read the file is:",fd);

/* Outputting */
AND(total,0x00);
AND(line,0x00);
XOR(l,l);
XOR(row,row);
NOT(row);

r = printf("%08d: ",line++);
while(0x01) {
r = rd_b(fd,&c,sizeof(c));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. rd_b()");
INC(r);
break;
}
// Successfully terminate
d = (signed) (0xFF&(c));
if(!r) {
INC(r);
break;
}
if(!(r^(EOF))) {
AND(r,0x00);
INC(r);
break;
}
row = (row+(r));
total = (total+(r));
/* Writing */
if(!(row^(0x08))) printf(" ");
/* Branching 1/2 */
if(row<(COLUMN)) {
if(v) {
if(d<(0x80)) printf(" %3s",*(d+(v)));
else printf(" %3X",d);
}
else printf(" %02X",d);
}
else {
if(!quickflag) sleep_beta(DELAY);
else {
if(l<(SNOOZE)) l++;
else {
XOR(l,l);
sleep_beta(DELAY);
}}
printf("\n");
printf("%08d: ",line++);
/* Branching 2/2 */
if(v) {
if(d<(0x80)) printf(" %3s",*(d+(v)));
else printf(" %3X",d);
}
else printf(" %02X",d);
XOR(row,row);
}}

*(CLI_INDEX+(R(fd,*fl))) = (line);
*(CLI_LEAD+(R(fd,*fl))) = (total);
AND(total,0x00);
AND(line,0x00);
fl = (0x00);

return(r);
}
