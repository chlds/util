# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl renames_beta(signed char(*args),signed char(*argp))) {
auto signed long r = (MOVEFILE_WRITE_THROUGH|(MOVEFILE_REPLACE_EXISTING));
return(MoveFileEx(args,argp,r));
}
