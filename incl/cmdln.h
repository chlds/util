/* **** commandlet functions

If the function fails, the return value is (0x00). */







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
signed char(*clip);
signed char(*craft);
signed char(*init_p);
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
COORD(depart);
CONSOLE_SCREEN_BUFFER_INFO(csbi);
signed(d);
signed(s);
void(*optl);
} CMDLN_STAT;

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
signed(__cdecl cmdln_ctrl_w(void(*argp)));
signed(__cdecl cmdln_ctrl_x(void(*argp)));
signed(__cdecl cmdln_ctrl_y(void(*argp)));
signed(__cdecl cmdln_ctrl_z(void(*argp)));
signed(__cdecl cmdln_ctrl_lbracket(void(*argp)));
signed(__cdecl cmdln_ctrl_bslash(void(*argp)));
signed(__cdecl cmdln_ctrl_rbracket(void(*argp)));
signed(__cdecl cmdln_ctrl_asterisk(void(*argp)));
signed(__cdecl cmdln_ctrl_hash(void(*argp)));
