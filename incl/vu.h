/* **** Recursive functions

Check the data types and expressions

Remarks:
Along with a wrapper function to initialise the arguments for the recursive function.
If the function fails, the return value is (0x00). */







//* Deprecated..
signed(__cdecl cmdln_unmap_history(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_output_history(CMDLN_STAT(*argp)));
//*/

signed(__cdecl cmdln_unmap(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_output(CMDLN_STAT(*argp)));

signed(__cdecl unmap_history(SNAPSHOT(*argp)));
signed(__cdecl cat_history(SNAPSHOT(*argp)));

signed(__cdecl concat2ll_for_history(SNAPSHOT(*cache),SNAPSHOT(**lead),SNAPSHOT(**base)));
signed(__cdecl concat2ll(KNOT(*cache),KNOT(**lead),KNOT(**base)));

/* Based on a doubly linked list (for vu.exe) */


signed(__cdecl cmdln_redo(CMDLN_STAT(*argp)));
signed(__cdecl cmdln_undo(CMDLN_STAT(*argp)));


signed(__cdecl cipher_embed_r(signed char(*di), signed(n)));
signed(__cdecl cipher_embed(signed char(*di), signed(n)));

/* Embed (0x00) (n) times out of the di. */

signed(__cdecl ct_txt_internal(signed(align), signed(*argp), signed char(*base)));
signed(__cdecl ct_txt(signed(align), signed char(*base)));

/* Count letters along with alignement of the tab to the null character. */
