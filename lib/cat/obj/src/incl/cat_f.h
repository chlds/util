signed(__cdecl weekly_schedule(signed(argt),time_t(*args),time_t(*argp)));
/* scheduling */

signed(__cdecl ctwk_rr(time_t(args),time_t(argp)));
signed(__cdecl ctwk_r(signed(args),time_t(argp)));
signed(__cdecl ctwk(signed(args),time_t(argp)));
time_t(__cdecl cvwk_one(signed(args),time_t(argp)));
signed(__cdecl cvwk(signed arg));
signed(__cdecl arrwk(signed arg));
time_t(__cdecl cvte_yr(void));
time_t(__cdecl cvte_mo_r(time_t(args),signed(argp)));
time_t(__cdecl cvte_mo(time_t(arg)));
time_t(__cdecl cvte_di(time_t(arg)));
time_t(__cdecl cvte_wk(signed(args),time_t(argp)));
time_t(__cdecl cvte_midnight(time_t(arg)));
time_t(__cdecl cvte_ad(time_t(arg)));
THDR_T(__cdecl cvte_time(void));
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
signed(__cdecl ct_wk_mon_r(time_t(arg)));
signed(__cdecl ct_wk_mon(time_t(*argp)));
signed(__cdecl ct_wk_sun_r(time_t(arg)));
signed(__cdecl ct_wk_sun(time_t(*argp)));
signed(__cdecl ct_wk_sat_r(time_t(arg)));
signed(__cdecl ct_wk_sat(time_t(*argp)));
signed(__cdecl ct_wk(signed short(wk),time_t(*argp)));
signed(__cdecl ctdn_wk(signed short(wk),time_t(arg)));
signed(__cdecl ctdn_yr(time_t(arg)));
signed(__cdecl ord_di_wk(time_t(arg)));
signed(__cdecl ct_wk_mo(time_t(*argp)));
signed(__cdecl cf_last_wk_mo(time_t(*argp)));
signed(__cdecl cf_leap_years(signed short(arg)));
signed char *(__cdecl map_week_number_rr(signed char(*cw),signed char(*argp),time_t(*criterion)));
signed char *(__cdecl map_week_number_r(signed(arg),signed char(*argp),time_t(*criterion)));
signed char *(__cdecl map_week_number(signed(arg),time_t(*argp)));
signed(__cdecl ct_tz_hr(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_di(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_mo(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz_yr(time_t(*di),time_t(*si)));
signed(__cdecl ct_tz(time_t(*di),time_t(*si)));
signed char *(__cdecl cv_tz(time_t(*argp)));
