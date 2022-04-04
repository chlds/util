/* **** commandlet functions

Return (0x00) if the function fails.
*/


signed(__cdecl text_out_beta(void(*dc),signed(x),signed(y),signed char(*buff),signed(len),signed(clr)));
signed(__cdecl transcribe_to_beta(signed(width),signed(height),void(*di/* dc */),void(*si/* hdl */)));
signed(__cdecl transcribe_beta(signed(width),signed(height),void(*di/* hdl */),void(*si/* dc */)));
unsigned(__stdcall cmdl2_exit(void(*argp)));
unsigned(__stdcall cmdl2_help_r(void(*argp)));
unsigned(__stdcall cmdl2_help(void(*argp)));
unsigned(__stdcall cmdl2_clear_r(void(*argp)));
unsigned(__stdcall cmdl2_clear(void(*argp)));
unsigned(__stdcall cmdl2_time_rrrr(void(*argp)));
unsigned(__stdcall cmdl2_time_rrr(void(*argp)));
unsigned(__stdcall cmdl2_time_rr(void(*argp)));
unsigned(__stdcall cmdl2_time_r(void(*argp)));
unsigned(__stdcall cmdl2_time(void(*argp)));
unsigned(__stdcall cmdl2_open_r(void(*argp)));
unsigned(__stdcall cmdl2_open(void(*argp)));
unsigned(__stdcall cmdl2_save_r(void(*argp)));
unsigned(__stdcall cmdl2_save(void(*argp)));
unsigned(__stdcall cmdl2_output_r(void(*argp)));
unsigned(__stdcall cmdl2_output(void(*argp)));
unsigned(__stdcall cmdl2_history_r(void(*argp)));
unsigned(__stdcall cmdl2_history(void(*argp)));
