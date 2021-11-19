/* **** Notes

Display one line or about 512 bytes in UTF-8.
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
auto signed range = (0x02*(0xFF));

if(argc<(0x02)) {
printf("\n");
printf("  %s \n","Display one line or about 512 bytes in UTF-8.");
printf("\n");
printf("  %s \n","lit <file> [offset]");
return(0x00);
}

if(EQ(0x02,argc)) AND(offset,0x00);

if(0x02<(argc)) {
b = (*(argv+(argc+(~0x00))));
r = cv_da(0x0A,&i,b);
if(!r) AND(i,0x00);
offset = (i);
}

printf("Offset: %d \n",offset);
printf("\n");

b = (0x00);
path = (*(argv+(0x01)));
r = ld_b(range,offset,&b,path);
if(!r) printf("%s \n","<< Error at fn. ld_b()");

if(r) {
cli_outs_b(0x08,b);
printf("\n");
printf("[%d %s] \n",r,"bytes");
}

embed_l(0x00,b);
if(b) rl(b);
b = (0x00);

return(0x00);
}
