# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl deregister_shell_hook(void(*argp))) {
return(DeregisterShellHookWindow(argp));
}
