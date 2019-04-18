/* **** commandlet functions

If the function fails, the return value is (~(0)).
//*/


unsigned int(__stdcall cmdl2_exit(void(*argp)));
unsigned int(__stdcall cmdl2_help(void(*argp)));
unsigned int(__stdcall cmdl2_clear(void(*argp)));
unsigned int(__stdcall cmdl2_time(void(*argp)));
unsigned int(__stdcall cmdl2_open(void(*argp)));
unsigned int(__stdcall cmdl2_save(void(*argp)));
unsigned int(__stdcall cmdl2_output(void(*argp)));
unsigned int(__stdcall cmdl2_history(void(*argp)));

char signed(__cdecl cmdl_exit(void(*argp)));
char signed(__cdecl cmdl_help(void(*argp)));
char signed(__cdecl cmdl_clear(void(*argp)));
char signed(__cdecl cmdl_time(void(*argp)));
char signed(__cdecl cmdl_open(void(*argp)));
char signed(__cdecl cmdl_save(void(*argp)));
char signed(__cdecl cmdl_output(void(*argp)));
char signed(__cdecl cmdl_history(void(*argp)));
