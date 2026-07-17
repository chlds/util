# define CAT_H
# define TIME_H
# include "./../../../config.h"

time_t(__cdecl derefc(time_t(*argp))) {
return(argp?*argp:0x00);
}
