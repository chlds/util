/* Notes

Check whether a file is a text file encoded in UTF-8 format

Remarks:
Currently under construction
*/


# define CAR_H
# define CAT_H
# define TIME_H
# define STDIO_H
# include <errno.h>
# include <string.h>
# include "./../../../lib/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {
auto signed char *b;
auto signed r;
auto signed byte = 500;
if(EQ(0x01,argc)) {
printf("Checks whether a file is a text file encoded in UTF-8 format \n");
return(0x00);
}
b = (*(argv+(argc+(~0x00))));
printf("file: [%s] \n",b);
r = cfmtxt_utf_8(byte,b);
if(!r) printf("It is a size-zero file or not a text file in UTF-8.. \n");
else {
printf("It is a text file in UTF-8! \n");
printf("Checked bytes: %dB \n",r);
}
printf("\n");
// printf("Done ! \n");
return(0x00);
}
