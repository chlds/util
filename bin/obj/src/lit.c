/* **** Notes

Display one line or about 1024 bytes in UTF-8.
*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *b;
auto signed char *path;
auto signed offset;
auto signed i,r;
auto signed range = (0x04*(0x100));
auto signed short align = (0x08);
auto signed short cols = (80);
auto signed char *sym = (0x00);

if(argc<(0x02)) {
printf("\n");
printf("  %s \n","Display one line or about 1024 bytes in UTF-8.");
printf("\n");
printf("  %s \n","lit <file> [offset]");
return(0x00);
}

if(EQ(0x02,argc)) AND(offset,0x00);

if(0x02<(argc)) {
b = (*(argv+(argc+(~0x00))));
r = cv_da_xe(0x0A,&i,b);
if(!r) AND(i,0x00);
if(i<(0x00)) AND(i,0x00);
offset = (i);
}

b = (0x00);
path = (*(argv+(0x01)));
r = ld_b(range,offset,&b,path);
if(!r) printf("%s \n","<< Error at fn. ld_b()");

if(r) {
out_lines(align,cols,sym,b);
printf("\n");
printf("[%d %s] \n",r,"bytes read");
printf("[%d %s] \n",offset,"bytes offset");
}

embed_l(0x00,b);
if(b) rl(b);
b = (0x00);

return(0x00);
}
