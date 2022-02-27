/* **** Notes

Display one line or about 1024 bytes in UTF-8.
*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "./../../../incl/config.h"

signed(__cdecl agent_lit(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed char *sym;
auto signed char *path;
auto signed threshold;
auto signed i,r;
auto size_t offset;
auto signed range = (0x04*(0x100));
auto signed short align = (0x08);
auto signed short cols = (80);
auto signed char delim[] = {
// SP,
// CR,
LF,
0x00,
};

AND(threshold,0x00);
OR(threshold,0x02);
sym = (delim);
b = (*(0x01+(argv)));
if(b) {
// display one line or about 1kB of the content
if(!(cmpr(&i,b,"l"))) {
// printf("%s \n","<< Error at fn. cmpr()");
// return(0x00);
}
if(!i) threshold++;
// else sym = (0x00);
// or display one line of the content
if(!(cmpr(&i,b,"k"))) {
// printf("%s \n","<< Error at fn. cmpr()");
// return(0x00);
}
if(!i) {
threshold++;
sym = (0x00);
}}

if(argc<(threshold)) return(lit_help());

AND(offset,0x00);
if(threshold<(argc)) {
v = (threshold+(argv));
// b = (*(argv+(argc+(~0x00))));
// r = cv_da_xe(0x0A,&i,b);
// if(!r) AND(i,0x00);
// if(i<(0x00)) AND(i,0x00);
// offset = (size_t) (i);
r = cv_sv(0x0A,&offset,v);
if(offset<(0x00)) AND(offset,0x00);
if(DBG) printf("%s: %zdB \n","Offset",offset);
}

b = (0x00);
path = (*(argv+(threshold+(~0x00))));
r = ld_b(offset,range,&b,sym,path);
if(!r) printf("%s \n","<< Error at fn. ld_b()");

if(r) {
sym = (0x00);
// out_lines(align,cols,sym,b);
// cli_outs_vt(align,b);
// cli_o_lines_vt(cols,align,sym,b);
cli_o_lines(cols,align,sym,b);
printf("\n");
printf("[%zd/%d %s] \n",offset,r,"bytes offset/read");
printf("[%zd %s] \n",offset+(r),"bytes reached");
}

embed_l(0x00,b);
if(b) rl(b);
b = (0x00);

return(0x01);
}
