# define CAR_H
# define IO_H
# define STDIO_H
# include "./../../../config.h"

signed long long(__cdecl startpointseek_beta(signed(args),signed long long(argp))) {
auto signed r = (SEEK_SET);
return(_lseeki64(args,argp,r));
}
