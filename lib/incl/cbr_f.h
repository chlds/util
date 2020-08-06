/*

The constants, data types and functions for Typewriter

Along with C library

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c and at util/lib/obj/src/cli_io.c
Refer at ./config.h
*/


signed(__cdecl cli_prev_word_internal(signed char(**retrv),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_prev_word(signed char(**retrv),CLI_TYPEWRITER(*argp)));
// retrieve an address of the previous word.

signed(__cdecl cli_rule(signed char(*cur),CLI_TYPEWRITER(*argp)));

signed(__cdecl cli_emul(signed short(emul),CLI_TYPEWRITER(*argp)));
// backup or restore parameters for workspace

signed(__cdecl cl_extend(signed short(cue),signed(extra),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_extend(signed short(channel),signed short(cue),signed(extra),CLI_TYPEWRITER(*argp)));
// extend workspace

signed(__cdecl cli_append(signed char(*appendant),CLI_TYPEWRITER(*argp)));
// append

signed(__cdecl cli_display_header(CLI_TYPEWRITER(*argp)));
// display the two-row header

signed(__cdecl cli_eq_eol(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_tab(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_wrap(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_monitor(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_load(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_eor(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_display(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_frame(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_internal(signed short(term),signed(fd),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq(signed(fd),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_parse(CLI_TYPEWRITER(*argp)));
// parse a config file for the typewriter

signed(__cdecl cli_support_meta_keys(signed(*character),signed char(second),signed char(first)));
/* Support for function and arrow keys */

signed(__cdecl cli_init_ty(signed(size),CLI_TYPEWRITER(*argp)));
// initialise

signed(__cdecl cli_init_wraps(CLI_TYPEWRITER(*argp)));
// initialise

signed(__cdecl cli_init_rolls(signed(size),CLI_ROLL(*argp)));
signed(__cdecl cli_unmap_rolls(CLI_ROLL(*argp)));
// charge rolls

signed(__cdecl cli_search_pages_internal(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_search_pages(CLI_TYPEWRITER(*argp)));
// search pages out of the index page to find characters.

signed(__cdecl cli_wrap_internal(signed short(terminate),signed char(*sym),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_wrap(signed char(*sym),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_load_internal(signed(count),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_load_old_internal(signed(count),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_load(CLI_TYPEWRITER(*argp)));
// load

signed(__cdecl cli_write_old(signed(descriptor),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_write(signed(descriptor),CLI_TYPEWRITER(*argp)));
// write

signed(__cdecl cli_save_as(signed short(update),CLI_TYPEWRITER(*argp)));
// save as

signed(__cdecl cli_book_no_history(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_book(CLI_TYPEWRITER(*argp)));
// copy characters on workspace to the current page.

signed(__cdecl cli_init_workspace(CLI_TYPEWRITER(*argp)));
// initialise workspace.

signed(__cdecl cli_connect_with_workspace(CLI_PAGE(*page),CLI_TYPEWRITER(*argp)));
// connect a page with workspace.

signed(__cdecl cli_init_pages(CLI_SPOOL(*argp)));

signed(__cdecl cli_concat_pages(CLI_PAGE(*cache),CLI_SPOOL(*argp)));
signed(__cdecl cli_bind_pages(CLI_SPOOL(*argp)));
signed(__cdecl cli_merge_pages(CLI_SPOOL(*argp)));
signed(__cdecl cli_reconcat_pages(signed short(*backward),CLI_SPOOL(*argp)));
signed(__cdecl cli_unmap_pages(CLI_SPOOL(*argp)));

signed(__cdecl cli_insert_pages(CLI_SPOOL(*di),CLI_SPOOL(*si)));
signed(__cdecl cli_copy_to_pages_internal(signed short(lastbreak),CLI_SPOOL(*argp),signed char(*buff),signed char(*base)));
signed(__cdecl cli_copy_to_pages(signed short(lastbreak),CLI_SPOOL(*argp),signed char(*base)));
signed(__cdecl cli_copy_pages(signed short(linebreak_form),signed(count),signed(size),signed short(*w),CLI_PAGE(*argp)));
signed(__cdecl cli_count_pages(CLI_PAGE(*argp)));

signed(__cdecl cli_page_internal(CLI_SPOOL(*argp),signed(n)));
signed(__cdecl cli_page(CLI_PAGE(**di),CLI_SPOOL(*argp),CLI_PAGE(*si),signed(n)));
// page n times.

signed(__cdecl cli_concat_snapshots(CLI_SNAPSHOT(*cache),CLI_HISTORY(*argp)));
signed(__cdecl cli_bind_snapshots(CLI_HISTORY(*argp)));
signed(__cdecl cli_unmap_snapshots(CLI_HISTORY(*argp)));
// based on a doubly linked list (i.e., not a circular linked list)

signed(__cdecl cli_diff_history(signed short(*diff),signed char(*base),CLI_PAGE(*argp)));
signed(__cdecl cli_history(CLI_PAGE(*argp)));
// take snapshots to undo and redo.

signed(__cdecl cl_ctrl_at(void(*argp)));
signed(__cdecl cl_ctrl_a(void(*argp)));
signed(__cdecl cl_ctrl_b(void(*argp)));
signed(__cdecl cl_ctrl_c(void(*argp)));
signed(__cdecl cl_ctrl_d(void(*argp)));
signed(__cdecl cl_ctrl_e(void(*argp)));
signed(__cdecl cl_ctrl_f(void(*argp)));
signed(__cdecl cl_ctrl_g(void(*argp)));

signed(__cdecl cl_ctrl_h(void(*argp)));
signed(__cdecl cl_ctrl_i(void(*argp)));
signed(__cdecl cl_ctrl_j(void(*argp)));
signed(__cdecl cl_ctrl_k(void(*argp)));
signed(__cdecl cl_ctrl_l(void(*argp)));
signed(__cdecl cl_ctrl_m(void(*argp)));
signed(__cdecl cl_ctrl_n(void(*argp)));
signed(__cdecl cl_ctrl_o(void(*argp)));

signed(__cdecl cl_ctrl_p(void(*argp)));
signed(__cdecl cl_ctrl_q(void(*argp)));
signed(__cdecl cl_ctrl_r(void(*argp)));
signed(__cdecl cl_ctrl_s(void(*argp)));
signed(__cdecl cl_ctrl_t(void(*argp)));
signed(__cdecl cl_ctrl_u(void(*argp)));
signed(__cdecl cl_ctrl_v(void(*argp)));
signed(__cdecl cl_ctrl_w(void(*argp)));

signed(__cdecl cl_ctrl_x(void(*argp)));
signed(__cdecl cl_ctrl_y(void(*argp)));
signed(__cdecl cl_ctrl_z(void(*argp)));
signed(__cdecl cl_ctrl_lsb(void(*argp)));
signed(__cdecl cl_ctrl_rs(void(*argp)));
signed(__cdecl cl_ctrl_rsb(void(*argp)));
signed(__cdecl cl_ctrl_ca(void(*argp)));
signed(__cdecl cl_ctrl_ll(void(*argp)));
// along with an array of function pointers for command lines

signed(__cdecl cli_ctrl_at(void(*argp)));
signed(__cdecl cli_ctrl_a(void(*argp)));
signed(__cdecl cli_ctrl_b(void(*argp)));
signed(__cdecl cli_ctrl_c(void(*argp)));
signed(__cdecl cli_ctrl_d(void(*argp)));
signed(__cdecl cli_ctrl_e(void(*argp)));
signed(__cdecl cli_ctrl_f(void(*argp)));
signed(__cdecl cli_ctrl_g(void(*argp)));

signed(__cdecl cli_ctrl_h(void(*argp)));
signed(__cdecl cli_ctrl_i(void(*argp)));
signed(__cdecl cli_ctrl_j(void(*argp)));
signed(__cdecl cli_ctrl_k(void(*argp)));
signed(__cdecl cli_ctrl_l(void(*argp)));
signed(__cdecl cli_ctrl_m(void(*argp)));
signed(__cdecl cli_ctrl_n(void(*argp)));
signed(__cdecl cli_ctrl_o(void(*argp)));

signed(__cdecl cli_ctrl_p(void(*argp)));
signed(__cdecl cli_ctrl_q(void(*argp)));
signed(__cdecl cli_ctrl_r(void(*argp)));
signed(__cdecl cli_ctrl_s(void(*argp)));
signed(__cdecl cli_ctrl_t(void(*argp)));
signed(__cdecl cli_ctrl_u(void(*argp)));
signed(__cdecl cli_ctrl_v(void(*argp)));
signed(__cdecl cli_ctrl_w(void(*argp)));

signed(__cdecl cli_ctrl_x(void(*argp)));
signed(__cdecl cli_ctrl_y(void(*argp)));
signed(__cdecl cli_ctrl_z(void(*argp)));
signed(__cdecl cli_ctrl_lsb(void(*argp)));
signed(__cdecl cli_ctrl_rs(void(*argp)));
signed(__cdecl cli_ctrl_rsb(void(*argp)));
signed(__cdecl cli_ctrl_ca(void(*argp)));
signed(__cdecl cli_ctrl_ll(void(*argp)));
// along with an array of function pointers for text

signed(__cdecl cli_io(signed char *cur,signed size,CLI_STAT(*argp)));
/* input/Output Unicode bytes/characters in UTF-8 out of the key board to the console screen along with fn. cli_in/cli_out. */

// and more..
