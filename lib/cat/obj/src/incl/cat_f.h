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
signed char *(__cdecl cat_mo_decor_in_ll_r_rr(time_t(*argp)));
signed char *(__cdecl cat_mo_decor_in_ll_r_r(time_t(*argp)));
signed char *(__cdecl cat_mo_decor_in_ll_r(signed(args),time_t(*argp)));
signed char *(__cdecl cat_mo_decor_in_ll(signed(args/* abbrev */),time_t(*argp)));
signed(__cdecl cat_mo_in_ll_on_carryover(signed(args/* di */),signed(argp/* mo */)));
signed(__cdecl cat_mo_in_ll_on_moon(signed(arg/* mo */)));
signed char *(__cdecl cat_mo_in_ll_r_rr(time_t(*argp)));
signed char *(__cdecl cat_mo_in_ll_r_r(time_t(*argp)));
signed char *(__cdecl cat_mo_in_ll_r(signed(args),time_t(*argp)));
signed char *(__cdecl cat_mo_in_ll(signed(args/* abbrev */),time_t(*argp)));
signed char *(__cdecl cat_di_decor_abbrev_in_ll_on_new_moon(time_t(*argp)));
signed char *(__cdecl cat_di_decor_abbrev_in_ll_on_full_moon(time_t(*argp)));
signed char *(__cdecl cat_di_decor_abbrev_in_ll_on_hollow_moon(time_t(*argp)));
signed char *(__cdecl cat_di_decor_in_ll_on_new_moon(time_t(*argp)));
signed char *(__cdecl cat_di_decor_in_ll_on_full_moon(time_t(*argp)));
signed char *(__cdecl cat_di_decor_in_ll_on_hollow_moon(time_t(*argp)));
signed char *(__cdecl cat_di_decor_in_ll_r_rr(time_t(*argp)));
signed char *(__cdecl cat_di_decor_in_ll_r_r(time_t(*argp)));
signed char *(__cdecl cat_di_decor_in_ll_r(signed(args),time_t(*argp)));
signed char *(__cdecl cat_di_decor_in_ll(signed(args/* abbrev */),time_t(*argp)));
signed(__cdecl cat_di_in_ll_to_new_moon(signed(args/* di */),time_t(*argp)));
signed char *(__cdecl cat_di_abbrev_in_ll_on_new_moon(time_t(*argp)));
signed char *(__cdecl cat_di_abbrev_in_ll_on_full_moon(time_t(*argp)));
signed char *(__cdecl cat_di_abbrev_in_ll_on_hollow_moon(time_t(*argp)));
signed char *(__cdecl cat_di_in_ll_on_new_moon(time_t(*argp)));
signed char *(__cdecl cat_di_in_ll_on_full_moon(time_t(*argp)));
signed char *(__cdecl cat_di_in_ll_on_hollow_moon(time_t(*argp)));
signed char *(__cdecl cat_di_in_ll_r_rr(time_t(*argp)));
signed char *(__cdecl cat_di_in_ll_r_r(time_t(*argp)));
signed char *(__cdecl cat_di_in_ll_r(signed(args),time_t(*argp)));
signed char *(__cdecl cat_di_in_ll(signed(args/* abbrev */),time_t(*argp)));
signed char *(__cdecl cat_december_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_november_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_october_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_september_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_august_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_july_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_june_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_may_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_april_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_march_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_february_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_january_decor_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_december_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_november_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_october_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_september_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_august_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_july_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_june_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_may_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_april_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_march_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_february_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_january_in_ll(signed(args/* di */),signed(argp/* carryover */)));
signed char *(__cdecl cat_jan_in_ll(signed arg));
signed char *(__cdecl cat_feb_in_ll(signed arg));
signed char *(__cdecl cat_mar_in_ll(signed arg));
signed char *(__cdecl cat_apr_in_ll(signed arg));
signed char *(__cdecl cat_may_abbrev_in_ll(signed arg));
signed char *(__cdecl cat_jun_in_ll(signed arg));
signed char *(__cdecl cat_jul_in_ll(signed arg));
signed char *(__cdecl cat_aug_in_ll(signed arg));
signed char *(__cdecl cat_sep_in_ll(signed arg));
signed char *(__cdecl cat_oct_in_ll(signed arg));
signed char *(__cdecl cat_nov_in_ll(signed arg));
signed char *(__cdecl cat_dec_in_ll(signed arg));
signed char *(__cdecl cat_jan_decor_in_ll(signed arg));
signed char *(__cdecl cat_feb_decor_in_ll(signed arg));
signed char *(__cdecl cat_mar_decor_in_ll(signed arg));
signed char *(__cdecl cat_apr_decor_in_ll(signed arg));
signed char *(__cdecl cat_may_decor_abbrev_in_ll(signed arg));
signed char *(__cdecl cat_jun_decor_in_ll(signed arg));
signed char *(__cdecl cat_jul_decor_in_ll(signed arg));
signed char *(__cdecl cat_aug_decor_in_ll(signed arg));
signed char *(__cdecl cat_sep_decor_in_ll(signed arg));
signed char *(__cdecl cat_oct_decor_in_ll(signed arg));
signed char *(__cdecl cat_nov_decor_in_ll(signed arg));
signed char *(__cdecl cat_dec_decor_in_ll(signed arg));
signed char *(__cdecl cat_sunday_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_sunday_in_ll(signed(argp)));
signed char *(__cdecl cat_sun_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_sun_in_ll(signed(argp)));
signed char *(__cdecl cat_monday_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_monday_in_ll(signed(argp)));
signed char *(__cdecl cat_mon_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_mon_in_ll(signed(argp)));
signed char *(__cdecl cat_tuesday_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_tuesday_in_ll(signed(argp)));
signed char *(__cdecl cat_tue_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_tue_in_ll(signed(argp)));
signed char *(__cdecl cat_wednesday_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_wednesday_in_ll(signed(argp)));
signed char *(__cdecl cat_wed_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_wed_in_ll(signed(argp)));
signed char *(__cdecl cat_thursday_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_thursday_in_ll(signed(argp)));
signed char *(__cdecl cat_thu_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_thu_in_ll(signed(argp)));
signed char *(__cdecl cat_friday_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_friday_in_ll(signed(argp)));
signed char *(__cdecl cat_fri_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_fri_in_ll(signed(argp)));
signed char *(__cdecl cat_saturday_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_saturday_in_ll(signed(argp)));
signed char *(__cdecl cat_sat_decor_in_ll(signed(argp)));
signed char *(__cdecl cat_sat_in_ll(signed(argp)));
signed char *(__cdecl cat_dies_xe(signed(args),signed char(*argp)));
signed char *(__cdecl cat_dies(signed(argp)));
signed char *(__cdecl cat_day_decor_in_ll(signed(argp/* e.g., case */)));
signed char *(__cdecl cat_day_in_ll(signed(argp/* e.g., case */)));
signed char *(__cdecl cat_wk_decor_in_ll_r_rr(time_t(*argp)));
signed char *(__cdecl cat_wk_decor_in_ll_r_r(time_t(*argp)));
signed char *(__cdecl cat_wk_decor_in_ll_r(signed(args),time_t(*argp)));
signed char *(__cdecl cat_wk_decor_in_ll(signed(args/* abbrev */),time_t(*argp)));
signed char *(__cdecl cat_wk_in_ll_r_rr(time_t(*argp)));
signed char *(__cdecl cat_wk_in_ll_r_r(time_t(*argp)));
signed char *(__cdecl cat_wk_in_ll_r(signed(args),time_t(*argp)));
signed char *(__cdecl cat_wk_in_ll(signed(args/* abbrev */),time_t(*argp)));
signed char *(__cdecl cat_word_separator(signed(arg)));
signed char *(__cdecl cat_vndevicesimvm(signed(argp)));
signed char *(__cdecl cat_dvodevicesimvm(signed(argp)));
signed char *(__cdecl cat_eid(signed(argp)));
signed char *(__cdecl cat_idvs(signed(argp)));
signed char *(__cdecl cat_idibvs(signed(argp)));
signed char *(__cdecl cat_dvodecimvm(signed(argp)));
signed char *(__cdecl cat_vndecimvm(signed(argp)));
signed char *(__cdecl cat_decimvm(signed(argp)));
signed char *(__cdecl cat_non(signed(argp)));
signed char *(__cdecl cat_nonvm(signed(argp)));
signed char *(__cdecl cat_nonas(signed(argp)));
signed char *(__cdecl cat_nonis(signed(argp)));
signed char *(__cdecl cat_octavvm(signed(argp)));
signed char *(__cdecl cat_septimvm(signed(argp)));
signed char *(__cdecl cat_sextvm(signed(argp)));
signed char *(__cdecl cat_qvintvm(signed(argp)));
signed char *(__cdecl cat_qvartvm(signed(argp)));
signed char *(__cdecl cat_tertivm(signed(argp)));
signed char *(__cdecl cat_prid(signed(argp)));
signed char *(__cdecl cat_pridie(signed(argp)));
signed char *(__cdecl cat_kal(signed(argp)));
signed char *(__cdecl cat_kalendas(signed(argp)));
signed char *(__cdecl cat_kalendis(signed(argp)));
signed char *(__cdecl cat_diem_abbrev(signed(argp)));
signed char *(__cdecl cat_diem(signed(argp)));
signed char *(__cdecl cat_ante_abbrev(signed(argp)));
signed char *(__cdecl cat_ante(signed(argp)));
signed char *(__cdecl cat_null(signed(argp)));
signed char *(__cdecl cat_xxxi_in_ll(signed(argp)));
signed char *(__cdecl cat_xxx_in_ll(signed(argp)));
signed char *(__cdecl cat_xxix_in_ll(signed(argp)));
signed char *(__cdecl cat_xxviii_in_ll(signed(argp)));
signed char *(__cdecl cat_xxvii_in_ll(signed(argp)));
signed char *(__cdecl cat_xxvi_in_ll(signed(argp)));
signed char *(__cdecl cat_xxv_in_ll(signed(argp)));
signed char *(__cdecl cat_xxiv_in_ll(signed(argp)));
signed char *(__cdecl cat_xxiii_in_ll(signed(argp)));
signed char *(__cdecl cat_xxii_in_ll(signed(argp)));
signed char *(__cdecl cat_xxi_in_ll(signed(argp)));
signed char *(__cdecl cat_xx_in_ll(signed(argp)));
signed char *(__cdecl cat_xix_in_ll(signed(argp)));
signed char *(__cdecl cat_xviii_in_ll(signed(argp)));
signed char *(__cdecl cat_xvii_in_ll(signed(argp)));
signed char *(__cdecl cat_xvi_in_ll(signed(argp)));
signed char *(__cdecl cat_xv_in_ll(signed(argp)));
signed char *(__cdecl cat_xiv_in_ll(signed(argp)));
signed char *(__cdecl cat_xiii_in_ll(signed(argp)));
signed char *(__cdecl cat_xii_in_ll(signed(argp)));
signed char *(__cdecl cat_xi_in_ll(signed(argp)));
signed char *(__cdecl cat_x_in_ll(signed(argp)));
signed char *(__cdecl cat_ix_in_ll(signed(argp)));
signed char *(__cdecl cat_viii_in_ll(signed(argp)));
signed char *(__cdecl cat_vii_in_ll(signed(argp)));
signed char *(__cdecl cat_vi_in_ll(signed(argp)));
signed char *(__cdecl cat_v_in_ll(signed(argp)));
signed char *(__cdecl cat_iv_in_ll(signed(argp)));
signed char *(__cdecl cat_iii_in_ll(signed(argp)));
signed char *(__cdecl cat_ii_in_ll(signed(argp)));
signed char *(__cdecl cat_i_in_ll(signed(argp)));
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
signed char *(__cdecl cvwknum_te_in_af_za_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_af_za_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_af_za(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ar_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ar_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ar(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_as_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_as_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_as_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_az_latn_az_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_az_latn_az_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_az_latn_az(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_be_by_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_be_by_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_be_by(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bg_bg_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bg_bg_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bg_bg(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_br_fr_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_br_fr_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_br_fr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bs_latn_ba_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bs_latn_ba_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_bs_latn_ba(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ca_es_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ca_es_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ca_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cs_cz_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cs_cz_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cs_cz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cy_gb_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cy_gb_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_cy_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_da_dk_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_da_dk_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_da_dk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_de_de_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_de_de_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_de_de(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_dsb_de_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_dsb_de_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_dsb_de(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_el_gr_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_el_gr_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_el_gr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_gb_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_gb_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_us_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_us_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_en_us(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_es_es_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_es_es_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_es_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_et_ee_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_et_ee_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_et_ee(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_eu_es_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_eu_es_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_eu_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fa_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fa_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fa(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fil_ph_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fil_ph_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fil_ph(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fi_fi_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fi_fi_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fi_fi(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fr_fr_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fr_fr_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_fr_fr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ga_ie_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ga_ie_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ga_ie(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gd_gb_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gd_gb_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gd_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gl_es_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gl_es_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gl_es(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gu_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gu_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gu_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gv_gb_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gv_gb_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_gv_gb(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ha_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ha_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ha(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_he_il_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_he_il_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_he_il(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hi_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hi_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hi_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hr_hr_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hr_hr_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hr_hr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hsb_de_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hsb_de_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hsb_de(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hu_hu_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hu_hu_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hu_hu(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hy_am_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hy_am_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_hy_am(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_id_id_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_id_id_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_id_id(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ig_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ig_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ig(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_is_is_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_is_is_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_is_is(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_it_it_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_it_it_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_it_it(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ja_jp_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ja_jp_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ja_jp(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_jv_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_jv_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_jv(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ka_ge_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ka_ge_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ka_ge(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kk_kz_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kk_kz_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kk_kz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kn_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kn_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kn_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ko_kr_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ko_kr_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ko_kr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kok_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kok_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_kok_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ky_kg_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ky_kg_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ky_kg(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ll_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ll_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ll(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_llc_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_llc_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_llc(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lln_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lln_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lln(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lo_la_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lo_la_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lo_la(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lt_lt_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lt_lt_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lt_lt(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lv_lv_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lv_lv_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_lv_lv(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mi_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mi_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mi(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mk_mk_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mk_mk_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mk_mk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ml_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ml_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ml_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mn_mn_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mn_mn_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mn_mn(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mr_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mr_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_mr_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ms_my_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ms_my_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ms_my(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nb_no_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nb_no_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nb_no(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nj_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nj_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nj(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nl_nl_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nl_nl_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nl_nl(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nn_no_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nn_no_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_nn_no(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_or_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_or_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_or_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pa_guru_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pa_guru_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pa_guru_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pl_pl_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pl_pl_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pl_pl(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ps_af_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ps_af_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ps_af(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pt_pt_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pt_pt_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_pt_pt(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_qu_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_qu_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_qu(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ro_ro_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ro_ro_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ro_ro(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ru_ru_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ru_ru_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ru_ru(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sd_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sd_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sd(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_si_lk_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_si_lk_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_si_lk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sk_sk_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sk_sk_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sk_sk(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sl_sl_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sl_sl_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sl_sl(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_so_so_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_so_so_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_so_so(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sq_al_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sq_al_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sq_al(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sr_cyrl_rs_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sr_cyrl_rs_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sr_cyrl_rs(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sv_se_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sv_se_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sv_se(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sw_tz_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sw_tz_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_sw_tz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ta_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ta_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ta_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_te_in_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_te_in_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_te_in(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_th_th_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_th_th_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_th_th(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tk_tm_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tk_tm_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tk_tm(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_to_to_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_to_to_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_to_to(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tr_tr_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tr_tr_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_tr_tr(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uk_ua_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uk_ua_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uk_ua(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ur_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ur_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_ur(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uz_latn_uz_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uz_latn_uz_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_uz_latn_uz(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_vi_vn_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_vi_vn_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_vi_vn(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_yo_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_yo_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_yo(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zh_hans_cn_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zh_hans_cn_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zh_hans_cn(time_t(*argt),signed(args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zu_rr(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zu_r(time_t(*args),signed(argp)));
signed char *(__cdecl cvwknum_te_in_zu(time_t(*argt),signed(args),signed(argp)));
signed(__cdecl ct_tz_hr(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_di(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_mo(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_yr(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz(time_t(*di),time_t(*si)));
signed char *(__cdecl cv_tz_hr(signed(args/* scale */),time_t(*argp)));
signed char *(__cdecl cv_tz_mn(signed(args/* scale */),time_t(*argp)));
signed char *(__cdecl cv_tz_rrr(time_t(*args),signed char(*argp)));
signed char *(__cdecl cv_tz_rr(time_t(*argp)));
signed char *(__cdecl cv_tz_r(time_t(*argp)));
signed char *(__cdecl cv_tz(time_t(*argp)));
