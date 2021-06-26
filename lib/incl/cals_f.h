/* cals_f.h */

signed(__cdecl ct_weeks_r(time_t(sec)));
signed(__cdecl ct_weeks(time_t(criterion),time_t(sec)));
// count calendar weeks

signed(__cdecl cv_wk_yr(signed short(day_thefirst),signed short(month_thefirst),time_t(*di),time_t(si)));
// convert into second minutes for Calendar Week 1.

signed(__cdecl cv_mo_yr_r(signed short(flag),signed short(mon),time_t(*di),time_t(si)));
signed(__cdecl cv_mo_yr(signed short(mon),time_t(*di),time_t(si)));
// convert into second minutes of a first week of the first month, refer time.h

signed(__cdecl cv_wk_mo_r(signed short(wk),signed short(current_day),time_t(*di),time_t(si)));
signed(__cdecl cv_wk_mo(signed short(wk),time_t(*di),time_t(si)));
signed(__cdecl elapse_days_since(signed short(wk),time_t(arg)));
// convert into second minutes of a first day of the first week, refer time.h

signed(__cdecl cals_flag(signed char(**argv),cals_t(*argp)));
signed(__cdecl cals_flag_e(cals_t(*argp)));
signed(__cdecl cals_flag_h(cals_t(*argp)));
signed(__cdecl cals_flag_n(cals_t(*argp)));
signed(__cdecl cals_flag_v(cals_t(*argp)));

signed(__cdecl cals_load_events_internals(signed(fd),cals_t(*argp)));
signed(__cdecl cals_load_events_internal(signed char(*path),cals_t(*argp)));
signed(__cdecl cals_load_events(signed char(*csv_filename),cals_t(*argp)));
// load events i.e., map events at *(CLI_B/O/I/L+(R(event,*argp))) on the RAM.

signed(__cdecl cals_convert(signed char(*b),cals_event_t(*argp)));
signed(__cdecl cals_store_internal(signed char(*csv),cals_event_t(*argp)));
signed(__cdecl cals_store(cals_event_t(*argp)));
signed(__cdecl cals_check_for_periodic_events(signed char(*content),cals_event_t(*argp)));
signed(__cdecl cals_parse(signed char(*content),cals_event_t(*argp)));
signed(__cdecl cals_entry(signed char(**argv),cals_event_t(*argp)));
// store an event at file event.csv in directory ~/.cals/.

signed(__cdecl cals_display_upcoming_events_r(time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp)));
signed(__cdecl cals_display_upcoming_events(signed(day),time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp)));
signed(__cdecl cals_upcoming_events(signed(days),time_t(criterion),cals_roll_t(*argp)));
// display upcoming events.

signed(__cdecl cals_check_upcoming_events_r(signed(n),time_t(criterion),time_t(dif),cals_roll_t(*cache),cals_roll_t(*argp)));
signed(__cdecl cals_check_upcoming_events(signed(n),time_t(criterion),cals_roll_t(*cache),cals_roll_t(*argp)));
// check upcoming events.

signed(__cdecl cals_cache_upcoming_events(time_t(criterion),cals_event_t(**cache),cals_roll_t(*argp)));
signed(__cdecl cals_cache_day_events_r(signed short(flag),time_t(criterion),cals_event_t(*cache),cals_roll_t(*argp)));
signed(__cdecl cals_cache_day_events(time_t(criterion),cals_roll_t(*cache),cals_roll_t(*argp)));
signed(__cdecl cals_event_in_the_day(time_t(arg),cals_event_t(*argp)));

signed(__cdecl cals_remove_cached_events_r(cals_roll_t(*argp)));
signed(__cdecl cals_remove_cached_events(cals_roll_t(*argp)));
signed(__cdecl cals_cache_events(cals_event_t(*cache),cals_roll_t(*argp)));
signed(__cdecl cals_copy_events(cals_event_t(*di),cals_event_t(*si)));

signed(__cdecl cals_release_for_today(cals_t(*argp)));
signed(__cdecl cals_allocate_for_today(cals_t(*argp)));

signed(__cdecl cals_count_scheduled_annual_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_monthly_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_weekly_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_daily_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_periodic_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_events_internal(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_events_r(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_events(signed(*cache),time_t(arg),cals_roll_t(*argp)));
// count events scheduled for a week.

signed(__cdecl cals_sort_events_r_r(signed(arg),cals_roll_t(*argp)));
signed(__cdecl cals_sort_events_r(signed(arg),cals_roll_t(*argp)));
signed(__cdecl cals_sort_events(cals_roll_t(*argp)));
signed(__cdecl cals_order_events(cals_roll_t(*argp)));
// sort events

signed(__cdecl cals_update_time_for_periodic_events(cals_event_t(*cache),cals_t(*argp)));
signed(__cdecl cals_cache_periodic_events_r(signed short(n),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp)));
signed(__cdecl cals_cache_periodic_events(signed short(n),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp)));
signed(__cdecl cals_refer_annual_events_internal(signed short(arg),cals_event_t(*cache),cals_t(*argp)));
signed(__cdecl cals_refer_annual_events(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp)));
signed(__cdecl cals_refer_periodic_events(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp)));
// for periodic events

signed(__cdecl cals_count_events_r(cals_event_t(*argp)));
signed(__cdecl cals_count_events(cals_roll_t(*argp)));
signed(__cdecl cals_display_events_r_r(time_t(*prev),cals_event_t(*argp)));
signed(__cdecl cals_display_events_r(time_t(prev),cals_event_t(*argp)));
signed(__cdecl cals_display_events(cals_roll_t(*argp)));
signed(__cdecl cals_refer_events_internal(signed short(flag),cals_event_t(*event),cals_t(*argp)));
signed(__cdecl cals_refer_events_r_r(signed short(flag),cals_event_t(*cache),cals_roll_t(*cached),cals_t(*argp)));
signed(__cdecl cals_refer_events_r(signed short(flag),cals_roll_t(*cache),cals_t(*argp)));
signed(__cdecl cals_refer_events(signed short(flag),cals_t(*argp)));
signed(__cdecl cals_sched_events(signed char(*content),cals_roll_t(*argp)));
signed(__cdecl cals_add_events(signed char(*content),cals_roll_t(*argp)));

signed(__cdecl cals_unbind_events(cals_roll_t(*argp)));
signed(__cdecl cals_unmap_events(cals_roll_t(*argp)));

signed(__cdecl cals_bind_events(cals_roll_t(*argp)));
signed(__cdecl cals_concat_events(cals_event_t(*cache),cals_roll_t(*argp)));

signed(__cdecl cals_display_mo_yr(signed short(mo),signed short(yr),cals_t(*argp)));
signed(__cdecl cals_r_r(signed short(mo),signed(arg),cals_t(*argp)));
signed(__cdecl cals_r(signed(arg),cals_t(*argp)));

signed(__cdecl cals_backward_r(signed(arg),cals_t(*argp)));
signed(__cdecl cals_backward(signed(arg),cals_t(*argp)));

signed(__cdecl cals_sched(signed long long/* time_t */(arg),cals_event_t(*argp)));

signed(__cdecl cals_reset_event(signed char(*content),cals_event_t(*argp)));
signed(__cdecl cals_init_event(cals_event_t(*argp)));
signed(__cdecl cals_init_roll(cals_roll_t(*argp)));
signed(__cdecl cals_init(cals_t(*argp)));
signed(__cdecl cals_opt_r(signed(arg),cals_t(*argp)));
signed(__cdecl cals_opt(signed(arg),cals_t(*argp)));
signed(__cdecl cals_vt_opt(signed(arg),cals_t(*argp)));
signed(__cdecl cals_help(cals_t(*argp)));

signed(__cdecl cals_reparse(signed char(**b),cals_event_t(*argp)));
// convert an event into a CSV.

signed(__cdecl cv_time(signed char(*b),cals_event_t(*argp)));
// convert to time out of characters.

signed(__cdecl cv_date(signed char(*b),cals_event_t(*argp)));
// convert to a month, day and year out of characters.

signed(__cdecl cv_ord_week(time_t(arg)));
// convert into an ordinal number of the week in the month from the time.

signed(__cdecl cv_subject(signed char(*b),cals_event_t(*argp)));
// map a subject on the RAM.
