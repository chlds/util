/* **** commandlet functions

If the function fails, the return value is (0x00). */







/* Debug Parameters */
# define DBG_Q (0x08)
# define DBG_D (0x04)
# define DBG_W (0x02)
# define DBG_B (0x01)

/* Console Debug Flag */
# define C_DBG (0x00)

# define HEADER_ROWS (0x02)
# define FOOTER_ROWS (0x02)

# define LIMIT_FSIZ (10000000)

# define ALIGN_TAB (0x08)

# define COMMAND_BUFF (0x200) // (-1+(256)) per row i.e., in a null-terminated array for characters
# define BUFF (0x100000) // 1MiB per row

# define OFFSCREEN_BUFF (0x03)

typedef struct cmdln_stat {
// for 7-bit character and more..
union xchar {
signed char(c1);
signed char(c2[0x02]);
signed char(c4[0x04]);
signed char(c6[0x06]);
signed char(c8[0x08]);
signed char(c16[0x10]);
signed char(c24[0x18]);
};
signed(c);
// for a buffer
signed(command_label);
CMD_IO(cmd_io);
/* for clip board */
void(*globally_secured);
void(*locally_secured);
signed(clipped_bytes);
signed(clipped);
signed short(clip_reset);
/* buffers */
signed char(*clip);
signed char(*craft);
signed char(*init_p); // as workspace
signed char(*p);
signed(limit);
signed(count);
signed(tail);
void(*s_in);
void(*s_out);
void(*s_err);
void(*device);
void(*module);
void(*window);
void(*search);
COORD(depart_for_cmd_io);
COORD(depart);
// COORD(arriv);
signed(q_refresh);
COORD(orig);
COORD(cache_pos);
void(*(offscreen[OFFSCREEN_BUFF]));
CONSOLE_SCREEN_BUFFER_INFO(csbi);
signed(d);
signed(s);
// receptor for the knots e.g., refer at fn. malloc in fn. vu_gate_beta_internal (or in fn. vu_gate_internal)
// also refer at fn. cmdln_unmap, fn. vu_gate, fn. ctrl_d_beta, fn. vu_refresh or..
KNOT(*l);
KNOT(*b);
KNOT(*t);
// Aux.
KNOTS(circular);
KNOTS(doubly);
// flag
signed short(insert);
KNOT(*created_knot);
signed short(concat_type);
signed short(lead_back);
// by fn. delete_knot and fn. cmdln_ctrl_d
CLI_HISTORY(clih);
signed short(hist);
// debug monitor
struct debug_mon {
signed(char_output);
// by fn. c_out
signed(copied);
signed(embedded);
signed(repeat);
// by fn. cmdln_ctrl_k
signed(recurred);
// by fn. vu_internal
signed(length_with_ht);
// by fn. ct_txt in fn. vu_gate_internal
signed(refresh_rows);
signed(cleared_rows);
signed(unmapped_ss);
};
// To load a file
signed short(already_existing_file);
// not to use fn. free()
signed short(irr);
// interrupted in loading a file..
size_t(fsiz);
signed(fd);
signed(loading);
signed short(end_with_linefeed); // i.e., end with a Line Break (in LF or CRLF) or not. e.g., refer at fn. cmdln_load_internal or..
signed char(*filename);
signed short(confirm);
signed short(overwrite);
signed(nknot);
// in entering command mode - refer at fn. cmd_mode_crawlin/out
signed char(*crawl);
// refer fn. c_out_beta and fn. vu_beta_internal
signed short(wrap);
signed short(deadsp_by_wrapping);
signed short(offset_by_wrapping);
signed short(prev_offset);
signed short(next_offset);
signed(cumul_lock); // lock to cumulate dead space by wrapping words at fn. c_out_beta in vu_beta_internal only.
signed(cumulative_here); // cumulate dead space after wrapping words to the current address i.e., to the ((*argp).p).
signed(cumulative); // cumulate dead space after wrapping words to the terminating address.
signed(len_of_word); // word-wrap: refer at fn. ctrl_b_beta, fn. find_deadsp_internal or..
signed char(*p_set_after_wrapping); // refer at fn. c_out_beta or..
// void(*p_after_wrapping);
COORD(cached_coord); // word-wrap
COORD(cached_linebreak); // word-wrap
// to debug
signed(c000),(c001),(c002),(c003);
// optional
void(*optl);
} CMDLN_STAT;

/* for fn. cmd_io_internal */
signed(__cdecl cmd_ctrl_at(void(*argp)));
signed(__cdecl cmd_ctrl_a(void(*argp)));
signed(__cdecl cmd_ctrl_b(void(*argp)));
signed(__cdecl cmd_ctrl_c(void(*argp)));
signed(__cdecl cmd_ctrl_d(void(*argp)));
signed(__cdecl cmd_ctrl_e(void(*argp)));
signed(__cdecl cmd_ctrl_f(void(*argp)));
signed(__cdecl cmd_ctrl_g(void(*argp)));
signed(__cdecl cmd_ctrl_h(void(*argp)));
signed(__cdecl cmd_ctrl_i(void(*argp)));
signed(__cdecl cmd_ctrl_j(void(*argp)));
signed(__cdecl cmd_ctrl_k(void(*argp)));
signed(__cdecl cmd_ctrl_l(void(*argp)));
signed(__cdecl cmd_ctrl_m(void(*argp)));
signed(__cdecl cmd_ctrl_n(void(*argp)));
signed(__cdecl cmd_ctrl_o(void(*argp)));
signed(__cdecl cmd_ctrl_p(void(*argp)));
signed(__cdecl cmd_ctrl_q(void(*argp)));
signed(__cdecl cmd_ctrl_r(void(*argp)));
signed(__cdecl cmd_ctrl_s(void(*argp)));
signed(__cdecl cmd_ctrl_t(void(*argp)));
signed(__cdecl cmd_ctrl_u(void(*argp)));
signed(__cdecl cmd_ctrl_v(void(*argp)));
signed(__cdecl cmd_ctrl_w_prep(void(*argp)));
signed(__cdecl cmd_ctrl_w(void(*argp)));
signed(__cdecl cmd_ctrl_x(void(*argp)));
signed(__cdecl cmd_ctrl_y(void(*argp)));
signed(__cdecl cmd_ctrl_z(void(*argp)));
signed(__cdecl cmd_ctrl_lbracket(void(*argp)));
signed(__cdecl cmd_ctrl_bslash(void(*argp)));
signed(__cdecl cmd_ctrl_rbracket(void(*argp)));
signed(__cdecl cmd_ctrl_asterisk(void(*argp)));
signed(__cdecl cmd_ctrl_hash(void(*argp)));

/* for fn. vu_internal */
signed(__cdecl cmdln_ctrl_at(void(*argp)));
signed(__cdecl cmdln_ctrl_a(void(*argp)));
signed(__cdecl cmdln_ctrl_b(void(*argp)));
signed(__cdecl cmdln_ctrl_c(void(*argp)));
signed(__cdecl cmdln_ctrl_d(void(*argp)));
signed(__cdecl cmdln_ctrl_e(void(*argp)));
signed(__cdecl cmdln_ctrl_f(void(*argp)));
signed(__cdecl cmdln_ctrl_g(void(*argp)));
signed(__cdecl cmdln_ctrl_h(void(*argp)));
signed(__cdecl cmdln_ctrl_i(void(*argp)));
signed(__cdecl cmdln_ctrl_j(void(*argp)));
signed(__cdecl cmdln_ctrl_k(void(*argp)));
signed(__cdecl cmdln_ctrl_l(void(*argp)));
signed(__cdecl cmdln_ctrl_m(void(*argp)));
signed(__cdecl cmdln_ctrl_n(void(*argp)));
signed(__cdecl cmdln_ctrl_o(void(*argp)));
signed(__cdecl cmdln_ctrl_p(void(*argp)));
signed(__cdecl cmdln_ctrl_q(void(*argp)));
signed(__cdecl cmdln_ctrl_r(void(*argp)));
signed(__cdecl cmdln_ctrl_s(void(*argp)));
signed(__cdecl cmdln_ctrl_t(void(*argp)));
signed(__cdecl cmdln_ctrl_u(void(*argp)));
signed(__cdecl cmdln_ctrl_v(void(*argp)));
signed(__cdecl cmdln_ctrl_w_prep(void(*argp)));
signed(__cdecl cmdln_ctrl_w(void(*argp)));
signed(__cdecl cmdln_ctrl_x(void(*argp)));
signed(__cdecl cmdln_ctrl_y(void(*argp)));
signed(__cdecl cmdln_ctrl_z(void(*argp)));
signed(__cdecl cmdln_ctrl_lbracket(void(*argp)));
signed(__cdecl cmdln_ctrl_bslash(void(*argp)));
signed(__cdecl cmdln_ctrl_rbracket(void(*argp)));
signed(__cdecl cmdln_ctrl_asterisk(void(*argp)));
signed(__cdecl cmdln_ctrl_hash(void(*argp)));

/* for fn. vu_beta_internal */
signed(__cdecl cmdln_ctrl_at_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_a_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_b_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_c_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_d_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_e_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_f_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_g_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_h_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_i_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_j_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_k_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_l_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_m_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_n_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_o_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_p_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_q_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_r_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_s_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_t_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_u_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_v_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_w_prep_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_w_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_x_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_y_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_z_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_lbracket_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_bslash_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_rbracket_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_asterisk_beta(void(*argp)));
signed(__cdecl cmdln_ctrl_hash_beta(void(*argp)));

/* for fn. vu_beta_internal */
signed(__cdecl ctrl_at_beta(void(*argp)));
signed(__cdecl ctrl_a_beta(void(*argp)));
signed(__cdecl ctrl_b_beta(void(*argp)));
signed(__cdecl ctrl_c_beta(void(*argp)));
signed(__cdecl ctrl_d_beta(void(*argp)));
signed(__cdecl ctrl_e_beta(void(*argp)));
signed(__cdecl ctrl_f_beta(void(*argp)));
signed(__cdecl ctrl_g_beta(void(*argp)));
signed(__cdecl ctrl_h_beta(void(*argp)));
signed(__cdecl ctrl_i_beta(void(*argp)));
signed(__cdecl ctrl_j_beta(void(*argp)));
signed(__cdecl ctrl_k_beta(void(*argp)));
signed(__cdecl ctrl_l_beta(void(*argp)));
signed(__cdecl ctrl_m_beta(void(*argp)));
signed(__cdecl ctrl_n_beta(void(*argp)));
signed(__cdecl ctrl_o_beta(void(*argp)));
signed(__cdecl ctrl_p_beta(void(*argp)));
signed(__cdecl ctrl_q_beta(void(*argp)));
signed(__cdecl ctrl_r_beta(void(*argp)));
signed(__cdecl ctrl_s_beta(void(*argp)));
signed(__cdecl ctrl_t_beta(void(*argp)));
signed(__cdecl ctrl_u_beta(void(*argp)));
signed(__cdecl ctrl_v_beta(void(*argp)));
signed(__cdecl ctrl_w_prep_beta(void(*argp)));
signed(__cdecl ctrl_w_beta(void(*argp)));
signed(__cdecl ctrl_x_beta(void(*argp)));
signed(__cdecl ctrl_y_beta(void(*argp)));
signed(__cdecl ctrl_z_beta(void(*argp)));
signed(__cdecl ctrl_lbracket_beta(void(*argp)));
signed(__cdecl ctrl_bslash_beta(void(*argp)));
signed(__cdecl ctrl_rbracket_beta(void(*argp)));
signed(__cdecl ctrl_asterisk_beta(void(*argp)));
signed(__cdecl ctrl_hash_beta(void(*argp)));
