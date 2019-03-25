/* **** Notes

Using a loop

*/



# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** **** DATA */

auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));
// in milli-seconds

auto char signed(*(arr[])) = {
(char signed(*)) ("Sun"),
(char signed(*)) ("Mon"),
(char signed(*)) ("Tue"),
(char signed(*)) ("Wed"),
(char signed(*)) ("Thu"),
(char signed(*)) ("Fri"),
(char signed(*)) ("Sat"),
(char signed(*)) (NIL)
};

auto int signed(i);
auto char signed(c);


/* **** **** CODE/TEXT */

XOR(i, i);

while(*(arr+(i))) {
Sleep(DELAY);
printf("%s\n", (*(arr+(i++))));
}


XOR(c, c);
return(char signed) (c);
}
