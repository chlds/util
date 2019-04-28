/* **** commandlet functions

If the function fails, the return value is (~(0)). */







unsigned(__stdcall cmdl2_exit(void(*argp)));
unsigned(__stdcall cmdl2_help(void(*argp)));
unsigned(__stdcall cmdl2_clear(void(*argp)));
unsigned(__stdcall cmdl2_time(void(*argp)));
unsigned(__stdcall cmdl2_open(void(*argp)));
unsigned(__stdcall cmdl2_save(void(*argp)));
unsigned(__stdcall cmdl2_output(void(*argp)));
unsigned(__stdcall cmdl2_history(void(*argp)));


signed char(__cdecl cmdl_exit(void(*argp)));
signed char(__cdecl cmdl_help(void(*argp)));
signed char(__cdecl cmdl_clear(void(*argp)));
signed char(__cdecl cmdl_time(void(*argp)));
signed char(__cdecl cmdl_open(void(*argp)));
signed char(__cdecl cmdl_save(void(*argp)));
signed char(__cdecl cmdl_output(void(*argp)));
signed char(__cdecl cmdl_history(void(*argp)));
