/* **** Notes

Alpha
*/


# define CAR_H
# define STDIO_H
# define STDDEF_H
# include "./../../../config.h"

signed(__cdecl agent_alpha(signed(argc),signed char(**argv),signed char(**envp))) {
auto signed char **v;
auto signed char *b;
auto signed short *w;
auto signed r;
auto size_t size;
auto signed all;
// auto signed x,y;
/*
x = (0x01);
y = (0x01);
if(!(caret_b(x,y))) return(0x00);
//*/
AND(all,0x00);
if(!(clear_rows(all))) return(0x00);
//
co_br(0x00);
printf("\n");
printf("Done!\n");
return(0x01);
}
