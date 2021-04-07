/*

The constants, data types and functions for Typewriter

Along with C library

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/car/obj/src/cli_in.c and at util/lib/cbr/obj/src/cli_io.c
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

signed(__cdecl cli_display_header_beta(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_display_header(CLI_TYPEWRITER(*argp)));
/* Display the two-row header */

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

signed(__cdecl cli_connect_with_workspace(cli_page_t(*page),CLI_TYPEWRITER(*argp)));
// connect a page with workspace.

signed(__cdecl cli_concat_pages(cli_page_t(*cache),cli_spool_t(*argp)));
signed(__cdecl cli_bind_pages(cli_spool_t(*argp)));
signed(__cdecl cli_merge_pages(cli_spool_t(*argp)));
signed(__cdecl cli_reconcat_pages(signed short(*backward),cli_spool_t(*argp)));
signed(__cdecl cli_unmap_pages(cli_spool_t(*argp)));

signed(__cdecl cli_insert_pages(cli_spool_t(*di),cli_spool_t(*si)));
signed(__cdecl cli_copy_to_pages_internal(signed short(lastbreak),cli_spool_t(*argp),signed char(*buff),signed char(*base)));
signed(__cdecl cli_copy_to_pages(signed short(lastbreak),cli_spool_t(*argp),signed char(*base)));
signed(__cdecl cli_copy_pages(signed short(linebreak_form),signed(count),signed(size),signed short(*w),cli_page_t(*argp)));
signed(__cdecl cli_count_pages(cli_page_t(*argp)));

signed(__cdecl cli_page_internal(cli_spool_t(*argp),signed(n)));
signed(__cdecl cli_page(cli_page_t(**di),cli_spool_t(*argp),cli_page_t(*si),signed(n)));
// page n times.

signed(__cdecl cli_concat_snapshots(cli_snapshot_t(*cache),cli_history_t(*argp)));
signed(__cdecl cli_bind_snapshots(cli_history_t(*argp)));
signed(__cdecl cli_unmap_snapshots(cli_history_t(*argp)));
// based on a doubly linked list (i.e., not a circular linked list)

signed(__cdecl cli_diff_history(signed short(*diff),signed char(*base),cli_page_t(*argp)));
signed(__cdecl cli_history(cli_page_t(*argp)));
// take snapshots to undo and redo.

signed(__cdecl cli_in_w(signed(*character),signed char(*argp),signed(size)));
/* Get Unicode bytes in UTF-8 out of the keyboard. */

// and more..
