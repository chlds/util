time_t(__cdecl cvte_downrange_accuracy_xe_r(time_t(argq),signed(argt),signed(args),signed(arg)));
time_t(__cdecl cvte_downrange_accuracy_xe(time_t(argt),signed(args),signed(arg)));
time_t(__cdecl cvte_downrange_accuracy_rr(time_t(args),signed(arg)));
time_t(__cdecl cvte_downrange_accuracy_r(time_t(args),signed(arg)));
time_t(__cdecl cvte_downrange_accuracy(time_t(argt),signed(args),signed(arg)));
signed(__cdecl downrange_accuracy_r(time_t(arg)));
signed(__cdecl downrange_accuracy(signed(args),time_t(arg)));
signed(__cdecl downrange_coverage_r(time_t(*argt),time_t(*args),time_t(*argp)));
signed(__cdecl downrange_coverage(time_t(*argt),time_t(*args),time_t(*argp)));
signed(__cdecl weekly_schedule(signed(argt),time_t(*args),time_t(*argp)));
/* scheduling */

signed(__cdecl ctwk_rr(time_t(args),time_t(argp)));
signed(__cdecl ctwk_r(signed(args),time_t(argp)));
signed(__cdecl ctwk(signed(args),time_t(argp)));
time_t(__cdecl cvwk_one(signed(args),time_t(argp)));
signed(__cdecl cvwk(signed arg));
signed(__cdecl arrwk(signed arg));
time_t(__cdecl cvte_wk_later(time_t(args),signed(arg)));
time_t(__cdecl cvte_wk_ago(time_t(args),signed(arg)));
time_t(__cdecl cvte_wk_xe_r(time_t(args),signed(arg),time_t(__cdecl*f)(time_t(args),signed(arg))));
time_t(__cdecl cvte_wk_xe(time_t(args),signed(arg)));
time_t(__cdecl cvte_mo_later(time_t(args),signed(arg)));
time_t(__cdecl cvte_mo_ago(time_t(args),signed(arg)));
time_t(__cdecl cvte_mo_xe_r(time_t(args),signed(arg),time_t(__cdecl*f)(time_t(args),signed(arg))));
time_t(__cdecl cvte_mo_xe(time_t(args),signed(arg)));
time_t(__cdecl cvte_one_yr_later_r(time_t(args),signed(arg)));
time_t(__cdecl cvte_one_yr_later(time_t(arg)));
time_t(__cdecl cvte_one_yr_ago_r(time_t(args),signed(arg)));
time_t(__cdecl cvte_one_yr_ago(time_t(arg)));
time_t(__cdecl cvte_one_mo_later_r(time_t(args),signed(arg)));
time_t(__cdecl cvte_one_mo_later(time_t(arg)));
time_t(__cdecl cvte_one_mo_ago_r(time_t(args),signed(arg)));
time_t(__cdecl cvte_one_mo_ago(time_t(arg)));
time_t(__cdecl cvte_one_mo_r(time_t(args),time_t(__cdecl*f)(time_t(args),signed(arg))));
time_t(__cdecl cvte_one_mo(time_t(args),time_t(__cdecl*f)(time_t(args),signed(arg))));
time_t(__cdecl cvte_one_wk_later(time_t(arg)));
time_t(__cdecl cvte_one_wk_ago(time_t(arg)));
time_t(__cdecl cvte_one_di_later(time_t(arg)));
time_t(__cdecl cvte_one_di_ago(time_t(arg)));
time_t(__cdecl cvte_yr(void));
time_t(__cdecl cvte_mo_r(time_t(args),signed(argp)));
time_t(__cdecl cvte_mo(time_t(arg)));
time_t(__cdecl cvte_di(time_t(arg)));
time_t(__cdecl cvte_wk(signed(args),time_t(argp)));
time_t(__cdecl cvte_midnight(time_t(arg)));
time_t(__cdecl cvte_ad(time_t(arg)));
thdr_t(__cdecl cvte_time(void));
/* convert */

signed char *(__cdecl cvtxtofyears_in_ll_te_r(time_t *argp));
signed char *(__cdecl cvtxtofyears_in_ll_te(time_t *argp));
signed char *(__cdecl cvtxtofmonths_in_ll_te_r(time_t(*argp)));
signed char *(__cdecl cvtxtofmonths_in_ll_te(signed char(*di),time_t(*argp)));
signed char *(__cdecl cvtxtofhollowmonths_in_ll_te(signed(arg),time_t(*argp)));
signed char *(__cdecl cvtxtoffullmonths_in_ll_te(signed(arg),time_t(*argp)));
signed char *(__cdecl cvtxt_in_ll_te_rrr(time_t(*argp),signed char *(__cdecl*f)(signed(arg),time_t(*argp))));
signed char *(__cdecl cvtxt_in_ll_te_rr(signed(arg),time_t(*argp)));
signed char *(__cdecl cvtxt_in_ll_te_r(time_t *argp));
signed char *(__cdecl cvtxt_in_ll_te(time_t *argp));
signed char *(__cdecl cvtxtofmonths_abbrev_in_ll_te_r(time_t(*argp)));
signed char *(__cdecl cvtxtofmonths_abbrev_in_ll_te(signed char(*di),time_t(*argp)));
signed char *(__cdecl cvtxtofhollowmonths_abbrev_in_ll_te(signed(arg),time_t(*argp)));
signed char *(__cdecl cvtxtoffullmonths_abbrev_in_ll_te(signed(arg),time_t(*argp)));
signed char *(__cdecl cvtxt_abbrev_in_ll_te_rrr(time_t(*argp),signed char *(__cdecl*f)(signed(arg),time_t(*argp))));
signed char *(__cdecl cvtxt_abbrev_in_ll_te_rr(signed(arg),time_t(*argp)));
signed char *(__cdecl cvtxt_abbrev_in_ll_te_r(time_t *argp));
signed char *(__cdecl cvtxt_abbrev_in_ll_te(time_t *argp));
/* lingua latina */

signed(__cdecl current_sm_b(signed(arg),time_t(*argp)));
signed(__cdecl current_mn_b(signed(arg),time_t(*argp)));
signed(__cdecl current_hr_b(signed(arg),time_t(*argp)));
signed(__cdecl current_dy_b(signed(arg),time_t(*argp)));
signed(__cdecl current_wk_b(signed(arg),time_t(*argp)));
signed(__cdecl current_di_b(signed(arg),time_t(*argp)));
signed(__cdecl current_mo_b(signed(arg),time_t(*argp)));
signed(__cdecl current_yr_b(signed(arg),time_t(*argp)));
time_t(__cdecl cvyr_wknum(time_t(args),signed(arg)));
signed(__cdecl ct_wk_mon_r(time_t(arg)));
signed(__cdecl ct_wk_mon(time_t(*argp)));
signed(__cdecl ct_wk_sun_r(time_t(arg)));
signed(__cdecl ct_wk_sun(time_t(*argp)));
signed(__cdecl ct_wk_sat_r(time_t(arg)));
signed(__cdecl ct_wk_sat(time_t(*argp)));
signed(__cdecl ct_wk(signed short(wk),time_t(*argp)));
signed(__cdecl ctdn_wk(signed(args),time_t(arg)));
signed(__cdecl ctdn_yr(time_t(arg)));
signed(__cdecl ord_di_wk(time_t(arg)));
signed(__cdecl ct_wk_mo(time_t(*argp)));
signed(__cdecl cf_last_wk_mo(time_t(*argp)));
signed(__cdecl cf_leap_years(signed short(arg)));
signed char *(__cdecl map_week_number_rr(signed char(*cw),signed char(*argp),time_t(*criterion)));
signed char *(__cdecl map_week_number_r(signed(arg),signed char(*argp),time_t(*criterion)));
signed char *(__cdecl map_week_number(signed(arg),time_t(*argp)));
signed char *(__cdecl cvyrwknum_te_r(signed char(**args),signed(argp)));
signed char *(__cdecl cvyrwknum_te(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_af_za(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ar(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_az_latn_az(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_be_by(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bg_bg(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_br_fr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bs_latn_ba(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ca_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cs_cz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cy_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_da_dk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_de_de(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_dsb_de(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_el_gr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_us(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_es_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_et_ee(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_eu_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fa(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fil_ph(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fi_fi(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fr_fr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ga_ie(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gd_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gl_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gu_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gv_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ha(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_he_il(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hi_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hr_hr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hsb_de(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hu_hu(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hy_am(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_id_id(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ig(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_is_is(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_it_it(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ja_jp(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_jv(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ka_ge(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kk_kz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kn_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ko_kr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kok_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ky_kg(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ll(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_llc(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lln(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lo_la(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lt_lt(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lv_lv(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mi(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mk_mk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ml_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mr_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ms_my(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nb_no(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nj(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nl_nl(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nn_no(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_or_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pa_guru_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pl_pl(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ps_af(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pt_pt(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ro_ro(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ru_ru(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sd(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_si_lk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sk_sk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sl_sl(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sq_al(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sr_cyrl_rs(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sv_se(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sw_tz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ta_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_te_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_th_th(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tk_tm(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_to_to(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tr_tr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uk_ua(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ur(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uz_latn_uz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_vi_vn(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_yo(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zh_hans_cn(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zu(time_t(*argt),signed(args),signed(argp)));
signed(__cdecl ct_tz_hr(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_di(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_mo(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_yr(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz(time_t(*di),time_t(*si)));
signed char *(__cdecl cv_tz_rr(time_t(*argp)));
signed char *(__cdecl cv_tz_r(time_t(*argp)));
signed char *(__cdecl cv_tz(time_t(*argp)));
