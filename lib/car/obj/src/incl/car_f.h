/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


signed(__cdecl init_flh(signed(arg),flh_t(*argp))); // deprecated..

signed(__cdecl ctrl_at_b(void(*argp)));
signed(__cdecl ctrl_a_b(void(*argp)));
signed(__cdecl ctrl_b_b(void(*argp)));
signed(__cdecl ctrl_c_b(void(*argp)));
signed(__cdecl ctrl_d_b(void(*argp)));
signed(__cdecl ctrl_e_b(void(*argp)));
signed(__cdecl ctrl_f_b(void(*argp)));
signed(__cdecl ctrl_g_b(void(*argp)));
signed(__cdecl ctrl_h_b(void(*argp)));
signed(__cdecl ctrl_i_b(void(*argp)));
signed(__cdecl ctrl_j_b(void(*argp)));
signed(__cdecl ctrl_k_b(void(*argp)));
signed(__cdecl ctrl_l_b(void(*argp)));
signed(__cdecl ctrl_m_b(void(*argp)));
signed(__cdecl ctrl_n_b(void(*argp)));
signed(__cdecl ctrl_o_b(void(*argp)));
signed(__cdecl ctrl_p_b(void(*argp)));
signed(__cdecl ctrl_q_b(void(*argp)));
signed(__cdecl ctrl_r_b(void(*argp)));
signed(__cdecl ctrl_s_b(void(*argp)));
signed(__cdecl ctrl_t_b(void(*argp)));
signed(__cdecl ctrl_u_b(void(*argp)));
signed(__cdecl ctrl_v_b(void(*argp)));
signed(__cdecl ctrl_w_b(void(*argp)));
signed(__cdecl ctrl_x_b(void(*argp)));
signed(__cdecl ctrl_y_b(void(*argp)));
signed(__cdecl ctrl_z_b(void(*argp)));
signed(__cdecl ctrl_lsb_b(void(*argp)));
signed(__cdecl ctrl_rs_b(void(*argp)));
signed(__cdecl ctrl_rsb_b(void(*argp)));
signed(__cdecl ctrl_ca_b(void(*argp)));
signed(__cdecl ctrl_ll_b(void(*argp)));
signed(__cdecl ctrl_none_b(void(*argp)));
signed(__cdecl ctrl_lf_b(void(*argp)));
/* Ctrl keys */

signed(__cdecl clih_at_b(void(*argp)));
signed(__cdecl clih_x_b(void(*argp)));
signed(__cdecl clih_fn(signed(arg),void(*argp)));
signed(__cdecl clih_pin(signed char(*argp)));
signed(__cdecl cue_backward_b_rrr(signed(arg),signed(rear)));
signed(__cdecl cue_backward_b_rr(signed(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl cue_backward_b_r(signed char(*sym),signed char(*argp)));
signed(__cdecl cue_backward_b(signed char(*sym),signed char(*argp)));
signed(__cdecl backward_del(signed char(*sym),signed char(*argp)));
signed(__cdecl k_b_r(signed(colm),signed(arg),signed char(*sy),signed char(**argp)));
signed char *(__cdecl k_b(signed(colm),signed(arg),signed char(*sy),signed short(*argp)));
signed(__cdecl kb_r(signed(colm),signed(arg),signed char(*sy)));
signed(__cdecl kb(signed(colm),signed(arg),signed char(*sy)));
signed(__cdecl cli_k_b_r(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp)));
signed(__cdecl cli_k_b(signed(colm),signed(arg),signed char(*sy),signed char(**argp)));
signed(__cdecl io_o_b_rrrr(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp)));
signed(__cdecl io_o_b_rrr(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp)));
signed(__cdecl io_o_b_rr(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp)));
signed(__cdecl io_o_b_r(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp)));
signed(__cdecl io_o_b(signed(colm),signed(arg),signed(*offs),signed char(*sy),signed char(**argp)));
signed(__cdecl coord_out_pg_r(signed(colm),signed(arg/* align */),signed(*offs),pg_t(*argp)));
signed(__cdecl coord_out_pg(signed(colm),signed(arg/* align */),signed(*offs),pg_t(*argp)));
signed(__cdecl coord_out_pa(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),signed char(*argp)));
signed(__cdecl out_o_pa(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),signed char(*argp)));
signed(__cdecl out_o_pg(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),pg_t(*argp)));
signed(__cdecl cv_o_pg_rrr(signed(arg),pg_t(*di),signed char(*si)));
signed(__cdecl cv_o_pg_rr(signed(arg),pg_t(*di),signed char(*si)));
signed(__cdecl cv_o_pg_r(signed(arg),pg_t(*di),pg_t(*si)));
pg_t *(__cdecl cv_o_pg(signed(arg/* colm */),pg_t(*argp)));
signed(__cdecl coord_out_o_pg_overline(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),pg_t(*argp)));
signed(__cdecl coord_out_o_pg_r(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),pg_t(*argp)));
signed(__cdecl coord_out_o_pg(signed(colm),signed(arg/* align */),signed(*offs),signed char(*sym),pg_t(*argp)));
signed(__cdecl cumul_pg(signed(dif),signed(arg),pg_t(*argp)));
signed(__cdecl cumul_va(signed(dif),signed(arg),signed char(**argp)));
signed(__cdecl rule_pg(signed(dif),signed(arg),pg_t(*argp)));
signed(__cdecl rule_va(signed(dif),signed(arg),signed char(**argp)));
signed(__cdecl align_pg(pg_t(*argp)));
signed(__cdecl align_va(signed char(**argp)));
signed(__cdecl ct_pg_rows(signed(colm),pg_t(*argp)));
signed(__cdecl ct_rows_r(signed(arg),signed char(*argp)));
signed(__cdecl ct_rows(signed(colm),signed char(*argp)));
signed(__cdecl ct_pgs_r(pg_t(*argp)));
signed(__cdecl ct_pgs(pg_t(*argp)));
/* I/O */

signed(__cdecl cv_pa_rrr(signed(n),pg_t(*di),signed char(*si)));
signed(__cdecl cv_pa_rr(signed(arg),signed char(*sym),pg_t(*di),signed char(*si)));
signed(__cdecl cv_pa_r(signed(arg),signed char(*sym),pg_t(*di),signed char(*si)));
pg_t *(__cdecl cv_pa(signed(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl cv_ap_r(signed(arg),signed char(**di),pg_t(*si)));
signed char *(__cdecl cv_ap(signed(arg),pg_t(*argp)));
signed(__cdecl mon_b(signed(arg),pg_t(*argp),signed(*offs),signed char(**argpp)));
signed(__cdecl co_br(signed(arg)));
signed(__cdecl coord_outs_b_r(signed(colm),signed(arg/* align */),signed char(*argp)));
signed(__cdecl coord_outs_b(signed(colm),signed(arg/* align */),signed char(*argp)));
signed(__cdecl spool_pg_r(signed(arg),pg_t(**di),pg_t(*si)));
pg_t *(__cdecl spool_pg(signed(arg),pg_t(*argp)));
signed(__cdecl cv_pg_rrr(signed(n),signed(arg),pg_t(*di),pg_t(*si)));
signed(__cdecl cv_pg_rr(signed(arg),signed char(*sym),pg_t(*di),pg_t(*si)));
signed(__cdecl cv_pg_r(signed(arg),signed char(*sym),pg_t(*di),pg_t(*si)));
pg_t *(__cdecl cv_pg(signed(arg),signed char(*sym),pg_t(*argp)));
signed(__cdecl cue_out_pg_r(signed(n),signed(arg/* align */),pg_t(*argp)));
signed(__cdecl cue_out_pg(signed(arg/* align */),signed char(*sym),pg_t(*argp)));
signed(__cdecl out_pg(signed(arg/* align */),pg_t(*argp)));
signed(__cdecl cue_pg_rr(signed short(arg),signed char(*sym),pg_t(*argp)));
signed(__cdecl cue_pg_r(signed short(arg),signed char(*sym),pg_t(*argp)));
signed(__cdecl cue_pg(signed char(*sym),pg_t(*argp)));
signed(__cdecl ct_pg(signed short(align),signed char(*sym),pg_t(*argp)));
signed(__cdecl o_pg(signed(arg/* align */),pg_t(*argp)));
signed(__cdecl cat_pg(signed short(flag),pg_t(*di),pg_t(*si)));
signed(__cdecl bind_pg_r(pg_t(*di),pg_t(*si)));
signed(__cdecl bind_pg(pg_t(*argp)));
signed(__cdecl init_va(signed(cached),signed(arg),signed char(**argp)));
signed(__cdecl init_pg(signed(arg),pg_t(*argp)));
signed(__cdecl unmap_pg(pg_t(*argp)));
signed(__cdecl unbind_pg(pg_t(*argp)));
signed(__cdecl rl_pg(pg_t(**argp)));
signed(__cdecl ct_to_pg(pg_t(*di),pg_t(*si)));
signed(__cdecl ct_b_to_pg(pg_t(*di),pg_t(*si)));
signed(__cdecl ct_b_up_to_pg(signed(arg),pg_t(*argp)));
/* Page */

signed(__cdecl init_v_w(signed(cached),signed(arg),signed short(**argp)));
signed(__cdecl init_v_b(signed(cached),signed(arg),signed char(**argp)));
signed(__cdecl init_a_d(signed(arg),signed(*argp)));
/* Initialise */

signed(__cdecl trunc_w_r(signed short(*path)));
signed(__cdecl trunc_w(signed short(*cache/* an extension for backups */),signed short(*path)));
signed(__cdecl trunc_b_r(signed char(*path)));
signed(__cdecl trunc_b(signed char(*cache/* an extension for backups */),signed char(*path)));
signed(__cdecl backup_w(signed short(*extension),signed short(*argp)));
signed(__cdecl backup_b(signed char(*extension),signed char(*argp)));
signed(__cdecl jd_w(signed(arg/* code of line break */),signed short(*di),signed char(**si)));
signed(__cdecl jd_b(signed(arg/* code of line break */),signed char(*di),signed char(**si)));
signed(__cdecl parse_w(signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl parse_b(signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl appd_w(signed(arg/* code of line break */),signed short(*di/* path */),signed char(*si/* contents */)));
signed(__cdecl appd_b(signed(arg/* code of line break */),signed char(*di/* path */),signed char(*si/* contents */)));
signed(__cdecl ed_w(signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl ed_b(signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl str_w(signed(arg/* code of line break */),signed char(*perm),signed short(*di/* path */),signed char(*si/* contents */)));
signed(__cdecl str_b_rr(signed(fd),signed char(**argp)));
signed(__cdecl str_b_r(signed(fd),void(*argp)));
signed(__cdecl str_b(signed(arg/* code of line break */),signed char(*perm),signed char(*di/* path */),signed char(*si/* contents */)));
signed(__cdecl wr_rd_l(signed(*fd),signed char(*cache),signed(size)));
signed(__cdecl wr_rd_r(signed(*fd),signed char(*cache),signed(size)));
signed(__cdecl wr_rd(signed(*fd)));
signed(__cdecl wr_ds_r(signed(fd),signed(**argp)));
signed(__cdecl wr_ds_w_r(signed(fd),signed(**argp)));
signed(__cdecl wr_ds_w(signed short(**argp)));
signed(__cdecl wr_ds_b_r(signed(fd),signed(**argp)));
signed(__cdecl wr_ds_b(signed char(**argp)));
signed(__cdecl appd_ds_w_r(signed(fd),signed(**argp)));
signed(__cdecl appd_ds_w(signed short(**argp)));
signed(__cdecl appd_ds_b_r(signed(fd),signed(**argp)));
signed(__cdecl appd_ds_b(signed char(**argp)));
signed(__cdecl xt_parse_permission_w(signed(*retv),signed(*cache),signed char(*argp)));
signed(__cdecl xt_parse_access_w(signed(*retv),signed char(*argp)));
signed(__cdecl xt_parse_w(signed(*permission),signed(*access),signed char(*argp)));
signed(__cdecl xt_w(signed char(*param),signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl xt_parse_permission(signed(*retv),signed(*cache),signed char(*argp)));
signed(__cdecl xt_parse_access(signed(*retv),signed char(*argp)));
signed(__cdecl xt_parse(signed(*permission),signed(*access),signed char(*argp)));
signed(__cdecl xt(signed char(*param),signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl cl_w(signed(arg)));
signed(__cdecl cl_b(signed(arg)));
signed(__cdecl rd_b(signed(fd),signed char(*argp),signed(arg)));
signed(__cdecl wr_b(signed(fd),signed char(*argp),signed(arg)));
signed(__cdecl op_w(signed short(*path),signed(*argp),...));
signed(__cdecl op_b(signed char(*path),signed(*argp),...));
/* Operation */

signed(__cdecl catppp(signed char(***argp)));
signed(__cdecl catpp(signed char(**argp)));
/* Output character lines */

signed(__cdecl xe(signed(arg/* continue */),void(*argp),signed(__cdecl**fn)(void(*argp))));
/* Execute */

signed(__cdecl cf_dir_w(signed short(*argp)));
signed(__cdecl cf_dir(signed char(*argp)));
signed(__cdecl cf_ff_w(signed short(*di),signed char(*si)));
signed(__cdecl cf_ff(signed char(*di),signed char(*si)));
signed(__cdecl cf_f_extensions_w(signed short(*cache),signed short(*argp)));
signed(__cdecl cf_f_extensions(signed char(*cache),signed char(*argp)));
signed(__cdecl already_w(size_t(*size),signed short(*argp)));
signed(__cdecl already_b(size_t(*size),signed char(*argp)));
signed(__cdecl already_in_w(signed short(*argp)));
signed(__cdecl already_in_b(signed char(*argp)));
/* Confirm */

signed(__cdecl flag_b_r(signed char(**v),signed char(*a),signed short(*di),signed short(*si)));
signed(__cdecl flag_b(signed char(**v),signed char(*a),signed short(*di),signed short(*si)));
/* Flag */

signed(__cdecl commandlet(signed(arg/* stack size */),void(*argp),void(__cdecl*f)(void(*argp))));
/* run in a subroutine */

void*(__cdecl alloc(signed(arg)));
/* Allocate i.e., fn. malloc */

signed(__cdecl rl_vw_r(signed short(**argp)));
signed(__cdecl rl_vw(signed short(***argp)));
signed(__cdecl rl_v_r(signed char(**argp)));
signed(__cdecl rl_v(signed char(***argp)));
signed(__cdecl rl(void(*argp)));
/* Release i.e., fn. free */

signed(__cdecl unmap_w(signed short(**argp)));
signed(__cdecl unmap_b(signed char(**argp)));
/* Unmap */

signed(__cdecl cv_va_r(signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_va(signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl cv_wo_r(signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_wo(signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl ct_va(signed char(*sym),signed char(*argp)));
signed(__cdecl ct_wo(signed char(*sym),signed char(*argp)));
/* Map an array of pointers on the RAM. */

signed(__cdecl cv_ww_r(signed short(arg),signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_ww(signed short(arg),signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl ct_ww_r(signed short(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl ct_ww(signed short(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl wrap_words_r(signed short(arg),signed(*cache),signed char(*sym),signed char(*argp)));
signed(__cdecl wrap_words(signed short(arg),signed char(*sym),signed char(*argp)));
/* Map an array of pointers for words-wrap arrays on the RAM */

signed(__cdecl cv_argt_r(signed char(**di),signed char(*si)));
signed(__cdecl cv_argt(signed char(***di),signed char(*si)));
signed(__cdecl cv_v_r(signed char(**di),signed short(*flag),signed char(*si)));
signed(__cdecl cv_v(signed char(***di),signed char(*si)));
/* Map an array of pointers for word-split arrays on and unmap the ones out of the RAM */

signed(__cdecl cv_av_w(signed short(*cache),signed short(**di),signed short(**si)));
signed(__cdecl cv_av_b(signed char(*cache),signed char(**di),signed char(**si)));
/* Convert */

signed(__cdecl coord_restore(void));
signed(__cdecl coord_save(void));
signed(__cdecl coord_report_r_r(signed(arg),coord_t(*di),signed char(*si)));
signed(__cdecl coord_report_rr(signed char(**argp)));
signed(__cdecl coord_report_r(signed char(**argp)));
signed(__cdecl coord_report(signed(arg),coord_t(*argp)));
signed(__cdecl coord_b_r_r(signed char(*y),signed char(*x)));
signed(__cdecl coord_b_r(signed(arg),coord_t(*argp)));
signed(__cdecl coord_b(signed short(flag),signed(arg),coord_t(*argp)));
signed(__cdecl coord_y_b(void));
signed(__cdecl coord_x_b(void));
signed(__cdecl init_coord(coord_t(*argp)));
signed(__cdecl caret_b(signed(x),signed(y)));
signed(__cdecl rect_report(signed(arg),rect_t(*argp)));
signed(__cdecl rect_b_r_r(signed char(*y),signed char(*x)));
signed(__cdecl rect_b_r(signed(arg),rect_t(*argp)));
signed(__cdecl rect_b(signed short(flag),signed(arg),rect_t(*argp)));
signed(__cdecl clear_rows_r(signed(arg)));
signed(__cdecl clear_rows(signed(arg)));

signed(__cdecl cli_output_b(signed short(arg/* align */),signed char(*argp)));
signed(__cdecl cli_outs_b(signed short(arg/* align */),signed char(*argp)));
signed(__cdecl cli_out_b(signed short(arg/* align */),signed char(*argp)));
signed(__cdecl cli_indent_r(signed short(arg)));
signed(__cdecl cli_indent(signed short(arg)));
signed(__cdecl cli_reckon(signed short(arg/* align */)));
signed(__cdecl cli_o_b(signed(arg),signed char(*argp)));
/* Output Unicode characters decoded out of Unicode bytes */

signed(__cdecl cv_wb_v_r(signed short(**di),signed char(**si)));
signed(__cdecl cv_wb_v(signed short(***di),signed char(**si)));
signed(__cdecl cv_wb(signed short(**di),signed char(*si)));
signed(__cdecl decode_wb_r(signed short(**di),signed char(*si)));
signed(__cdecl decode_wb(signed short(**di),signed char(*si)));
signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si))); // deprecated
signed(__cdecl unpair_dw_r(signed(*di),signed short(*si)));
signed(__cdecl unpair_dw(signed(*di),signed short(*si)));
signed(__cdecl pair_wd_r(signed short(**di),signed(si)));
signed(__cdecl pair_wd(signed short(**di),signed(si)));
signed(__cdecl decode_b_r(signed(arg),signed(*di),signed char(*si)));
signed(__cdecl decode_b(signed(*di),signed char(*si)));
signed(__cdecl decode_surrogate_second(signed short(*di),signed(si)));
signed(__cdecl decode_surrogate_first(signed short(*di),signed(si)));
signed(__cdecl nbytechar(signed char(arg)));
/* Output UTF-16 characters decoded out of UTF-8 bytes */

signed(__cdecl cv_bw_v_r(signed char(**di),signed short(**si)));
signed(__cdecl cv_bw_v(signed char(***di),signed short(**si)));
signed(__cdecl cv_bw(signed char(**di),signed short(*si)));
signed(__cdecl encode_bv_r(signed char(**di),signed short(**si)));
signed(__cdecl encode_bv(signed char(**di),signed short(**si)));
signed(__cdecl encode_bw_r(signed char(**di),signed short(*si)));
signed(__cdecl encode_bw(signed char(**di),signed short(*si)));
signed(__cdecl encode_d_r(signed(arg),signed char(*di),signed(si)));
signed(__cdecl encode_d(signed char(**di),signed(si)));
signed(__cdecl encode_surrogate_w(signed char(**di),signed short(second),signed short(first))); // deprecated
signed(__cdecl ncharbyte(signed(arg)));
/* Encode a character into bytes based on UTF-8. */

signed(__cdecl ci_b_except_r(signed char(**argp)));
signed(__cdecl ci_b_rrr(signed(arg),signed char(**argp)));
signed(__cdecl ci_b_rr(signed char(**argp)));
signed char *(__cdecl ci_b_r(signed(arg)));
signed char *(__cdecl ci_b_except(void));
signed char *(__cdecl ci_b(void));
signed char *(__cdecl cin_b(void));
signed char *(__cdecl cli_in_b(void));
/* Input */

signed(__cdecl cli_i_except_r(signed char(**argp)));
signed(__cdecl cli_i_except(signed char(**argp)));
signed(__cdecl cli_i_b_r(signed(arg),signed char(**argp)));
signed(__cdecl cli_i_b(signed char(**argp)));
/* Get Unicode bytes in UTF-8 out of the keyboard -- deprecated */

signed(__cdecl ct_a_back_r(signed char(*argp)));
signed(__cdecl ct_a_back(signed char(*argp)));
signed(__cdecl ct_a(signed char(*argp)));
/* Based on UTF-8 */

signed(__cdecl alert_b_r(signed(arg),signed short(hr),signed short(mn)));
signed(__cdecl alert_b(signed(arg),signed char(*argp)));
signed(__cdecl cv_hr_noon_r(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_noon(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_light_rr(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_light_r(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_light(signed short(*hr),signed char(*argp)));
signed(__cdecl cv_hr_r(signed short(*hr),signed short(*mn),signed char(*si)));
signed(__cdecl cv_hr(signed short(*hr),signed short(*mn),signed char(*si)));
signed(__cdecl cv_mn(signed short(*mn),signed char(*si)));
signed(__cdecl cv_at(signed short(*hr),signed short(*mn),signed char(*argp)));
/* Convert into time */

signed char *(__cdecl queue_backward(signed char(**argp)));
signed char *(__cdecl queue_b(signed(arg),signed char(**argp)));
/* Queue */

signed(__cdecl clip_b(signed(arg),signed char(**argp)));
signed char *(__cdecl clip_rl(signed(arg),signed char(*argp)));
/* Clip */

signed char *(__cdecl dupl_backward_r(signed(arg),signed char(*argp)));
signed char *(__cdecl dupl_backward(signed char(*argp)));
signed char *(__cdecl dupl_offset_r(signed(arg),signed char(*argp)));
signed char *(__cdecl dupl_offset(signed(arg),signed char(*argp)));
signed char *(__cdecl dupl_b(signed(arg),signed char(*argp)));
/* Duplicate */

signed char *(__cdecl cx_rr(signed char(*di),signed char(*et),signed char(*si)));
signed char *(__cdecl cx_r(signed(digit),signed(arg),signed char(*et),signed char(*argp)));
signed char *(__cdecl cx(signed(digit),signed(arg),signed char(*et),signed char(*argp)));
signed char *(__cdecl cv_r(signed(arg/* n-digit */),signed char(*argp)));
signed char *(__cdecl cv(signed(digit),signed(arg)));
signed char *(__cdecl cat_ahead(signed char(*di),signed char(*si)));
signed char *(__cdecl cat_anterior(signed char(*di),signed char(*si)));
/* convert, concatenate and release */

signed(__cdecl ct_av_b_r(signed(*di),signed char(**si)));
signed(__cdecl ct_av_b(signed(*di),signed char(**si)));
signed(__cdecl cpy_av_b(signed char(*di),signed char(**si)));
signed(__cdecl concat_argv(signed(offset),signed char(**di),signed char(**si)));
/* Concatenate */

signed(__cdecl cat_va_r(signed char(**di),signed char(*si)));
signed(__cdecl cat_va(signed char(***di),signed char(*si)));
signed(__cdecl concat_va(signed char(***di),signed char(**si)));
signed(__cdecl cat_v(signed(arg/* code of line break */),signed char(*argp/* separator */),signed char(**di),signed char(**si)));
/* Concatenate */

signed(__cdecl append_va_b(signed char(***di),signed char(*si)));
/* Append */

signed(__cdecl cat_w_rl(signed short(**di),signed short(*si)));
signed(__cdecl cat_w_r(signed short(**di),signed short(**si)));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_w(signed short(**argp),...));
signed(__cdecl cat_b_rl(signed char(**di),signed char(*si)));
signed(__cdecl cat_b_r(signed char(**di),signed char(**si)));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_b(signed char(**argp),...));
signed(__cdecl cat_ahead_b_rl(signed char(**di),signed char(*si)));
signed(__cdecl cat_ahead_b_r(signed char(**di),signed char(**si)));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_ahead_b(signed char(**argp),...));
/* Concatenate to the terminating null pointer */

signed(__cdecl concatenate_d(signed(arg),signed(**di),signed(*si)));
signed(__cdecl concatenate_w(signed(arg),signed short(**di),signed short(*si)));
signed(__cdecl concatenate(signed(arg),signed char(**di),signed char(*si)));
signed(__cdecl cat_a_d(signed(**di),signed(*si)));
signed(__cdecl cat_a_w(signed short(**di),signed short(*si)));
signed(__cdecl cat_a_b(signed char(**di),signed char(*si)));
signed(__cdecl cat_ad(signed(**di),signed(si)));
signed(__cdecl cat_aw(signed short(**di),signed short(si)));
signed(__cdecl cat_ab(signed char(**di),signed char(si)));
/* Call fn. rl later */

signed(__cdecl cv_l_r(signed short(radix),signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si)));
signed(__cdecl cv_l(signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si)));
signed(__cdecl cv_a_r(signed(arg),signed char(*di),signed char(*si)));
signed char*(__cdecl cv_a(signed(arg),signed char(*argp)));
/* Call fn. rl later */

signed(__cdecl arr_dir(signed char(**di),signed char(*si)));
/* Arrange */

signed(__cdecl quot_b(signed(arg/* size */),signed char(*di/* buff */),signed char(*si)));
/* Enclose in double quotation marks */

signed(__cdecl append_b(signed char(*di),signed char(*si)));
/* Append */

signed(__cdecl cpy_a_d(signed(arg),signed(*di),signed(*si)));
signed(__cdecl cpy2p(signed char(*di),signed char(*deadline),signed char(*si)));
signed(__cdecl cpy2(signed char(cache),signed char(*di),signed char(*si)));
signed(__cdecl ncpy(signed(arg),signed char(*di),signed char(*si)));
signed(__cdecl cpy_v_b(signed char(**di),signed char(**si)));
signed(__cdecl cpy_q(signed long long(*di),signed long long(*si)));
signed(__cdecl cpy_d(signed(*di),signed(*si)));
signed(__cdecl cpy_w(signed short(*di),signed short(*si)));
signed(__cdecl cpy_b(signed char(*di),signed char(*si)));
signed(__cdecl cpy_l(signed char(*di),signed char(*si)));
signed(__cdecl cpy(signed char(*di),signed char(*si)));
/* Copy to the di out of the si */

signed(__cdecl cue_va_r(signed short(flag),signed char(*sym),signed char(*argp)));
signed(__cdecl cue_va(signed char(*sym),signed char(*argp)));
signed(__cdecl cue_r(signed short(flag),signed char(*sym),signed char(*argp)));
signed(__cdecl cue(signed char(*sym),signed char(*argp)));
/* Retrieve bytes to the leading address of a word or symbol. */

signed(__cdecl cue_ready(signed char(*argp)));
signed(__cdecl cue_argt_ready(signed char(*argp)));
signed(__cdecl cue_argt(signed char(*argp)));
/* Cue */

signed(__cdecl ct_words_r(signed short(flag),signed(*retv),signed char(*cache),signed char(*base)));
signed(__cdecl ct_words(signed char(*sym),signed char(*base)));
/* Count words to the terminating null character */

signed(__cdecl ct_argt_r(signed char(*argp)));
signed(__cdecl ct_argt(signed char(*argp)));
signed(__cdecl ct_wrds_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars(signed(*retv),signed char(*base)));
signed(__cdecl ct_ars2(signed char(*base)));
signed(__cdecl ct_wrds(signed char(*base)));
signed(__cdecl ct_args(signed char(*argp)));
/* Count arguments to the terminating null character */

signed(__cdecl cv_dv_r(signed short(radix),signed(*di),signed char(**si)));
signed(__cdecl cv_dv(signed short(radix),signed(*di),signed char(**si)));
signed(__cdecl cv_da_xe_r(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_xe(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first_r(signed short(arg),signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_r(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da(signed short(radix),signed(*di),signed char(*si)));
/* Convert into a signed double word out of characters */

signed(__cdecl cv_d_r(signed short(radix),signed char(*table),signed char(*di),signed(si)));
signed(__cdecl cv_d(signed short(radix),signed char(**di),signed(si)));
/* Convert a signed double word into letters */

signed(__cdecl car_r(signed short(radix),signed(arg)));
signed(__cdecl car(signed short(radix),signed(arg)));
/* Count column digits for a double word */

signed(__cdecl sw_p(void(**di),void(**si)));
signed(__cdecl sw(signed(*di),signed(*si)));
signed(__cdecl nsort(signed(count),signed(*base)));
signed(__cdecl bsort(signed(count),signed(*base)));
/* Switch */

signed(__cdecl cmpr_part_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_part(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_w_r(signed(*cache),signed short(*di),signed short(*si)));
signed(__cdecl cmpr_w(signed(*cache),signed short(*di),signed short(*si)));
signed(__cdecl cmpr_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr(signed(*cache),signed char(*di),signed char(*si)));
/* Compare ones in case sensitive character strings */

signed(__cdecl reords_partially(signed char(**di),signed char(*si)));
signed(__cdecl reords_part(signed char(**di),signed char(*si)));
signed(__cdecl ords_partially(signed char(**di),signed char(*si)));
signed(__cdecl ords_part(signed char(**di),signed char(*si)));
signed(__cdecl ords(signed char(**di),signed char(*si)));
signed(__cdecl ord(signed char(*di),signed char(si)));
signed(__cdecl ord_d_v(signed(**di),signed(si)));
signed(__cdecl ord_d(signed(*di),signed(si)));
/* Check the ordinal number. */

signed(__cdecl rm_trails_r(signed(arg),signed char(*cache),signed char(*argp)));
signed(__cdecl rm_trails(signed char(*cache),signed char(*argp)));
signed(__cdecl rm_brs(signed char(*argp)));
signed(__cdecl rm_trailing_spaces_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_trailing_spaces(signed char(*argp)));
signed(__cdecl rm_trailing_blanks_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_trailing_blanks(signed char(*argp)));
signed(__cdecl rm_br_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_br(signed char(*argp)));
signed(__cdecl rm_asterisk_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_asterisk(signed char(*argp)));
signed(__cdecl rm_b_r(signed(n),signed(arg),signed char(*argp)));
signed(__cdecl rm_b(signed(arg),signed char(*argp)));
// Remove

signed(__cdecl embedback_r(signed(arg),signed char(*argp)));
signed(__cdecl embedback(signed(arg),signed char(*argp)));
signed(__cdecl embed_v_rr(signed(arg),signed char(**argp)));
signed(__cdecl embed_v_r(signed char(**argp)));
signed(__cdecl embed_v(signed(arg),signed char(**argp)));
signed(__cdecl embed_d_rr(signed(arg),signed(*argp)));
signed(__cdecl embed_d_r(signed(*argp)));
signed(__cdecl embed_d(signed(arg),signed(*argp)));
signed(__cdecl embed_w_l_rr(signed(arg),signed short(*argp)));
signed(__cdecl embed_w_l_r(signed short(*argp)));
signed(__cdecl embed_w_l(signed(arg),signed short(*argp)));
signed(__cdecl embed_w_rr(signed(arg),signed short(*argp)));
signed(__cdecl embed_w_r(signed short(*argp)));
signed(__cdecl embed_w(signed(arg),signed short(*argp)));
signed(__cdecl embed_l_rr(signed(arg),signed char(*argp)));
signed(__cdecl embed_l_r(signed char(*argp)));
signed(__cdecl embed_l(signed(arg),signed char(*argp)));
signed(__cdecl embed_rr(signed(arg),signed char(*argp)));
signed(__cdecl embed_r(signed char(*argp)));
signed(__cdecl embed(signed(arg),signed char(*argp)));
// Embed

signed(__cdecl sub_da(signed(arg),signed char(*argp)));
/* Subtract */

signed(__cdecl ctdn_v_r(signed(arg),signed char(**cache),signed char(*argp)));
signed(__cdecl ctdn_v(signed char(**cache),signed char(*argp)));
/* Count letters down to the specific arrays */

signed(__cdecl ctdn_a_r(signed(arg),signed char(*cache),signed char(*argp)));
signed(__cdecl ctdn_a(signed char(*cache),signed char(*argp)));
/* Count letters down to the specific array */

signed(__cdecl ctdn_r(signed(arg),signed char(sym),signed char(*argp)));
signed(__cdecl ctdn(signed char(sym),signed char(*argp)));
/* Count letters down to the specific symbol */

signed(__cdecl ct_digits_r(signed char(*fig),signed char(*argp)));
signed(__cdecl ct_digits(signed char(*argp)));
/* Count digits */

signed(__cdecl incl_num(signed char(*argp)));
signed(__cdecl cf_no(signed char(*argp)));
/* Confirm numerals */

signed(__cdecl ct_to(signed char(*cache),signed char(*argp)));
signed(__cdecl ct2(signed char(di), signed char(*base)));
/* Count to */

signed(__cdecl ct_f_v(void*(__cdecl**f)(void(*argp))));
signed(__cdecl ct_f(signed(__cdecl**f)(void(*argp))));
/* Count function pointers */

signed(__cdecl ct_v_q(signed long long(**argp)));
signed(__cdecl ct_v_d(signed(**argp)));
signed(__cdecl ct_v_w(signed short(**argp)));
signed(__cdecl ct_v_b(signed char(**argp)));
signed(__cdecl ct_v(signed char(**argp)));
signed(__cdecl ct_p(void(**argp)));
/* Count pointers */

signed(__cdecl ct_q(signed long long(*argp)));
signed(__cdecl ct_d(signed(*argp)));
signed(__cdecl ct_w(signed short(*argp)));
signed(__cdecl ct_b(signed char(*argp)));
signed(__cdecl ct_l(signed char(*argp)));
signed(__cdecl ct(signed char(*argp)));
/* Count */

signed(__cdecl es(signed(arg)));
signed(__cdecl es_at(void));
signed(__cdecl es_a(void));
signed(__cdecl es_b(void));
signed(__cdecl es_c(void));
signed(__cdecl es_d(void));
signed(__cdecl es_e(void));
signed(__cdecl es_f(void));
signed(__cdecl es_g(void));
signed(__cdecl es_h(void));
signed(__cdecl es_i(void));
signed(__cdecl es_j(void));
signed(__cdecl es_k(void));
signed(__cdecl es_l(void));
signed(__cdecl es_m(void));
signed(__cdecl es_n(void));
signed(__cdecl es_o(void));
signed(__cdecl es_p(void));
signed(__cdecl es_q(void));
signed(__cdecl es_r(void));
signed(__cdecl es_s(void));
signed(__cdecl es_t(void));
signed(__cdecl es_u(void));
signed(__cdecl es_v(void));
signed(__cdecl es_w(void));
signed(__cdecl es_x(void));
signed(__cdecl es_y(void));
signed(__cdecl es_z(void));
signed(__cdecl es_lsb(void));
signed(__cdecl es_rs(void));
signed(__cdecl es_rsb(void));
signed(__cdecl es_ca(void));
signed(__cdecl es_ll(void));
/* Escape sequences */

signed(__cdecl bpb_r(signed char(arg)));
signed(__cdecl bpb(void));
/* Bits par byte */
