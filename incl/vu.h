/* **** Recursive functions

Check the data types and expressions

Remarks:
Along with a wrapper function to initialise the arguments for the recursive function.
If the function fails, the return value is (0x00). */







signed(__cdecl vu_refresh_internal(signed short(col),KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl vu_refresh(KNOT(*k),CMDLN_STAT(*argp)));

/* word-wrap: refresh console screen */


signed(__cdecl qsync_beta_internal(COORD(deadline),KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl qsync_beta(KNOT(*k),CMDLN_STAT(*argp)));

signed(__cdecl c_outs_beta(signed char(*di),CMDLN_STAT(*argp)));
signed(__cdecl c_out_ht_beta_internal(signed(arg),CMDLN_STAT(*argp)));
signed(__cdecl c_out_ht_beta(signed char(*di),CMDLN_STAT(*argp)));
signed(__cdecl c_out_beta(signed char(*di),CMDLN_STAT(*argp)));

/* Console Output (Beta) */


signed(__cdecl cq_out_internal(signed(deadline),KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl cq_out(KNOT(*k),CMDLN_STAT(*argp)));

/* Based on fn. c_out */


signed(__cdecl cmdln_load_internal(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_load(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_load_prep(CMDLN_STAT(*argp)));

/* Load a file */


signed(__cdecl qrefresh(KNOT(*k),CMDLN_STAT(*argp)));

signed(__cdecl rsync_coordinates_internal(COORD(coo),KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl rsync_coordinates(KNOT(*k),CMDLN_STAT(*argp)));

signed(__cdecl sync_coordinates_internal(COORD(coo),KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl sync_coordinates(CMDLN_STAT(*argp)));

signed(__cdecl c_outll_partially_internal(signed(n),KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl c_outll_partially(CMDLN_STAT(*argp)));

signed(__cdecl c_outll_internal(KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl c_outll(CMDLN_STAT(*argp)));

/* Output character lines in the doubly linked list */


signed(__cdecl clearground(CMDLN_STAT(*argp)));
signed(__cdecl clearbody(CMDLN_STAT(*argp)));
signed(__cdecl clearfooter(CMDLN_STAT(*argp)));
signed(__cdecl clearheader(CMDLN_STAT(*argp)));
signed(__cdecl clearbelow(CMDLN_STAT(*argp)));

/* Clear the console screen buffer */


signed(__cdecl refresh_screen_internal(KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl refresh_screen(KNOT(*k),CMDLN_STAT(*argp)));

signed(__cdecl refresh_screen_at_the_caret_pos(KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl clear_rows(CMDLN_STAT(*argp)));
// similar to system("cls");

signed(__cdecl refresh_row_numbers_internal(KNOT(*k),CMDLN_STAT(*argp)));
signed(__cdecl refresh_row_numbers(CMDLN_STAT(*argp)));

/* change/update the coordinate departure Y for knots e.g., to scroll, to delete a knot or.. */


signed(__cdecl ascend2ll(CMDLN_STAT(*argp)));
signed(__cdecl descend2ll(CMDLN_STAT(*argp)));

//* Deprecated..
signed(__cdecl ascend_ll(KNOT(**di),KNOT(*si)));
signed(__cdecl descend_ll(KNOT(**di),KNOT(*si)));
//*/

//* Deprecated..
signed(__cdecl cmdln_unmap_history(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_output_history(CMDLN_STAT(*argp)));
//*/

signed(__cdecl cmdln_unmap(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_output(CMDLN_STAT(*argp)));
signed(__cdecl cat_ll_and_histories(KNOT(*argp)));

// Refer at incl/recur.h for fn. unmap2_ll and fn. unmap_ll
signed(__cdecl cat_ll(KNOT(*argp)));

signed(__cdecl unmap_history(SNAPSHOT(**argp)));
signed(__cdecl cat_history(SNAPSHOT(*argp)));

signed(__cdecl delete_knot(KNOT(*cache),CMDLN_STAT(*argp)));
signed(__cdecl add2ll(KNOT(*cache),CMDLN_STAT(*argp)));
signed(__cdecl rebase2ll(KNOT(*cache),CMDLN_STAT(*argp)));
signed(__cdecl absorb2ll(KNOT(*cache),CMDLN_STAT(*argp)));
signed(__cdecl concat2ll(KNOT(*cache),CMDLN_STAT(*argp)));
signed(__cdecl concat2ll_for_history(SNAPSHOT(*cache),SNAPSHOT(**lead),SNAPSHOT(**base)));

/* Based on a doubly linked list (for vu.exe) */


signed(__cdecl cmdln_save(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_save_prep(CMDLN_STAT(*argp)));

/* fn. vu_internal > fn. cmdln_ctrl_s > fn. cmdln_save_prep > fn. cmd_io > fn. cmdln_save > fn. cmd_io */


signed(__cdecl cmdln_redo(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_undo(CMDLN_STAT(*argp)));

/* fn. cmdln_ctrl_lbracket and fn. cmdln_ctrl_rbracket */


signed(__cdecl c_outs(signed char(*di), CMDLN_STAT(*argp)));

signed(__cdecl c_out_ht(signed(arg), CMDLN_STAT(*argp)));
signed(__cdecl c_out(signed char(*di), CMDLN_STAT(*argp)));

/* Output as whitespace for a tab. */
