# define CAR_H
# define IO_H
# define STDIO_H
# include "./../../../config.h"

signed long long(__cdecl currentpointseek(signed(args),signed long long(argp))) {
auto signed r = (SEEK_CUR);
return(lseek(args,argp,r));
}
