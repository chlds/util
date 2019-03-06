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
# endif


# ifdef C_CALEND
# include "./calend.h"
# endif


# ifdef C_AS
# include "./datatype.h"
# include "./cmdl_fn.h"
# include "./fn.h"
# endif


# ifdef C_MT
# include <process.h>
# endif


# ifdef C_W32API
# include <windows.h>
# endif
