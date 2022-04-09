/* **** commandlet functions

Return (0x00) if the function fails.
*/


signed(__cdecl message_box_beta(void(*hdl),signed char(*text),signed char(*caption),signed(type)));
signed(__cdecl currently_occurring_error_mb_ok(void(*hdl)));
signed short(__cdecl register_class_ex_beta(void(*argp)));
signed short(__cdecl register_class_beta(void(*argp)));
void *(__cdecl create_window_beta(
signed char(*cn),signed char(*wn),signed(styl),
signed(x),signed(y),signed(w),signed(h),
void(*parent),void(*menu),void(*inst),void(*lp)
));
void *(__cdecl create_window_ex_beta(
signed(xstyl),signed char(*cn),signed char(*wn),signed(styl),
signed(x),signed(y),signed(w),signed(h),
void(*parent),void(*menu),void(*inst),void(*lp)
));
signed(__cdecl currently_operating_pixels(signed(arg)));
void *(__cdecl create_solid_brush_beta(signed(arg)));
void *(__cdecl create_rect_rgn_beta(signed(xul),signed(yul),signed(xlr),signed(ylr)));
void *(__cdecl create_font_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl select_object_beta(void(*di/* dc */),void(*si/* obj */)));
signed(__cdecl delete_object_beta(void(*argp)));
signed(__cdecl text_out_beta(void(*dc),signed(x),signed(y),signed char(*buff),signed(len),signed(clr)));
signed(__cdecl transcribe_dh_beta(signed(width),signed(height),void(*di/* dc */),void(*si/* hdl */)));
signed(__cdecl transcribe_hd_beta(signed(width),signed(height),void(*di/* hdl */),void(*si/* dc */)));
signed(__cdecl cmdl2_time_rrrr(void(*argp)));
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
