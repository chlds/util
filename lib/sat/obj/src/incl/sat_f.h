/* **** commandlet functions

Return (0x00) if the function fails.
*/


void*(__cdecl cmdl_fn(signed(arg),unsigned(*tid),void(*argp),unsigned(__stdcall**ff)(void(*argp))));

signed(__cdecl cmdl2_time_rrrr(void(*argp)));
signed(__cdecl cmdl2_time_bm(void(*argp)));
signed(__cdecl cmdl2_time_dc(void(*argp)));
signed(__cdecl cmdl2_time_region(SAT(*argp)));
signed(__cdecl cmdl2_time_font(SAT(*argp)));
signed(__cdecl cmdl2_time_brushes(SAT(*argp)));
signed(__cdecl cmdl2_time_brush(SAT(*argp)));
signed(__cdecl cmdl2_time_rrr(void(*argp)));
signed(__cdecl cmdl2_time_rr(void(*argp)));
signed(__cdecl cmdl2_time_r(void(*argp)));
signed(__cdecl cmdl2_help_r(void(*argp)));
signed(__cdecl cmdl2_clear_r(void(*argp)));
signed(__cdecl cmdl2_open_r(void(*argp)));
signed(__cdecl cmdl2_save_r(void(*argp)));
signed(__cdecl cmdl2_output_r(void(*argp)));
signed(__cdecl cmdl2_history_r(void(*argp)));

unsigned(__stdcall cmdl2_exit(void(*argp)));
unsigned(__stdcall cmdl2_help(void(*argp)));
unsigned(__stdcall cmdl2_clear(void(*argp)));
unsigned(__stdcall cmdl2_time(void(*argp)));
unsigned(__stdcall cmdl2_open(void(*argp)));
unsigned(__stdcall cmdl2_save(void(*argp)));
unsigned(__stdcall cmdl2_output(void(*argp)));
unsigned(__stdcall cmdl2_history(void(*argp)));
