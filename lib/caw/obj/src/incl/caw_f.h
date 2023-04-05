signed(__cdecl control_key_state_beta(signed(arg)));
void(__cdecl sleep_beta(signed(arg)));

signed(__cdecl cv_pix_pt(signed(arg/* pt i.e., points of typeface */)));
double(__cdecl get_dpi_desktop_b(signed(arg)));
double(__cdecl get_dpi_sqrt_b(void(*argp/* whdl */)));
double(__cdecl get_dpi_b(signed(arg),void(*argp/* whdl */)));

signed(__cdecl dc_color_out_w_beta(signed(x),signed(y),signed(clr),void(*dc),signed short(*argp)));
signed(__cdecl dc_color_out_beta(signed(x),signed(y),signed(clr),void(*dc),signed char(*argp)));
signed(__cdecl dc_out_w_beta(signed(x),signed(y),void(*dc),signed short(*argp)));
signed(__cdecl dc_out_beta(signed(x),signed(y),void(*dc),signed char(*argp)));

signed(__cdecl currently_occurring_error(void));

signed(__cdecl count_clipboard_formats(void));
void *(__cdecl alloc_g(signed(arg)));
void *(__cdecl lock_g(void(*argp)));
signed(__cdecl cpy_g(void(*di),signed short(*si)));
signed(__cdecl unlock_g(void(*argp)));
signed(__cdecl rl_g(void(*argp)));

signed(__cdecl clipboard_map(void(*argp)));
signed(__cdecl clipboard_empty(void));
signed(__cdecl clipboard_store_w(void(*argp)));
void *(__cdecl clipboard_retrieve_w(void));
signed(__cdecl clipboard_unmap(void));

signed(__cdecl min_window(void));
signed(__cdecl max_window(void));
signed(__cdecl restore_window(void));

signed(__cdecl currently_granting_privileges_r(signed(arg),signed char(**di),void(*si/* structure token privileges */)));
signed(__cdecl currently_granting_privileges(signed char(***di),void(*si/* structure token privileges */)));
signed(__cdecl currently_granting_token_privileges_r(signed(arg),void(*di),void(*si/* token */)));
signed(__cdecl currently_granting_token_privileges(void(**di),void(*si/* token */)));
signed(__cdecl cv_priv_luid_r(signed char(*di),signed(arg),signed(low),signed(high)));
signed(__cdecl cv_priv_luid(signed char(**di),signed(low),signed(high)));
signed(__cdecl cv_luid_priv(signed(*low),signed(*high),signed char(*si)));
signed(__cdecl unmap_obj(void(*argp)));
signed(__cdecl unmap_ps_token(void(*argp)));
signed(__cdecl unmap_ps(void(*argp)));
signed(__cdecl unmap_td_token(void(*argp)));
signed(__cdecl unmap_td(void(*argp)));
void *(__cdecl map_ps_token(void(*argp)));
void *(__cdecl map_ps(signed(pid)));
void *(__cdecl map_td_token(signed(arg/* open as self */),void(*argp)));
void *(__cdecl map_td(signed(tid)));
/* Operate threads and processes. */

signed long(__cdecl currently_working_window_left(void(*argp)));
signed long(__cdecl currently_working_window_top(void(*argp)));
signed long(__cdecl currently_working_window_right(void(*argp)));
signed long(__cdecl currently_working_window_bottom(void(*argp)));
signed long(__cdecl currently_working_window_width(void(*argp)));
signed long(__cdecl currently_working_window_height(void(*argp)));
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
signed(__cdecl currently_working_window_tid_pid(signed(*di),void(*si)));
signed long long(__cdecl currently_working_instance(void(*argp/* hdl */)));
void *(__cdecl currently_working_window(void));
void *(__cdecl currently_working_standard_handle(signed(arg)));

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
signed(__cdecl destroy_window_beta(void(*hdl)));

void *(__cdecl create_solid_pen_beta(signed(width),signed(color)));
void *(__cdecl create_solid_brush_beta(signed(arg)));
void *(__cdecl create_rect_rgn_beta(signed(xul),signed(yul),signed(xlr),signed(ylr)));
void *(__cdecl create_font_italic_bold_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl create_font_italic_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl create_font_bold_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl create_font_beta(signed(height),signed(width),signed char(*argp)));
void *(__cdecl select_object_beta(void(*di/* dc */),void(*si/* obj */)));
signed(__cdecl delete_object_beta(void(*argp)));

signed(__cdecl color_shading_text_out_w_beta(void(*dc),signed(x),signed(y),signed(bclr),signed(clr),signed short(*argp)));
signed(__cdecl color_shading_text_out_beta(void(*dc),signed(x),signed(y),signed(bclr),signed(clr),signed char(*argp)));
signed(__cdecl shading_text_out_w_beta(void(*dc),signed(x),signed(y),signed short(*buff),signed(len),signed(clr)));
signed(__cdecl color_text_out_w_beta(void(*dc),signed(x),signed(y),signed short(*buff),signed(len),signed(clr)));
signed(__cdecl color_text_out_beta(void(*dc),signed(x),signed(y),signed char(*buff),signed(len),signed(clr)));
signed(__cdecl transcribe_dh_beta(signed(width),signed(height),void(*di/* dc */),void(*si/* hdl */)));
signed(__cdecl transcribe_hd_beta(signed(width),signed(height),void(*di/* hdl */),void(*si/* dc */)));

void(__cdecl post_quit_message_beta(signed(arg)));
signed long long(__cdecl dispatch_message_beta(void(*argp)));
signed(__cdecl translate_message_beta(void(*argp)));
signed(__cdecl get_message_beta(void(*msg),void(*hdl),signed(min),signed(max)));
signed(__cdecl agent_winmain(signed(__cdecl*f)(void(*inst),void(*prev_inst),signed char(**argv),signed(cmdshow)),void(*inst),void(*prev_inst),signed char(*argp),signed(cmdshow)));
