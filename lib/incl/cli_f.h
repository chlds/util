signed(__cdecl cli_init_clipboards(signed(arg),cli_clipboard_t(*argp)));
signed(__cdecl cli_clip_to_empty_beta(void));
signed(__cdecl clipboard_to_pin_paste_beta(signed(arg),cli_clipboard_t(*argp)));
signed(__cdecl pin_beta(cli_clipboard_t(*argp)));
signed(__cdecl v_map_beta(cli_text_t(*cache),cli_clipboard_t(*argp)));
signed(__cdecl v_unmap_beta(cli_clipboard_t(*argp)));
signed(__cdecl cli_init_pages(cli_spool_t(*argp)));
signed(__cdecl cli_io(cli_property_t(*argp)));
signed(__cdecl cli_ctrl_fn_internal(signed(arg),void(*argp)));
signed(__cdecl cli_ctrl_fn(signed(arg),cli_property_t(*argp)));
signed(__cdecl cli_es(signed(arg)));
signed(__cdecl es_at(void));
signed(__cdecl es_a(void));
signed(__cdecl es_b(void));
signed(__cdecl es_c(void));
signed(__cdecl es_d(void));
signed(__cdecl es_e(void));
signed(__cdecl es_f(void));
signed(__cdecl es_g(void));
signed(__cdecl es_h(void));
signed(__cdecl es_i(void));
signed(__cdecl es_j(void));
signed(__cdecl es_k(void));
signed(__cdecl es_l(void));
signed(__cdecl es_m(void));
signed(__cdecl es_n(void));
signed(__cdecl es_o(void));
signed(__cdecl es_p(void));
signed(__cdecl es_q(void));
signed(__cdecl es_r(void));
signed(__cdecl es_s(void));
signed(__cdecl es_t(void));
signed(__cdecl es_u(void));
signed(__cdecl es_v(void));
signed(__cdecl es_w(void));
signed(__cdecl es_x(void));
signed(__cdecl es_y(void));
signed(__cdecl es_z(void));
signed(__cdecl es_lsb(void));
signed(__cdecl es_rs(void));
signed(__cdecl es_rsb(void));
signed(__cdecl es_ca(void));
signed(__cdecl es_ll(void));
signed(__cdecl cli_init_virtual_terminal_beta(signed(arg),cli_virtual_terminal_t(*argp)));
signed(__cdecl cli_vt_opt(cli_property_t(*argp)));
signed(__cdecl cli_opt(cli_property_t(*argp)));
signed(__cdecl cli_message(signed(arg),signed char(*argp)));
signed(__cdecl cli_mon(signed short(arg),cli_property_t(*argp)));
signed(__cdecl cli_refresh(cli_text_t(*argp)));
signed(__cdecl cli_fn_ahead(cli_property_t(*argp)));
signed(__cdecl cli_fn_backward(cli_property_t(*argp)));
signed(__cdecl cli_fn_indent(cli_property_t(*argp)));
signed(__cdecl cli_fn_del(cli_property_t(*argp)));
signed(__cdecl cli_fn_edge(cli_property_t(*argp)));
signed(__cdecl cli_fn_forward(cli_property_t(*argp)));
signed(__cdecl cli_fn_go(cli_property_t(*argp)));
signed(__cdecl cli_fn_bs(cli_property_t(*argp)));
signed(__cdecl cli_fn_del_backward(cli_property_t(*argp)));
signed(__cdecl cli_fn_kick(cli_property_t(*argp)));
signed(__cdecl cli_fn_leap(cli_property_t(*argp)));
signed(__cdecl cli_fn_clip(cli_property_t(*argp)));
signed(__cdecl cli_fn_esc(cli_property_t(*argp)));
signed(__cdecl cli_fn_bullet(cli_property_t(*argp)));
signed(__cdecl cli_coord_outs(signed short(arg/* align */),signed char(*argp)));
signed(__cdecl cli_coord_out(signed short(arg/* align */),signed char(*argp)));
signed(__cdecl cli_indent_r(signed short(arg)));
signed(__cdecl cli_indent(signed short(arg)));
signed(__cdecl cli_reckon(signed short(arg/* align */)));
signed(__cdecl cli_replace_text_attributes_beta(signed(arg),cli_property_t(*argp)));
signed(__cdecl cli_restore_text_attributes_beta(cli_property_t(*argp)));
signed(__cdecl cli_retrieve_standard_handles_beta(void(**argp)));
signed(__cdecl coord_report_r(signed(arg),signed char(*cache),coord_t(*argp)));
signed(__cdecl coord_report(signed(arg),coord_t(*argp)));
signed(__cdecl coord_restore(void));
signed(__cdecl coord_save(void));
signed(__cdecl coord_beta(signed(io),signed(arg),coord_t(*argp)));
signed(__cdecl rect_beta(signed(io),signed(arg),rect_t(*argp)));
signed(__cdecl pixel_beta(signed(io),signed(arg),pixel_t(*argp)));
signed(__cdecl clear_rows_r(signed(arg)));
signed(__cdecl clear_rows(signed(arg)));
signed(__cdecl scroll_beta(signed short(arg)));
signed(__cdecl cli_set_coord(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_set_rect(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_set_pixel(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_get_coord(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_get_rect(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_get_pixel(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_get_frame(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_init_frames(signed(arg),cli_frame_t(*argp)));
signed(__cdecl cli_init_text(signed(arg),cli_text_t(*argp)));
signed(__cdecl cli_init_rule(signed(arg),cli_rule_t(*argp)));
signed(__cdecl cli_restore_rule(signed char(*cache),cli_rule_t(*argp)));
signed(__cdecl cli_restore(signed(arg),cli_text_t(*argp)));
signed(__cdecl cli_init_property(signed(arg),cli_property_t(*argp)));
