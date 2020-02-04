/*

The constants, data types and functions for Typewriter

Along with C and Windows libraries

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c and at util/lib/obj/src/cli_io_beta.c
Refer at ./config_ty.h
*/


# include <windows.h>

# define CLI_W32_OBJS (0x01+(0x03))
# define CLI_DEVICES (CLI_W32_OBJS)
# define CLI_MODULES (CLI_W32_OBJS)
# define CLI_SEARCHES (CLI_W32_OBJS)
# define CLI_WINDOWS (CLI_W32_OBJS)

typedef struct cli_w32_stat {
CLI_CODEPAGE codepage;
CLI_TYPEWRITER ty;
CONSOLE_SCREEN_BUFFER_INFO csbi;
void *(window[CLI_WINDOWS]);
void *(search[CLI_SEARCHES]);
void *(module[CLI_MODULES]);
void *(device[CLI_DEVICES]);
void *optl;
} CLI_W32_STAT;

signed(__cdecl cli_vers_beta(CLI_W32_STAT(*argp)));
/* Display the version and more */

signed(__cdecl cli_display_header_beta(CLI_W32_STAT(*argp)));
/* Display the two-row header */

signed(__cdecl cli_display_footer_beta(signed short(comeback),signed char(*label),CLI_W32_STAT(*argp)));
/* Display the footer */

signed(__cdecl cli_confirm_save_beta(CLI_W32_STAT(*argp)));
// Confirm overwrite

signed(__cdecl cli_debug_monitor_beta(CLI_W32_STAT(*argp)));
// Monitor

signed(__cdecl cli_clear_rows_internal_beta(signed short(edge),CLI_W32_STAT(*argp)));
signed(__cdecl cli_clear_rows_beta(CLI_W32_STAT(*argp)));
signed(__cdecl cli_clear_row_beta(signed short comeback_flag,CLI_W32_STAT(*argp)));
// Clear the row/rows.

signed(__cdecl cli_coord_beta(signed short(flag),CLI_COORD(*cache),CLI_W32_STAT(*argp)));
// Get the current cursor position or set the cursor position.

signed(__cdecl cli_get_csbi_beta(CLI_W32_STAT(*argp)));
// Retrieve information about the specified console screen buffer.

signed(__cdecl cli_init_stat_beta(CLI_W32_STAT(*argp)));
// Retrieve a handle to the specified standard output device.

signed(__cdecl cl_spool_beta(CLI_W32_STAT(*argp)));
/* Build a doubly linked list. */

signed(__cdecl cl_ctrl_at_beta(void(*argp)));
signed(__cdecl cl_ctrl_a_beta(void(*argp)));
signed(__cdecl cl_ctrl_b_beta(void(*argp)));
signed(__cdecl cl_ctrl_c_beta(void(*argp)));
signed(__cdecl cl_ctrl_d_beta(void(*argp)));
signed(__cdecl cl_ctrl_e_beta(void(*argp)));
signed(__cdecl cl_ctrl_f_beta(void(*argp)));
signed(__cdecl cl_ctrl_g_beta(void(*argp)));

signed(__cdecl cl_ctrl_h_beta(void(*argp)));
signed(__cdecl cl_ctrl_i_beta(void(*argp)));
signed(__cdecl cl_ctrl_j_beta(void(*argp)));
signed(__cdecl cl_ctrl_k_beta(void(*argp)));
signed(__cdecl cl_ctrl_l_beta(void(*argp)));
signed(__cdecl cl_ctrl_m_beta(void(*argp)));
signed(__cdecl cl_ctrl_n_beta(void(*argp)));
signed(__cdecl cl_ctrl_o_beta(void(*argp)));

signed(__cdecl cl_ctrl_p_beta(void(*argp)));
signed(__cdecl cl_ctrl_q_beta(void(*argp)));
signed(__cdecl cl_ctrl_r_beta(void(*argp)));
signed(__cdecl cl_ctrl_s_beta(void(*argp)));
signed(__cdecl cl_ctrl_t_beta(void(*argp)));
signed(__cdecl cl_ctrl_u_beta(void(*argp)));
signed(__cdecl cl_ctrl_v_beta(void(*argp)));
signed(__cdecl cl_ctrl_w_beta(void(*argp)));

signed(__cdecl cl_ctrl_x_beta(void(*argp)));
signed(__cdecl cl_ctrl_y_beta(void(*argp)));
signed(__cdecl cl_ctrl_z_beta(void(*argp)));
signed(__cdecl cl_ctrl_lsb_beta(void(*argp)));
signed(__cdecl cl_ctrl_rs_beta(void(*argp)));
signed(__cdecl cl_ctrl_rsb_beta(void(*argp)));
signed(__cdecl cl_ctrl_ca_beta(void(*argp)));
signed(__cdecl cl_ctrl_ll_beta(void(*argp)));
// along with an array of function pointers for command lines

signed(__cdecl cl_kb_beta(CLI_W32_STAT(*argp)));
/* Backup, set and restore code pages for input/output. */

signed(__cdecl cl_io_beta(signed char(*cur),signed(size),CLI_W32_STAT(*argp)));
/* Input/Output Unicode bytes/characters in UTF-8 out of the key board to the console screen along with fn. cli_in/cli_out. */

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
// along with an array of function pointers for text

signed(__cdecl cli_kb_beta(CLI_W32_STAT(*argp)));
/* Backup, set and restore code pages for input/output. */

signed(__cdecl cli_io_beta(signed char(*cur),signed(size),CLI_W32_STAT(*argp)));
/* Input/Output Unicode bytes/characters in UTF-8 out of the key board to the console screen along with fn. cli_in/cli_out. */

signed(__cdecl cli_coord_output_pages_internal_beta(signed short(edge),CLI_PAGE(*page),CLI_W32_STAT(*argp)));
signed(__cdecl cli_coord_output_pages_beta(signed short(comeback),CLI_PAGE(*page),CLI_W32_STAT(*argp)));
signed(__cdecl cli_coord_clear_page_beta(signed short(comeback),CLI_PAGE(*page),CLI_W32_STAT(*argp)));
signed(__cdecl cli_coord_page_beta(signed short(comeback),CLI_PAGE(*page),CLI_W32_STAT(*argp)));

signed(__cdecl cli_coord_clear_output_beta(signed short(comeback),signed char(*cur),CLI_W32_STAT(*argp)));
signed(__cdecl cli_coord_output_beta(signed short(comeback),signed char(*cur),CLI_W32_STAT(*argp)));
signed(__cdecl cli_clear_output_beta(signed short(comeback),signed char(*cur),CLI_W32_STAT(*argp)));
signed(__cdecl cli_output_beta(signed short(comeback),signed char(*cur),CLI_W32_STAT(*argp)));

signed(__cdecl cli_col_outs_beta(signed char(*cur),CLI_W32_STAT(*argp)));
signed(__cdecl cli_col_out_beta(signed char(*cur),CLI_W32_STAT(*argp)));
// deprecated

signed(__cdecl cli_coord_outs_beta(signed char(*cur),CLI_W32_STAT(*argp)));
signed(__cdecl cli_coord_out_beta(signed char(*cur),CLI_W32_STAT(*argp)));
/* Form a column in the console screen. */

signed(__cdecl cli_do_beta(signed short(arg),CLI_W32_STAT(*argp)));
/* undo or redo */

signed(__cdecl cli_empty_beta(CLI_W32_STAT(*argp)));
signed(__cdecl cli_clip_beta(CLI_W32_STAT(*argp)));
signed(__cdecl cli_paste_beta(CLI_W32_STAT(*argp)));
/* Operate the clipboard. */

// and more..
