/*

Return (0x00) if the function fails.

Remarks:
Arguments ..are initialised by wrapper functions
Along with C library
*/


void(__cdecl cmdl_exit_b(void(*argp)));
void(__cdecl cmdl_help_b(void(*argp)));
void(__cdecl cmdl_clear_b(void(*argp)));
void(__cdecl cmdl_time_b(void(*argp)));
void(__cdecl cmdl_open_b(void(*argp)));
void(__cdecl cmdl_save_b(void(*argp)));
void(__cdecl cmdl_output_b(void(*argp)));
void(__cdecl cmdl_history_b(void(*argp)));
signed(__cdecl cmdl_help_b_r(void(*argp)));
signed(__cdecl cmdl_clear_b_r(void(*argp)));
signed(__cdecl cmdl_time_b_r(void(*argp)));
signed(__cdecl cmdl_open_b_r(void(*argp)));
signed(__cdecl cmdl_save_b_r(void(*argp)));
signed(__cdecl cmdl_output_b_r(void(*argp)));
signed(__cdecl cmdl_history_b_r(void(*argp)));
void *(__cdecl stitch_b(signed(arg/* stack size of threads */),signed char(*cache),void(*argp)));
/* Run in a subroutine. */
void(__cdecl unknit_b(void));
void *(__cdecl knit_b(signed(arg/* size */),void(*argp),void(__cdecl*f)(void(*argp))));
/* Create/terminate a thread. */
signed(__cdecl agent_sat(signed(argc),signed char(**argv),signed char(**envp)));

signed(__cdecl dupl_agent_w(signed(argc),signed short(**argv),signed short(**envp)));

signed(__cdecl priv_rrrrrr(signed char(**argp)));
signed(__cdecl priv_rrrrr(signed char(**argp)));
signed(__cdecl priv_rrrr(void(*argp)));
signed(__cdecl priv_rrr(void(*argp)));
signed(__cdecl priv_rr(void(*argp)));
signed(__cdecl priv_r(signed char(*argp)));
signed(__cdecl priv_help(void));
signed(__cdecl agent_priv(signed(argc),signed char(**argv),signed char(**envp)));

signed(__cdecl unpin_help(void));
signed(__cdecl agent_unpin(signed(argc),signed char(**argv),signed char(**envp)));

signed(__cdecl depin_store_r(signed short(arg),signed char(*di),signed char(*si)));
signed(__cdecl depin_store(signed short(arg),signed char(**argp)));
signed(__cdecl depin_output(void));
signed(__cdecl depin_help(void));
signed(__cdecl agent_depin(signed(argc),signed char(**argv),signed char(**envp)));
/* Output clipboard text. */

signed(__cdecl pin_help(void));
signed(__cdecl agent_pin(signed(argc),signed char(**argv),signed char(**envp)));

signed(__cdecl jd_help(void));
signed(__cdecl agent_jd(signed(argc),signed char(**argv),signed char(**envp)));

signed(__cdecl lit_help(void));
signed(__cdecl agent_lit(signed(argc),signed char(**argv),signed char(**envp)));

signed(__cdecl cvlf_agent(signed(argc),signed char(**argv),signed char(**envp)));
signed(__cdecl lk_agent(signed(argc),signed char(**argv),signed char(**envp)));

signed(__cdecl bpb_r(signed char(arg)));
signed(__cdecl bpb(void));
/* Bits par byte */

signed(__cdecl insp_b_utf_8_r_r(signed char(*argp),signed(cache),signed(fd),size_t(arg)));
signed(__cdecl insp_b_utf_8_r(signed(cache),signed(fd),size_t(arg)));
signed(__cdecl insp_b_utf_8(signed(fd),void(*argp)));
signed(__cdecl insp_b(signed char(*di/* path */),signed char(*si)));
/* Inspect the byte order */

signed(__cdecl c_kbhit(void));
signed(__cdecl c_getch(signed(arg)));
signed(__cdecl c_putch(signed(arg)));

signed(__cdecl cli_i_r(signed char(**argp)));
signed(__cdecl cli_i(signed char(**argp)));
signed(__cdecl cli_o(signed char(*argp)));
signed(__cdecl cli_k(void(*argp)));

signed(__cdecl ctrl_at(void(*argp)));
signed(__cdecl ctrl_a(void(*argp)));
signed(__cdecl ctrl_b(void(*argp)));
signed(__cdecl ctrl_c(void(*argp)));
signed(__cdecl ctrl_d(void(*argp)));
signed(__cdecl ctrl_e(void(*argp)));
signed(__cdecl ctrl_f(void(*argp)));
signed(__cdecl ctrl_g(void(*argp)));
signed(__cdecl ctrl_h(void(*argp)));
signed(__cdecl ctrl_i(void(*argp)));
signed(__cdecl ctrl_j(void(*argp)));
signed(__cdecl ctrl_k(void(*argp)));
signed(__cdecl ctrl_l(void(*argp)));
signed(__cdecl ctrl_m(void(*argp)));
signed(__cdecl ctrl_n(void(*argp)));
signed(__cdecl ctrl_o(void(*argp)));
signed(__cdecl ctrl_p(void(*argp)));
signed(__cdecl ctrl_q(void(*argp)));
signed(__cdecl ctrl_r(void(*argp)));
signed(__cdecl ctrl_s(void(*argp)));
signed(__cdecl ctrl_t(void(*argp)));
signed(__cdecl ctrl_u(void(*argp)));
signed(__cdecl ctrl_v(void(*argp)));
signed(__cdecl ctrl_w(void(*argp)));
signed(__cdecl ctrl_x(void(*argp)));
signed(__cdecl ctrl_y(void(*argp)));
signed(__cdecl ctrl_z(void(*argp)));
signed(__cdecl ctrl_lsb(void(*argp)));
signed(__cdecl ctrl_rs(void(*argp)));
signed(__cdecl ctrl_rsb(void(*argp)));
signed(__cdecl ctrl_ca(void(*argp)));
signed(__cdecl ctrl_ll(void(*argp)));
signed(__cdecl ctrl_fn_r(signed(arg),void(*argp)));
signed(__cdecl ctrl_fn_b(signed(arg),void(*argp)));
signed(__cdecl ctrl_fn(signed char(*cache),void(*argp)));

signed(__cdecl jd_b(signed(arg/* code of line break */),signed char(*di),signed char(**si)));
signed(__cdecl parse_w(signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl parse_b(signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl ed_w(signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl ed_b(signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl str_w(signed(arg/* code of line break */),signed char(*perm),signed short(*di/* path */),signed char(*si/* contents */)));
signed(__cdecl str_b_r(signed(fd),fl_t(*argp)));
signed(__cdecl str_b(signed(arg/* code of line break */),signed char(*perm),signed char(*di/* path */),signed char(*si/* contents */)));
signed(__cdecl appd_b(signed(arg/* code of line break */),signed char(*di/* path */),signed char(*si/* contents */)));
signed(__cdecl appd_ds_w_r(signed(fd),fl_t(*argp)));
signed(__cdecl appd_ds_w(signed short(**argp)));
signed(__cdecl appd_ds_b_r(signed(fd),fl_t(*argp)));
signed(__cdecl appd_ds_b(signed char(**argp)));
signed(__cdecl appdw_ds_r(signed short(*di),signed short(**si)));
signed(__cdecl appdw_ds(signed short(**argp)));
signed(__cdecl appd_ds_r(signed char(*di),signed char(**si)));
signed(__cdecl appd_ds(signed char(**argp)));
signed(__cdecl rd_k_r(signed char(**di),signed char(*delim),signed(n),signed(fd)));
signed(__cdecl rd_k(signed char(**di),signed char(*delim),signed(n),signed(fd)));
signed(__cdecl ld_b_r(signed(fd),fl_t(*argp)));
signed(__cdecl ld_b(size_t(offset),signed(range),signed char(**di),signed char(*delim),signed char(*si/* path */)));
signed(__cdecl init_fl(signed(arg),fl_t(*argp)));
signed(__cdecl wr_ds_r(signed(fd),fl_t(*argp)));
signed(__cdecl wr_ds_w_r(signed(fd),fl_t(*argp)));
signed(__cdecl wr_ds_w(signed short(**argp)));
signed(__cdecl wr_ds_b_r(signed(fd),fl_t(*argp)));
signed(__cdecl wr_ds_b(signed char(**argp)));
signed(__cdecl cre_w(signed char(*perm),signed short(*path)));
signed(__cdecl xt_parse_permission_w(signed(*retv),signed(*cache),signed char(*argp)));
signed(__cdecl xt_parse_access_w(signed(*retv),signed char(*argp)));
signed(__cdecl xt_parse_w(signed(*permission),signed(*access),signed char(*argp)));
signed(__cdecl xt_w(signed char(*param),signed short(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl cre_b(signed char(*perm),signed char(*path)));
signed(__cdecl xt_parse_permission(signed(*retv),signed(*cache),signed char(*argp)));
signed(__cdecl xt_parse_access(signed(*retv),signed char(*argp)));
signed(__cdecl xt_parse(signed(*permission),signed(*access),signed char(*argp)));
signed(__cdecl xt(signed char(*param),signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl cl_b(signed(arg)));
signed(__cdecl rd_b(signed(fd),signed char(*argp),signed(arg)));
signed(__cdecl wr_b(signed(fd),signed char(*argp),signed(arg)));
signed(__cdecl op_b(signed char(*path),signed(*argp),...));

signed(__cdecl already_w(size_t(*size),signed short(*argp)));
signed(__cdecl already_b(size_t(*size),signed char(*argp)));

signed(__cdecl msleep(signed(arg)));
void(__cdecl sleep_b(signed(arg)));

signed(__cdecl cv_lf(signed char(*cache/* an extension for backups */),signed char(*argp)));
signed(__cdecl read_pages(page_t(*di),signed char(*si)));
signed(__cdecl rd_pages_r(page_t(*argp),signed(fd)));
signed(__cdecl rd_pages(page_t(*argp),signed(fd)));
signed(__cdecl write_pages(signed char(*di),page_t(*si)));
signed(__cdecl wr_pages_r(signed(fd),page_t(*argp)));
signed(__cdecl wr_pages(signed(fd),page_t(*argp)));

signed(__cdecl unbind_pages(page_t(*argp)));
signed(__cdecl unmap_pages(page_t(*argp)));
signed(__cdecl output_pages_r(signed short(arg/* align */),page_t(*argp)));
signed(__cdecl output_pages(signed short(arg/* align */),page_t(*argp)));
signed(__cdecl concat_pages(signed short(flag),page_t(*di),page_t(*si)));
signed(__cdecl bind_pages(signed short(arg),page_t(*argp)));
signed(__cdecl init_pages(signed(arg),page_t(*argp)));

signed(__cdecl store_rule_b(signed(di),signed(si),rule_t(*argp)));
signed(__cdecl restore_rule_b(signed short(arg_b),signed(arg),rule_t(*argp)));
signed(__cdecl backup_rule_b(signed(arg),page_t(*argp)));
signed(__cdecl rule_b(signed(arg),rule_t(*di),signed char(*si)));
signed(__cdecl init_rule_b_r(signed short(flag),signed(arg),rule_t(*argp)));
signed(__cdecl init_rule_b(signed short(arg),rule_t(*argp)));
signed(__cdecl init_rule(signed short(flag),signed(arg),rule_t(*argp)));
signed(__cdecl unmap_rule(rule_t(*argp)));
signed(__cdecl map_rule(signed(arg),rule_t(*argp)));
signed(__cdecl remap_rule(signed(arg),rule_t(*argp)));
signed(__cdecl replace_rule(rule_t(*di),signed char(*si)));
signed(__cdecl cat_rule_rr(signed char(**di),signed char(**si)));
signed(__cdecl cat_rule_r(rule_t(*di),signed char(**si)));
signed(__cdecl cat_rule(rule_t *argp,...));

signed(__cdecl closef(signed short(arg),signed(fd)));
signed(__cdecl writef(signed short(arg),signed(fd),void(*argp),signed(size)));
signed(__cdecl readf(signed short(arg),signed(fd),void(*argp),signed(size)));
signed(__cdecl openf(signed short(arg),signed char(*path),signed(mode),signed(permission)));
signed(__cdecl statf(signed short(arg),signed char(*path),void(*argp)));

size_t(__cdecl sz_w(signed short(*argp)));
size_t(__cdecl sz_b(signed char(*argp)));

signed(__cdecl trunc_b_r(signed char(*path)));
signed(__cdecl trunc_b(signed char(*cache/* an extension for backups */),signed char(*path)));
signed(__cdecl backup_b(signed char(*extension),signed char(*argp)));

signed(__cdecl wr_s_r(signed(fd),signed char(*argp)));
signed(__cdecl wr_s(signed char(*di),signed char(*si)));
signed(__cdecl rd_s_r(signed(fd),signed char(**di)));
signed(__cdecl rd_s(signed char(**di),signed char(*si)));

signed(__cdecl art_r_r(signed short(*flag),signed short(cols),signed char(*sym),signed(fd)));
signed(__cdecl art_r(signed short(*flag),signed short(cols),signed char(*sym),signed(fd)));

signed char(*__cdecl rf_env(signed char(*argp)));
// refer.

signed(__cdecl init_v(signed(arg),void(**argp)));
signed(__cdecl init_w(signed(cached),signed(arg),signed short(**argp)));
signed(__cdecl init_b(signed(cached),signed(arg),signed char(**argp)));
signed(__cdecl cli_init_b_r(signed(cache),signed(arg),signed char(**argp)));
signed(__cdecl cli_init_b(signed(cache),signed(arg),signed char(**argp)));
// initialise.

void*(__cdecl alloc(signed(arg)));
// allocate i.e., fn. malloc.

signed(__cdecl rl(void(*argp)));
// release i.e., fn. free.

signed(__cdecl cat_va_r(signed char(**di),signed char(*si)));
signed(__cdecl cat_va(signed char(***di),signed char(*si)));
signed(__cdecl concat_va(signed char(***di),signed char(**si)));

signed(__cdecl cat_v(signed(arg/* code of line break */),signed char(*argp/* separator */),signed char(**di),signed char(**si)));
/* Concatenate. */

signed(__cdecl cat_p(signed char(***di),signed char(*si)));
/* Concatenate pointers. */

signed(__cdecl /* __attribute__((ms_abi)) */ cat_w_r(signed short(**di),signed short(**si)));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_w(signed short(**argp),...));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_b_r(signed char(**di),signed char(**si)));
signed(__cdecl /* __attribute__((ms_abi)) */ cat_b(signed char(**argp),...));
/* Concatenate to the terminating null pointer. */

signed(__cdecl cv_wv(signed short(*cache),signed short(**di),signed short(**si)));
signed(__cdecl cv_bv(signed char(*cache),signed char(**di),signed char(**si)));
signed(__cdecl cv_bv_xe_r(signed char(*di),signed char(**si)));
signed(__cdecl cv_bv_xe(signed char(**di),signed char(**si)));
/* After calling fn. cv_bv, please call fn. rl to unmap the buffer allocated on the RAM. */

signed(__cdecl cv_argv_bw_r(signed char(**di),signed short(**si)));
signed(__cdecl cv_argv_bw(signed char(***di),signed short(**si)));
// convert into a table pointer of pointers secured for bytes in UTF-8.

signed(__cdecl rf_leap_years(signed short(arg)));
// refer leap years.

signed(__cdecl rd_f_r(signed char(**di),signed char(*delim),signed(fd)));
signed(__cdecl rd_f(signed char(**di),signed char(*delim),signed(fd)));

signed(__cdecl read2_f_r(signed char(**di),signed short(*flag),signed char(*delim),signed(fd)));
signed(__cdecl read2_f(signed char(**di),signed char(*delim),signed(fd)));
signed(__cdecl cat_read2_f(signed char(**di),signed char(*delim),signed(fd)));
signed(__cdecl read_f_r(signed char(**di),signed short(*flag),signed char(delim),signed(fd)));
signed(__cdecl read_f(signed char(**di),signed char(delim),signed(fd)));
signed(__cdecl cat_read_f(signed char(**di),signed char(delim),signed(fd)));
/* read bytes to the delimiter. */

signed(__cdecl cv_hr_r(signed short(*hr),signed short(*mn),signed char(*si)));
signed(__cdecl cv_hr(signed short(*hr),signed short(*mn),signed char(*si)));

signed(__cdecl concat_argv_rr(signed char(*di),signed char(**si)));
signed(__cdecl concat_argv_r_r(signed(*di),signed char(**si)));
signed(__cdecl concat_argv_r(signed(*di),signed char(**si)));
signed(__cdecl concat_argv(signed(offset),signed char(**di),signed char(**si)));

signed(__cdecl sub_da(signed(arg),signed char(*argp)));

signed(__cdecl ct2words_r_r(signed char(**vi),signed(*di),signed char(*si)));
signed(__cdecl ct2words_r(signed char(***vi),signed(*di),signed char(*si)));
signed(__cdecl ct2words(signed char(***vi),signed(*di),signed char(*si)));
// count to the words out of characters.

signed(__cdecl keep_w(signed short(**di),signed char(*si)));
signed(__cdecl keep(signed char(**di),signed char(*si)));
signed(__cdecl release(signed(arg),void(**argp)));
/* Please be sure to release. */

signed(__cdecl extend(signed char(**argp),signed(*total),signed(extra)));
signed(__cdecl recharge(signed char(**argp),signed(arg)));
// Unmap and map.

signed(__cdecl cli_unmap(signed(times),signed char(**argp)));
// Unmap.

signed(__cdecl cv_sv_r(signed short(radix),size_t(*di),signed char(**si)));
signed(__cdecl cv_sv(signed short(radix),size_t(*di),signed char(**si)));
signed(__cdecl cv_sa_xe_r(signed short(radix),signed char(*table),size_t(*di),signed char(*si)));
signed(__cdecl cv_sa_xe(signed short(radix),size_t(*di),signed char(*si)));
signed(__cdecl cv_sa_r(signed short(radix),signed char(*table),size_t(*di),signed char(*si)));
signed(__cdecl cv_sa(signed short(radix),size_t(*di),signed char(*si)));
// convert into a size_t out of characters.

signed(__cdecl cv_dv_r(signed short(radix),signed(*di),signed char(**si)));
signed(__cdecl cv_dv(signed short(radix),signed(*di),signed char(**si)));
signed(__cdecl cv_da_xe_r(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_xe(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first_r(signed short(arg),signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da_first(signed short(radix),signed(*di),signed char(*si)));
signed(__cdecl cv_da_r(signed short(radix),signed char(*table),signed(*di),signed char(*si)));
signed(__cdecl cv_da(signed short(radix),signed(*di),signed char(*si)));
// convert into a signed double word out of characters.

signed(__cdecl cv_ords_r(signed(arg/* front or from behind */),signed char(***vi),signed(*di),signed char(*si)));
signed(__cdecl cv_ords(signed(arg/* front or from behind */),signed char(***vi),signed(*di),signed char(*si)));
signed(__cdecl cv_ord(signed(arg/* front or from behind */),signed char(**table),signed(*retv),signed char(*argp)));
signed(__cdecl cv_ord_l_r(signed(arg),signed char(**table),signed(*retv),signed char(*argp)));
signed(__cdecl cv_ord_l(signed char(**table),signed(*retv),signed char(*argp)));
signed(__cdecl cv_ord_f_r(signed char(**table),signed(*retv),signed char(*argp)));
signed(__cdecl cv_ord_f(signed char(**table),signed(*retv),signed char(*argp)));
signed(__cdecl reords_partially(signed char(**di),signed char(*si)));
signed(__cdecl reords_part(signed char(**di),signed char(*si)));
signed(__cdecl ords_partially(signed char(**di),signed char(*si)));
signed(__cdecl ords_part(signed char(**di),signed char(*si)));
signed(__cdecl ords(signed char(**di),signed char(*si)));
signed(__cdecl ord(signed char(*di),signed char(si)));
signed(__cdecl ord_vd(signed(**di),signed(si)));
signed(__cdecl ord_d(signed(*di),signed(si)));
// check the ordinal number.

signed(__cdecl cv_d_r(signed short(radix),signed char(*table),signed char(*di),signed(si)));
signed(__cdecl cv_d(signed short(radix),signed char(**di),signed(si)));
// convert a signed double word into letters.

signed(__cdecl car_r(signed short(radix),signed(arg)));
signed(__cdecl car(signed short(radix),signed(arg)));
// count column digits for a double word.

signed(__cdecl count_to(signed char(*sym),signed char(*argp)));
// count to a symbol or to the terminating null character.

signed(__cdecl cmpr_part_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_part(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_partially(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr_w_r(signed(*cache),signed short(*di),signed short(*si)));
signed(__cdecl cmpr_w(signed(*cache),signed short(*di),signed short(*si)));
signed(__cdecl cmpr_r(signed(*cache),signed char(*di),signed char(*si)));
signed(__cdecl cmpr(signed(*cache),signed char(*di),signed char(*si)));
/* Compare ones in case sensitive character strings */

signed(__cdecl compare(signed char(*di),signed char(*si)));
/* Compare addresses. */

signed(__cdecl ct_bv_r(signed(*di),signed char(**si)));
signed(__cdecl ct_bv(signed(*di),signed char(**si)));
/* count the number of bytes up */

signed(__cdecl ct_q(signed long long(*argp)));
signed(__cdecl ct_d(signed(*argp)));
signed(__cdecl ct_w(signed short(*argp)));
signed(__cdecl ct_b(signed char(*argp)));
signed(__cdecl ct(signed char(*argp)));
/* Count. */

signed(__cdecl cv_spcr(signed char(*argp)));
signed(__cdecl cv_ds_f(signed char(*argp),signed char(di),signed char(si)));
signed(__cdecl cv_ds_b(signed char(*argp),signed char(di),signed char(si)));
signed(__cdecl ct_l(signed char(*argp)));
/* Count and convert. */

signed(__cdecl cf_dir_w(signed short(*argp)));
signed(__cdecl cf_dir(signed char(*argp)));
signed(__cdecl cf_ff_w(signed short(*di),signed char(*si)));
signed(__cdecl cf_ff(signed char(*di),signed char(*si)));
signed(__cdecl cf_f_extensions_w(signed short(*cache),signed short(*argp)));
signed(__cdecl cf_f_extensions(signed char(*cache),signed char(*argp)));
/* Confirm. */

signed(__cdecl ct_a_back_r(signed char(*argp)));
signed(__cdecl ct_a_back(signed char(*argp)));
signed(__cdecl ct_a(signed char(*argp)));
/* Based on UTF-8 */

signed(__cdecl encode_bv_r(signed char(**di),signed short(**si)));
signed(__cdecl encode_bv(signed char(**di),signed short(**si)));
signed(__cdecl encode_bw_r(signed char(**di),signed short(*si)));
signed(__cdecl encode_bw(signed char(**di),signed short(*si)));
/* Encode along with surrogate pairs. */

signed(__cdecl decode_wb_r(signed short(**di),signed char(*si)));
signed(__cdecl decode_wb(signed short(**di),signed char(*si)));
signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si)));
/* Decode */

signed(__cdecl cli_in_b(signed char(**argp)));
signed(__cdecl cli_in(signed(*character),signed char(*argp),signed(size))); // deprecated
signed(__cdecl cli_i_except_r(signed char(**argp)));
signed(__cdecl cli_i_except(signed char(**argp)));
signed(__cdecl cli_i_b_r(signed(arg),signed char(**argp)));
signed(__cdecl cli_i_b(signed char(**argp)));
/* Get Unicode bytes in UTF-8 out of the keyboard. */

signed(__cdecl cli_support_meta_keys(signed(*character),signed char(second),signed char(first)));
signed(__cdecl decode_keys(signed(arg),signed(*di),signed char(*si)));
signed(__cdecl decode_key_01(signed(*di),signed char(*si)));
signed(__cdecl decode_key_00(signed(*di),signed char(*si)));
/* Support for function and arrow keys */

signed(__cdecl encode_d_r(signed(arg),signed char(*di),signed(si)));
signed(__cdecl encode_d(signed char(**di),signed(si)));
signed(__cdecl encode_surrogate_w(signed char(**di),signed short(second),signed short(first))); // deprecated
signed(__cdecl ncharbyte(signed(arg)));
/* Encode a character into bytes based on UTF-8. */

signed(__cdecl cli_nout(signed(arg),signed char(*argp)));
signed(__cdecl cals_output(signed(arg/* delay */),signed short(colors),signed short(cols),signed char(*sym),signed char(*argp)));
signed(__cdecl cli_output(signed(arg/* delay */),signed short(cols),signed char(*sym),signed char(*argp)));
signed(__cdecl cals_outv_legible_r(signed(arg/* delay */),signed short(colors),signed char(**argp)));
signed(__cdecl cals_outv_legible(signed(arg/* delay */),signed short(colors),signed char(**argp)));
signed(__cdecl cli_outv_legible_r(signed(arg/* delay */),signed char(**argp)));
signed(__cdecl cli_outv_legible(signed(arg/* delay */),signed char(**argp)));
signed(__cdecl cli_outv_r(signed char(**argp)));
signed(__cdecl cli_outv(signed char(**argp)));
signed(__cdecl cli_outs_legible_r(signed(arg/* delay */),signed char(*argp)));
signed(__cdecl cli_outs_legible(signed(arg/* delay */),signed char(*argp)));
signed(__cdecl cli_outs(signed char(*argp)));
signed(__cdecl cli_out(signed char(*argp)));
signed(__cdecl cli_o_b(signed(arg),signed char(*argp)));
signed(__cdecl unpair_dw_r(signed(*di),signed short(*si)));
signed(__cdecl unpair_dw(signed(*di),signed short(*si)));
signed(__cdecl pair_wd_r(signed short(**di),signed(si)));
signed(__cdecl pair_wd(signed short(**di),signed(si)));
signed(__cdecl decode_b_r(signed(arg),signed(*di),signed char(*si)));
signed(__cdecl decode_b(signed(*di),signed char(*si)));
signed(__cdecl decode_surrogate_second(signed short(*di),signed(si)));
signed(__cdecl decode_surrogate_first(signed short(*di),signed(si)));
signed(__cdecl nbytechar(signed char(arg)));
/* Output Unicode characters decoded out of Unicode bytes */

signed(__cdecl cue_backward_r(signed short(flag),signed char(**retrv),signed char(*sym),signed char(*base)));
signed(__cdecl cue_backward(signed char(**retrv),signed char(*sym),signed char(*offset),signed char(*base)));
signed(__cdecl cue_back2_r(signed short(flag),signed char(*sym),signed char(*cache),signed char(*argp)));
signed(__cdecl cue_back2(signed char(*sym),signed char(*cache),signed char(*argp)));
signed(__cdecl cue_back_r(signed short(flag),signed char(*sym),signed char(*cache),signed char(*argp)));
signed(__cdecl cue_back(signed char(*sym),signed char(*cache),signed char(*argp)));
/* Retrieve the leading address to a previous word or symbol. */

signed(__cdecl cue_va_r(signed short(flag),signed char(*sym),signed char(*argp)));
signed(__cdecl cue_va(signed char(*sym),signed char(*argp)));
signed(__cdecl cue_r(signed short(flag),signed char(*sym),signed char(*argp)));
signed(__cdecl cue(signed char(*sym),signed char(*argp)));
/* Retrieve bytes to the leading address of a word or symbol. */

signed(__cdecl cue2l(signed char(*sym),signed char(*argp)));
signed(__cdecl deviate(signed char(*sym),signed char(*base),signed char(*index)));
/* Retrieve bytes to the leading address of a word (to wrap words). */

signed(__cdecl column_internal(signed short(cols),signed(algn),signed short(col),signed char(*cur),signed char(*offset)));
signed(__cdecl column(signed short(cols),signed(algn),signed char(*base)));
/* For columnists. */

signed(__cdecl reading(signed char(*di),signed(size)));

signed(__cdecl attrib_of_r(signed(cache),signed(*di),signed char(**si)));
signed(__cdecl attrib_of(signed(arg)));

signed(__cdecl cvlf_rddir(void/* c_dirs_info_t */(*argp)));
signed(__cdecl cvlf_finds(void/* c_dirs_info_t */(*argp)));

signed(__cdecl pickfiles(signed char(*di /* path */ ), signed char(*si /* string */ )));
signed(__cdecl rddir(void/* c_dirs_info_t */(*argp)));
signed(__cdecl finds(void/* c_dirs_info_t */(*argp)));
/* Close, read and open a directory entry out of the argp. */

signed(__cdecl retr_f_r(signed char(***di),void/* dir_info_stored_t */(*argp)));
signed(__cdecl retr_f(signed char(***di),signed char(*si)));
/* Retrieve files. */

signed(__cdecl descend_ll(KNOT(**di),KNOT(*si)));
signed(__cdecl ascend_ll(KNOT(**di),KNOT(*si)));

signed(__cdecl unmap_ll_internal(signed short(flag),KNOT(*lead),KNOT(*base)));
signed(__cdecl unmap_ll(signed short(flag),REEL(*argp)));
/* Unmap a circular/doubly linked list. */

signed(__cdecl output_ll(KNOT(*argp)));

signed(__cdecl concat_ll(signed short(flag),KNOT(*cache),REEL(*argp)));
/* Build a circular/doubly linked list. */

signed(__cdecl concat_b_r(signed char(*di), signed char(*bp)));
signed(__cdecl concat_b(signed char(*argp), ...));
/* Copy strings to the argp (with sufficient buffer). */

signed(__cdecl append_b(signed char(*di),signed char(*si)));
/* Append the si to the di. */

signed(__cdecl cv_pv_r(page_t(*di),signed char(**si)));
signed(__cdecl cv_pv(page_t(*di),signed char(**si)));
/* Convert an array of pointers for letters into the page format. */

signed(__cdecl cv_ww_r(signed short(arg),signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_ww(signed short(arg),signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl ct_ww_r(signed short(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl ct_ww(signed short(arg),signed char(*sym),signed char(*argp)));
signed(__cdecl wrap_words_r(signed short(arg),signed(*cache),signed char(*sym),signed char(*argp)));
signed(__cdecl wrap_words(signed short(arg),signed char(*sym),signed char(*argp)));
/* Map an array of pointers for words-wrap arrays on the RAM. */

signed(__cdecl out_lines_r(signed short(arg/* align */),signed short(cols),signed char(*sym),signed char(*argp)));
signed(__cdecl out_lines(signed short(arg/* align */),signed short(cols),signed char(*sym),signed char(*argp)));
/* Output lines. */

signed(__cdecl out_oneline_limited(signed short(arg),signed char(*argp)));
signed(__cdecl out_oneline_r(signed(n),signed short(arg/* align */),signed char(**argp)));
signed(__cdecl out_oneline(signed short(arg/* align */),signed short(cols),signed char(*sym),signed char(*argp)));
/* Output only one line. */

signed(__cdecl out_argt_line_limited_r(signed short(cols),signed char(*argp)));
signed(__cdecl out_argt_line_limited(signed short(cols),signed char(**argp)));
signed(__cdecl out_argt_line_r(signed(n),signed char(**argp)));
signed(__cdecl out_argt_line(signed short(cols),signed char(**argp)));
signed(__cdecl out_argt_r(signed short(cols),signed char(**argp)));
signed(__cdecl out_argt(signed short(cols),signed char(**argp)));

signed(__cdecl cli_o_lines_vt(signed short(cols),signed short(arg/* align */),signed char(*sym),signed char(*argp)));
signed(__cdecl cli_o_lines_r(signed short(cols),signed short(arg/* align */),signed char(*sym),signed char(*argp)));
signed(__cdecl cli_o_lines(signed short(cols),signed short(arg/* align */),signed char(*sym),signed char(*argp)));
signed(__cdecl cli_o_line_limited(signed short(cols),signed short(arg/* align */),signed char(*argp)));
signed(__cdecl cli_o_line_r(signed short(cols),signed short(arg/* align */),signed char(**argp)));
signed(__cdecl cli_o_line(signed short(cols),signed short(arg/* align */),signed char(*sym),signed char(*argp)));
signed(__cdecl wrap_va_r(signed short(cols),signed short(arg/* align */),signed char(**argp)));
signed(__cdecl wrap_va(signed short(cols),signed short(arg/* align */),signed char(**argp)));

signed(__cdecl wp_argt_r(signed short(arg),signed(*cache),signed char(**argp)));
signed(__cdecl wp_argt(signed short(arg),signed char(**argp)));
signed(__cdecl wrap_r(signed short(arg),signed(*cache),signed char(**argp)));
signed(__cdecl wrap(signed short(arg),signed char(**argp)));
/* Count. */

signed(__cdecl cv_va_r(signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_va(signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl cv_wo_r(signed char(**di),signed short(*flag),signed char(*sym),signed char(*si)));
signed(__cdecl cv_wo(signed char(***di),signed char(*sym),signed char(*si)));
signed(__cdecl ct_va(signed char(*sym),signed char(*argp)));
signed(__cdecl ct_wo(signed char(*sym),signed char(*argp)));
/* Map an array of pointers on the RAM. */

signed(__cdecl rl_v_r(signed char(**argp)));
signed(__cdecl rl_v(signed char(***argp)));
signed(__cdecl cv_argt_r(signed char(**di),signed char(*si)));
signed(__cdecl cv_argt(signed char(***di),signed char(*si)));
signed(__cdecl cv_v_r(signed char(**di),signed short(*flag),signed char(*si)));
signed(__cdecl cv_v(signed char(***di),signed char(*si)));
/* Map an array of pointers for word-split arrays on and unmap the ones out of the RAM */

signed(__cdecl sub_dd_r(signed(*retv/* remainder */),signed(subtrahend),signed(arg/* column-base for argp */),signed(*argp)));
signed(__cdecl sub_dd(signed(*retv/* remainder */),signed(subtrahend),signed(arg/* column-base for argp */),signed(*argp)));
/* Subtract to retrieve the remainder and number of carry-overs. */

signed(__cdecl carry_over_r(size_t(*retv),signed(n/* notation */),signed(e)));
signed(__cdecl carry_over(size_t(*retv),signed(n/* notation */),signed(e)));
signed(__cdecl cv_sd_r(size_t(*di),signed(*si),signed(arg)));
signed(__cdecl cv_sd(size_t(*di),signed(*si)));
/* Convert into data type size_t out of an array of double words. */

signed(__cdecl cv_ds_rr_r(signed(arg),signed(*argp)));
signed(__cdecl cv_ds_rr(signed(*argp)));
signed(__cdecl cv_ds_r(signed(*di),size_t(si)));
signed(__cdecl cv_ds(signed(**di),size_t(si)));
/* Convert into an array of double words out of data type size_t. */

signed(__cdecl cue_fd_l(size_t(*argp),size_t(offset),signed(arg),signed(fd)));
signed(__cdecl cue_fd_r(size_t(*argp),size_t(offset),signed(arg),signed(fd)));
signed(__cdecl cue_fd(size_t(offset),signed(fd)));

signed(__cdecl cue_argt(signed char(*argp)));
signed(__cdecl cue_argt_ready(signed char(*argp)));
signed(__cdecl cue_ready(signed char(*argp)));
/* Cue */

signed(__cdecl ct_words_r(signed short(flag),signed(*retv),signed char(*cache),signed char(*base)));
signed(__cdecl ct_words(signed char(*sym),signed char(*base)));
/* Count words to the terminating null character. */

signed(__cdecl ct_argt_r(signed char(*argp)));
signed(__cdecl ct_argt(signed char(*argp)));
signed(__cdecl ct_wrds_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars_r(signed short(flag),signed(*retv),signed char(*base)));
signed(__cdecl ct_ars(signed(*retv),signed char(*base)));
signed(__cdecl ct_ars2(signed char(*base)));
signed(__cdecl ct_wrds(signed char(*base)));
signed(__cdecl ct_args(signed char(*argp)));
/* Count arguments to the terminating null character. */

signed(__cdecl wr_rd_l(signed(*fd),signed char(*cache),signed(size)));
signed(__cdecl wr_rd_r(signed(*fd),signed char(*cache),signed(size)));
signed(__cdecl wr_rd(signed(*fd)));
signed(__cdecl cpy_p(signed char(**di),signed char(**si)));
signed(__cdecl cpy2p(signed char(*di),signed char(*deadline),signed char(*si)));
signed(__cdecl ncpy(signed(arg),signed char(*di),signed char(*si)));
signed(__cdecl cpy2(signed char(cache),signed char(*di),signed char(*si)));
signed(__cdecl cpy_q(signed long long(*di),signed long long(*si)));
signed(__cdecl cpy_d(signed(*di),signed(*si)));
signed(__cdecl cpy_w(signed short(*di),signed short(*si)));
signed(__cdecl cpy_b(signed char(*di),signed char(*si)));
signed(__cdecl cpy_l(signed char(*di),signed char(*si)));
signed(__cdecl cpy(signed char(*di),signed char(*si)));
/* Copy to the di out of the si */

signed(__cdecl include_num_internal(signed short(*flagp), signed char(*argp)));
signed(__cdecl include_num(signed char(*argp)));
/* Check numerals. */

signed(__cdecl ctdn_to_wrap_r(signed short(edge),signed(arg/* align */),signed(*retv),signed char(*cache/* sym */),signed char(*argp)));
signed(__cdecl ctdn_to_wrap(signed short(edge),signed(arg/* align */),signed char(*cache/* sym */),signed char(*argp)));
/* Count down to wrap words. */

signed(__cdecl ctdn_to_r(signed short(flag),signed(arg),signed char(*cache),signed char(*argp)));
signed(__cdecl ctdn_to(signed char(*cache),signed char(*argp)));
signed(__cdecl cf(signed short(*flag),signed char(*cache),signed char(*argp)));
/* Count down letters to find an offset point. */

signed(__cdecl ctdn2_r(signed(arg),signed char(sym),signed char(*argp)));
signed(__cdecl ctdn2(signed char(sym),signed char(*argp)));
/* Count letters down to the specific symbol. */

signed(__cdecl ct_digits_r(signed char(*fig),signed char(*argp)));
signed(__cdecl ct_digits(signed char(*argp)));
/* Count digits. */

signed(__cdecl align_backward(signed(arg),signed char(*argp)));
signed(__cdecl align_b(signed(arg),signed char(*argp)));
/* Return the number of spaces that are output when the tab key is pressed. */

signed(__cdecl ct_txt_internal(signed(arg/* align */),signed(*retv),signed char(*argp)));
signed(__cdecl ct_txt(signed(arg/* align */),signed char(*argp)));
signed(__cdecl ct_tx(signed(to),signed(arg/* align */),signed char(*argp)));
/* Count letters along with alignement of the tab to the null character. */

signed(__cdecl ct_word_backward(signed(left),signed char(*argp)));
/* Count length of a word backward. */

signed(__cdecl ct_only(signed char(di), signed char(*argp)));
/* Count a specific letter only. */

signed(__cdecl ct_except(signed char(arg),signed char(*argp)));
/* Count letters to the terminating null character except for the one you'd select. */

signed(__cdecl ct_characters(signed char(*argp)));
signed(__cdecl ct_letters(signed char(*argp)));

signed(__cdecl ct_to(signed char(*cache),signed char(*argp)));
signed(__cdecl ct2(signed char(di), signed char(*base)));
signed(__cdecl ct(signed char(*argp)));
/* Count letters up to one or more you'd select or to the terminating null character. */

signed(__cdecl ct_f(signed(__cdecl**f)(void(*argp))));
/* Count function pointers. */

signed(__cdecl ct_vq(signed long long(**argp)));
signed(__cdecl ct_vd(signed(**argp)));
signed(__cdecl ct_vw(signed short(**argp)));
signed(__cdecl ct_vb(signed char(**argp)));
signed(__cdecl ct_v(signed char(**argp)));
signed(__cdecl ct_p(void(**argp)));
/* Count pointers. */

signed(__cdecl rm_trails_r(signed(arg),signed char(*cache),signed char(*argp)));
signed(__cdecl rm_trails(signed char(*cache),signed char(*argp)));
signed(__cdecl rm_brs(signed char(*argp)));
signed(__cdecl rm_trailing_blanks_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_trailing_blanks(signed char(*argp)));
signed(__cdecl rm_trailing_spaces_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_trailing_spaces(signed char(*argp)));
signed(__cdecl rm_br_r(signed(arg),signed char(*argp)));
signed(__cdecl rm_br(signed char(*argp)));
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

signed(__cdecl n_putch(signed(n),signed(letter)));
/* Output the letter n times. */

signed(__cdecl sw_p(void(**di),void(**si)));
signed(__cdecl sw(signed(*di),signed(*si)));
signed(__cdecl nsort(signed(count),signed(*base)));
signed(__cdecl bsort(signed(count),signed(*base)));

signed(__cdecl clip_b(signed(arg),signed char(**argp)));

signed(__cdecl concatenate_d(signed(arg),signed(**di),signed(*si)));
signed(__cdecl concat_dd(signed(**di),signed(*si)));
signed(__cdecl cat_dd(signed(**di),signed(si)));
signed(__cdecl concatenate_w(signed(arg),signed short(**di),signed short(*si)));
signed(__cdecl concat_ww(signed short(**di),signed short(*si)));
signed(__cdecl cat_ww(signed short(**di),signed short(si)));
signed(__cdecl concatenate(signed(arg),signed char(**di),signed char(*si)));
signed(__cdecl concat_bb(signed char(**di),signed char(*si)));
signed(__cdecl cat_bb(signed char(**di),signed char(si)));
/* Call fn. rl later to release buffer. */

signed(__cdecl cv_l_r(signed short(radix),signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si)));
signed(__cdecl cv_l(signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si)));
signed char*(__cdecl cv_a(signed(arg),signed char(*argp)));
/* Release at the return pointer later */

signed(__cdecl cat_ll(KNOT(*argp)));

signed(__cdecl catppp(signed char(***argp)));
signed(__cdecl catpp(signed char(**argp)));
/* Output character lines out of the argument. */

signed(__cdecl opt_vt_b(signed(arg),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
signed(__cdecl opt_b(signed(arg),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp))));
/* Set up the environment. */

signed(__cdecl currently_occurring_error(void));
signed(__cdecl currently_granting_privileges_r(signed(arg),signed char(**di),void(*si/* structure token privileges */)));
signed(__cdecl currently_granting_privileges(signed char(***di),void(*si/* structure token privileges */)));
signed(__cdecl currently_granting_n_privileges(void(*argp/* structure token privileges */)));
signed(__cdecl currently_granting_token_privileges_r(signed(arg),void(*di),void(*si/* token */)));
signed(__cdecl currently_granting_token_privileges(void(**di),void(*si/* token */)));
signed(__cdecl cv_priv_luid_r(signed char(*di),signed(arg),signed(low),signed(high)));
signed(__cdecl cv_priv_luid(signed char(**di),signed(low),signed(high)));
signed(__cdecl cv_luid_priv(signed(*low),signed(*high),signed char(*si)));
void *(__cdecl currently_working_process_token(void));
void *(__cdecl currently_working_process(void));
void *(__cdecl currently_working_thread_token(void));
void *(__cdecl currently_working_thread(void));
signed(__cdecl currently_working_pid(void));
signed(__cdecl currently_working_tid(void));
signed(__cdecl currently_working_pid_process(void(*argp)));
signed(__cdecl currently_working_tid_thread(void(*argp)));
signed(__cdecl currently_working_window_tid_pid(signed(*di),void(*si)));
signed(__cdecl unmap_obj(void(*argp)));
signed(__cdecl unmap_ps_token(void(*argp)));
signed(__cdecl unmap_ps(void(*argp)));
signed(__cdecl unmap_td_token(void(*argp)));
signed(__cdecl unmap_td(void(*argp)));
void *(__cdecl map_ps_token(void(*argp)));
void *(__cdecl map_ps(signed(pid)));
void *(__cdecl map_td_token(signed(arg/* open as self */),void(*argp)));
void *(__cdecl map_td(signed(tid)));
/* Operate threads and processes. */

signed(__cdecl unpin_b(void));
/* Unpin it to your clipboard. */

signed(__cdecl depin_b_rr(signed char(**di),void(*si)));
signed(__cdecl depin_b_r(signed char(**argp)));
signed(__cdecl depin_b(signed char(**argp)));
/* De-pin. */

signed(__cdecl pin_w_rrr(void(*argp)));
signed(__cdecl pin_w_rr(void(*argp)));
signed(__cdecl pin_w_r(void(*di),signed short(*si)));
signed(__cdecl pin_w(signed short(*argp)));
signed(__cdecl pin_b(signed char(*argp)));
void *(__cdecl currently_working_window(void));
void *(__cdecl currently_working_clipboard_window(void));
void *(__cdecl currently_working_clipboard_owner(void));
signed(__cdecl clipboard_map(void(*argp)));
signed(__cdecl clipboard_empty(void));
signed(__cdecl clipboard_store_w(void(*argp)));
void *(__cdecl clipboard_retrieve_w(void));
signed(__cdecl clipboard_unmap(void));
signed(__cdecl count_clipboard_formats(void));
void *(__cdecl alloc_g(signed(arg)));
void *(__cdecl lock_g(void(*argp)));
signed(__cdecl cpy_g(void(*di),signed short(*si)));
signed(__cdecl unlock_g(void(*argp)));
signed(__cdecl rl_g(void(*argp)));
/* Pin it to your clipboard. */
