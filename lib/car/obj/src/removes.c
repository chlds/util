# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl removes(signed char(*argp))) {
return(remove(argp));
}
