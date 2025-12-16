# define CAR_H
# define IO_H
# define ERRNO_H
# include "./../../../config.h"

signed(__cdecl fsyncs(signed(arg))) {
return(_commit(arg));
}
