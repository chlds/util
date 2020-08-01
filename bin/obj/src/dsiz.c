/* **** Notes

A program to check the size of each data type
*/


# define C_CODE_STDS

# include "./../../../lib/incl/config.h"

/*
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
//*/

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA */
auto signed char c;
auto signed short s;
auto signed i;
auto signed long l;
auto signed long long ll;
auto float f;
auto double d;

auto signed char *pc;
auto signed short *ps;
auto signed *pi;
auto signed long *pl;
auto signed long long *pll;
auto float *pf;
auto double *pd;

auto void *pv;

struct abcd {
signed char c;
signed short s;
signed i;
signed long l;
};

auto struct abcd a;
auto struct abcd *pa;

union wxyz {
signed char c;
signed short s;
signed i;
signed long l;
};

auto union wxyz z;
auto union wxyz *pz;

/* **** CODE/TEXT */
printf("\n");

printf("%40s%3zd \n","size of datatype char: ",sizeof(c));
printf("%40s%3zd \n","size of datatype short: ",sizeof(s));
printf("%40s%3zd \n","size of datatype int: ",sizeof(i));
printf("%40s%3zd \n","size of datatype long: ",sizeof(l));
printf("%40s%3zd \n","size of datatype long long: ",sizeof(ll));
printf("%40s%3zd \n","size of datatype float: ",sizeof(f));
printf("%40s%3zd \n","size of datatype double: ",sizeof(d));
printf("\n");

printf("%40s%3zd \n","size of datatype char*: ",sizeof(pc));
printf("%40s%3zd \n","size of datatype short*: ",sizeof(ps));
printf("%40s%3zd \n","size of datatype int*: ",sizeof(pi));
printf("%40s%3zd \n","size of datatype long*: ",sizeof(pl));
printf("%40s%3zd \n","size of datatype long long*: ",sizeof(pll));
printf("%40s%3zd \n","size of datatype float*: ",sizeof(pf));
printf("%40s%3zd \n","size of datatype double*: ",sizeof(pd));
printf("%40s%3zd \n","size of datatype void*: ",sizeof(pv));
printf("\n");

printf("%40s%3zd \n","size of datatype e.g., struct abcd: ",sizeof(a));
printf("%40s%3zd \n","size of datatype struct abcd*: ",sizeof(pa));
printf("\n");

printf("%40s%3zd \n","size of datatype e.g., union wxyz: ",sizeof(z));
printf("%40s%3zd \n","size of datatype union wxyz*: ",sizeof(pz));

return(0x01);
}
