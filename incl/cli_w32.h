/*

Along with C and Windows libraries

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c
and at util/lib/obj/src/cli_io.c
*/


# define CLI_OBJS (0x01+(0x03))
// the default objects

# define CLI_DEVICES (CLI_OBJS)
# define CLI_MODULES (CLI_OBJS)
# define CLI_SEARCHES (CLI_OBJS)
# define CLI_WINDOWS (CLI_OBJS)

# include <windows.h>
# include "./cli.h"

typedef struct cli_w32_stat {
void *(window[CLI_WINDOWS]);
void *(search[CLI_SEARCHES]);
void *(module[CLI_MODULES]);
void *(device[CLI_DEVICES]);
COORD coord;
CONSOLE_SCREEN_BUFFER_INFO csbi;
CLI_VERSE verse;
void(*optl);
} CLI_W32_STAT;

enum {
CLI_IN,CLI_OUT,CLI_ERR,EOE,
};

// along with an array of function pointers
signed(__cdecl cli_ctrl_at_beta(void(*argp)));
signed(__cdecl cli_ctrl_a_beta(void(*argp)));
signed(__cdecl cli_ctrl_b_beta(void(*argp)));
signed(__cdecl cli_ctrl_c_beta(void(*argp)));

signed(__cdecl cli_ctrl_d_beta(void(*argp)));
signed(__cdecl cli_ctrl_e_beta(void(*argp)));
signed(__cdecl cli_ctrl_f_beta(void(*argp)));
signed(__cdecl cli_ctrl_g_beta(void(*argp)));

signed(__cdecl cli_ctrl_h_beta(void(*argp)));
signed(__cdecl cli_ctrl_i_beta(void(*argp)));
signed(__cdecl cli_ctrl_j_beta(void(*argp)));
signed(__cdecl cli_ctrl_k_beta(void(*argp)));

signed(__cdecl cli_ctrl_l_beta(void(*argp)));
signed(__cdecl cli_ctrl_m_beta(void(*argp)));
signed(__cdecl cli_ctrl_n_beta(void(*argp)));
signed(__cdecl cli_ctrl_o_beta(void(*argp)));

signed(__cdecl cli_ctrl_p_beta(void(*argp)));
signed(__cdecl cli_ctrl_q_beta(void(*argp)));
signed(__cdecl cli_ctrl_r_beta(void(*argp)));
signed(__cdecl cli_ctrl_s_beta(void(*argp)));

signed(__cdecl cli_ctrl_t_beta(void(*argp)));
signed(__cdecl cli_ctrl_u_beta(void(*argp)));
signed(__cdecl cli_ctrl_v_beta(void(*argp)));
signed(__cdecl cli_ctrl_w_beta(void(*argp)));

signed(__cdecl cli_ctrl_x_beta(void(*argp)));
signed(__cdecl cli_ctrl_y_beta(void(*argp)));
signed(__cdecl cli_ctrl_z_beta(void(*argp)));
signed(__cdecl cli_ctrl_lsb_beta(void(*argp)));

signed(__cdecl cli_ctrl_rs_beta(void(*argp)));
signed(__cdecl cli_ctrl_rsb_beta(void(*argp)));
signed(__cdecl cli_ctrl_ca_beta(void(*argp)));
signed(__cdecl cli_ctrl_ll_beta(void(*argp)));
