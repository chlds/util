/* **** Notes

A program to check the size of each data type

*/



# define C_CODE_STDS

# include "./../../../incl/config.h"

/*
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
//*/



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** **** DATA */

auto char signed(c);
auto short int signed(s);
auto int signed(i);
auto int long signed(l);
auto int long long signed(ll);
auto float(f);
auto double(d);

auto char signed(*pc);
auto short int signed(*ps);
auto int signed(*pi);
auto int long signed(*pl);
auto int long long signed(*pll);
auto float(*pf);
auto double(*pd);

auto void(*pv);

struct abcd {
char signed(c);
short signed(s);
int signed(i);
long (l);
};

auto struct abcd(a);
auto struct abcd(*pa);

union wxyz {
char signed(c);
short signed(s);
int signed(i);
long signed(l);
};

auto union wxyz(z);
auto union wxyz(*pz);


/* **** **** CODE/TEXT */

printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype char: "), (sizeof(c)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype short: "), (sizeof(s)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype int: "), (sizeof(i)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype long: "), (sizeof(l)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype long long: "), (sizeof(ll)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype float: "), (sizeof(f)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype double: "), (sizeof(d)));
printf("\n");

printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype char*: "), (sizeof(pc)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype short*: "), (sizeof(ps)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype int*: "), (sizeof(pi)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype long*: "), (sizeof(pl)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype long long*: "), (sizeof(pll)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype float*: "), (sizeof(pf)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype double*: "), (sizeof(pd)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype void*: "), (sizeof(pv)));
printf("\n");

printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype e.g., struct abcd: "), (sizeof(a)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype struct abcd*: "), (sizeof(pa)));
printf("\n");

printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype e.g., union wxyz: "), (sizeof(z)));
printf((char(*)) ("\n%40s%3zd"), (char(*)) ("size of datatype union wxyz*: "), (sizeof(pz)));
printf("\n");

return(char signed) (NIL);
}
