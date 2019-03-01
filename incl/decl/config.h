# ifdef C_CODE_STDS
# include <io.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/stat.h>
// # include <sys/types.h>
# include <sys/utime.h>
# include "./las.h"
# define NIL (0)
# endif


# ifdef C_CALEND
# include "./calend.h"
# endif


# ifdef C_MT
# include <process.h>
# include "./datatype.h"
# include "./fn.h"
# endif


# ifdef C_W32API
# include <windows.h>
# endif
