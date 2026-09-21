# define CAR_H
# define IO_H
# define STDIO_H
# include "./../../../config.h"

signed long long(__cdecl endpointseek(signed(args),signed long long(argp))) {
auto signed r = (SEEK_END);
return(lseek(args,argp,r));
}
