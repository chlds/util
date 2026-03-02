# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl register_shell_hook(void(*argp))) {
return(RegisterShellHookWindow(argp));
}
