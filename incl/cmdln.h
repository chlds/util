/* **** commandlet functions

If the function fails, the return value is (0x00). */







# define debugging (0x01)
# define more_debugging (0x01)

# define ALIGN_TAB (0x08)

# define COMMAND_BUFF (0x200) // (-1+(256)) per row i.e., in a null-terminated array for characters
# define BUFF (0x600) // (-1+(1536)) per row
// Refer at fn. vu_gate

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
COORD(caret_pos_for_cmd_io); // deprecated..
COORD(depart_for_cmd_io);
COORD(caret_pos); // mainly for the snapshot history, refer at fn. cmdln_history, cmdln_undo and cmdln_redo.
COORD(depart);
COORD(orig);
CONSOLE_SCREEN_BUFFER_INFO(csbi);
COORD(cache_pos);
signed(d);
signed(s);
KNOT(*l);
KNOT(*b);
KNOT(*t);
KNOTS(circular);
KNOTS(doubly);
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
};
signed char(*filename);
signed short(overwrite);
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
