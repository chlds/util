signed(__cdecl currently_occurring_error(void));

signed(__cdecl clipboard_map(void(*argp)));
signed(__cdecl clipboard_empty(void));
signed(__cdecl clipboard_store_w(void(*argp)));
void *(__cdecl clipboard_retrieve_w(void));
signed(__cdecl clipboard_unmap(void));

void *(__cdecl currently_working_clipboard_window(void));
void *(__cdecl currently_working_clipboard_owner(void));
void *(__cdecl currently_working_process_token(void));
void *(__cdecl currently_working_process(void));
void *(__cdecl currently_working_thread_token(void));
void *(__cdecl currently_working_thread(void));
signed(__cdecl currently_working_pid(void));
signed(__cdecl currently_working_pid_process(void(*argp)));
signed(__cdecl currently_working_tid(void));
signed(__cdecl currently_working_tid_thread(void(*argp)));
void *(__cdecl currently_working_window(void));
signed(__cdecl currently_working_window_tid_pid(signed(*di),void(*si)));

signed(__cdecl currently_granting_n_privileges(void(*argp/* structure token privileges */)));

signed(__cdecl currently_occurring_error_mb_ok(signed(arg),void(*hdl),signed char(*argp)));
signed(__cdecl message_box_mb_ok(void(*hdl),signed char(*text),signed char(*caption)));
signed(__cdecl message_box_beta(void(*hdl),signed char(*text),signed char(*caption),signed(type)));

signed(__cdecl currently_operating_pixels(signed(arg)));
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
signed(__cdecl set_layered_window_attributes_beta(void(*hdl),signed(trans),signed char(alpha),signed(arg)));
signed(__cdecl show_window_beta(void(*hdl),signed(arg)));

void *(__cdecl create_solid_brush_beta(signed(arg)));
void *(__cdecl create_rect_rgn_beta(signed(xul),signed(yul),signed(xlr),signed(ylr)));
void *(__cdecl create_font_bold_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl create_font_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl select_object_beta(void(*di/* dc */),void(*si/* obj */)));
signed(__cdecl delete_object_beta(void(*argp)));

signed(__cdecl text_out_beta(void(*dc),signed(x),signed(y),signed char(*buff),signed(len),signed(clr)));
signed(__cdecl transcribe_dh_beta(signed(width),signed(height),void(*di/* dc */),void(*si/* hdl */)));
signed(__cdecl transcribe_hd_beta(signed(width),signed(height),void(*di/* hdl */),void(*si/* dc */)));

void(__cdecl post_quit_message_beta(signed(arg)));
signed long long(__cdecl dispatch_message_beta(void(*argp)));
signed(__cdecl translate_message_beta(void(*argp)));
signed(__cdecl get_message_beta(void(*msg),void(*hdl),signed(min),signed(max)));