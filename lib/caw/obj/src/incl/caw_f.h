signed(__cdecl currently_occurring_error(void));
signed(__cdecl currently_occurring_error_mb_ok(signed(arg),void(*hdl),signed char(*argp)));
signed(__cdecl message_box_mb_ok(void(*hdl),signed char(*text),signed char(*caption)));
signed(__cdecl message_box_beta(void(*hdl),signed char(*text),signed char(*caption),signed(type)));

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

signed short(__cdecl register_class_ex_beta(void(*argp)));
signed short(__cdecl register_class_beta(void(*argp)));
signed(__cdecl show_window_beta(void(*hdl),signed(arg)));

void *(__cdecl create_solid_brush_beta(signed(arg)));
void *(__cdecl create_rect_rgn_beta(signed(xul),signed(yul),signed(xlr),signed(ylr)));
void *(__cdecl create_font_bold_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl create_font_beta(signed(height),signed(width),signed char(*argp)));

void(__cdecl post_quit_message_beta(signed(arg)));
LONG_PTR(__cdecl dispatch_message_beta(void(*argp)));
signed(__cdecl translate_message_beta(void(*argp)));
signed(__cdecl get_message_beta(void(*msg),void(*hdl),signed(min),signed(max)));
