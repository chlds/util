signed(__cdecl cli_clip_to_empty_beta(void));
signed(__cdecl cli_message(signed(arg),signed char(*argp)));
signed(__cdecl cli_mon(signed short(arg),cli_property_t(*argp)));
signed(__cdecl cli_refresh(signed char(*argp)));
signed(__cdecl cli_cue_back(cli_property_t(*argp)));
signed(__cdecl cli_del_back(cli_property_t(*argp)));
signed(__cdecl cli_replace_text_attributes_beta(signed(arg),cli_property_t(*argp)));
signed(__cdecl cli_restore_text_attributes_beta(cli_property_t(*argp)));
signed(__cdecl cli_retrieve_standard_handles_beta(void(**argp)));
signed(__cdecl coord_beta(signed(io),signed(arg),coord_t(*argp)));
signed(__cdecl rect_beta(signed(io),signed(arg),rect_t(*argp)));
signed(__cdecl pixel_beta(signed(io),signed(arg),pixel_t(*argp)));
signed(__cdecl clear_rows_r(signed short(arg),signed short(edge)));
signed(__cdecl clear_rows(signed short(arg)));
signed(__cdecl clear_row(signed short(arg)));
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
