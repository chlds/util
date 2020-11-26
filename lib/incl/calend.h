/* **** Calendar

Remarks:
Not a good design and/or implementation..
Being deprecated..
*/


# define CALS_INIT (0x01)
# define CALS_VERBOSE (0x02)
# define CALS_DATE_TODAY (0x04)
# define CALS_TIME_ALLDAY (0x08)
# define CALS_NO_SUBJECT (0x10)
# define CALS_LOADED (0x20)
# define CALS_INVALID (0x40)
# define CALS_INTERRUPT (0x80)
# define CALS_ERROR (0x100)
# define CALS_NONLOADING (0x200)

# define CALS_CODEPAGES (0x02)
# define CALS_OBJS (0x04)

# define COL_R (0x38)
// column width of the right

/* calend_e.h */
enum {
JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER,MONTHS,
};

enum {
SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,DAYS,
};

enum {
CALS_WK,CALS_DI,CALS_MO,CALS_YR,CALS_DATE,
};

enum {
CALS_SM,CALS_MN,CALS_HR,CALS_TIME,
};

enum {
THEFIRST,THELAST,
};

/* calend_d.h */
static signed char/* const */*(CAPS_DAYOFTHEWEEK[]) = {
(char signed(*)) ("SUNDAY"),
(char signed(*)) ("MONDAY"),
(char signed(*)) ("TUESDAY"),
(char signed(*)) ("WEDNESDAY"),
(char signed(*)) ("THURSDAY"),
(char signed(*)) ("FRIDAY"),
(char signed(*)) ("SATURDAY"),
(char signed(*)) (0x00),
};

static signed char/* const */*(DAYOFTHEWEEK[]) = {
(char signed(*)) ("Sunday"),
(char signed(*)) ("Monday"),
(char signed(*)) ("Tuesday"),
(char signed(*)) ("Wednesday"),
(char signed(*)) ("Thursday"),
(char signed(*)) ("Friday"),
(char signed(*)) ("Saturday"),
(char signed(*)) (0x00),
};

static signed char/* const */*(CAPS_DAYOFTHEWK[]) = {
"SUN","MON","TUE","WED","THU","FRI","SAT",(char signed(*)) (0x00),
};

static signed char/* const */*(DAYOFTHEWK[]) = {
"Sun","Mon","Tue","Wed","Thu","Fri","Sat",(char signed(*)) (0x00),
};

static signed char/* const */*(CAPS_MONTH[]) = {
(char signed(*)) ("JANUARY"),
(char signed(*)) ("FEBRUARY"),
(char signed(*)) ("MARCH"),
(char signed(*)) ("APRIL"),
(char signed(*)) ("MAY"),
(char signed(*)) ("JUNE"),
(char signed(*)) ("JULY"),
(char signed(*)) ("AUGUST"),
(char signed(*)) ("SEPTEMBER"),
(char signed(*)) ("OCTOBER"),
(char signed(*)) ("NOVEMBER"),
(char signed(*)) ("DECEMBER"),
(char signed(*)) (0x00),
};

static signed char/* const */*(MONTH[]) = {
(char signed(*)) ("January"),
(char signed(*)) ("February"),
(char signed(*)) ("March"),
(char signed(*)) ("April"),
(char signed(*)) ("May"),
(char signed(*)) ("June"),
(char signed(*)) ("July"),
(char signed(*)) ("August"),
(char signed(*)) ("September"),
(char signed(*)) ("October"),
(char signed(*)) ("November"),
(char signed(*)) ("December"),
(char signed(*)) (0x00),
};

static signed char/* const */*(CAPS_MON[]) = {
"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC",(signed char(*)) (0x00),
};

static signed char/* const */*(MON[]) = {
"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec",(signed char(*)) (0x00),
};

struct cals_codepage {
signed io[CALS_CODEPAGES];
signed short flag;
void *optl;
} typedef cals_codepage_t;

struct cals_event {
signed char *b;
signed short *w;
signed short time[CALS_TIME];
signed short date[CALS_DATE];
time_t t;
// signed long long /* time_t */ ll;
signed short flag;
struct cals_event *d;
struct cals_event *s;
void *optl;
} typedef cals_event_t;

struct cals_roll {
cals_event_t *event[0x04];
//* deprecated
cals_event_t today;
signed short day[0x02];
signed short month[0x02];
time_t wk1[0x04];
time_t t[0x04];
//*/
signed short insert;
signed short flag;
void *optl;
} typedef cals_roll_t;

struct cals {
signed short day[0x02];
signed short month[0x02];
time_t wk1[0x04];
time_t t[0x04];
cals_codepage_t codepage;
cals_event_t today;
cals_roll_t roll;
signed short flag;
void *optl;
} typedef cals_t;

/* calend_f.h */
signed(__cdecl cals_load_events_internals(signed(fd),cals_t(*argp)));
signed(__cdecl cals_load_events_internal(signed char(*path),cals_t(*argp)));
signed(__cdecl cals_load_events(signed char(*csv_filename),cals_t(*argp)));
// load events i.e., map events at *(CLI_B/O/I/L+(R(event,*argp))) on the RAM.

signed(__cdecl cals_convert(signed char(*b),cals_event_t(*argp)));
signed(__cdecl cals_store_internal(signed char(*csv),cals_event_t(*argp)));
signed(__cdecl cals_store(cals_event_t(*argp)));
signed(__cdecl cals_parse(signed char(*content),cals_event_t(*argp)));
signed(__cdecl cals_entry(signed char(**argv),cals_event_t(*argp)));
// store an event at file event.csv in directory ~/.cals/.

signed(__cdecl cals_remove_cached_events_r(cals_roll_t(*argp)));
signed(__cdecl cals_remove_cached_events(cals_roll_t(*argp)));
signed(__cdecl cals_cache_events(cals_event_t(*cache),cals_roll_t(*argp)));
signed(__cdecl cals_copy_events(cals_event_t(*di),cals_event_t(*si)));

signed(__cdecl cals_release_for_today(cals_t(*argp)));
signed(__cdecl cals_allocate_for_today(cals_t(*argp)));

signed(__cdecl cals_count_scheduled_events_r(signed(*cache),cals_event_t(*term),cals_event_t(*argp)));
signed(__cdecl cals_count_scheduled_events(signed(*cache),time_t(arg),cals_roll_t(*argp)));
// count events scheduled for a week.

signed(__cdecl cals_sort_events_r_r(signed(arg),cals_roll_t(*argp)));
signed(__cdecl cals_sort_events_r(signed(arg),cals_roll_t(*argp)));
signed(__cdecl cals_sort_events(cals_roll_t(*argp)));
signed(__cdecl cals_order_events(cals_roll_t(*argp)));
// sort events

signed(__cdecl cals_count_events_r(cals_event_t(*argp)));
signed(__cdecl cals_count_events(cals_roll_t(*argp)));
signed(__cdecl cals_display_events_r(signed short(flag),cals_event_t(*argp)));
signed(__cdecl cals_display_events(cals_roll_t(*argp)));
signed(__cdecl cals_refer_events_internal(signed short(flag),cals_event_t(*event),cals_t(*argp)));
signed(__cdecl cals_refer_events(signed short(flag),cals_t(*argp)));
signed(__cdecl cals_sched_events(signed char(*content),cals_roll_t(*argp)));
signed(__cdecl cals_add_events(signed char(*content),cals_roll_t(*argp)));

signed(__cdecl cals_unbind_events(cals_roll_t(*argp)));
signed(__cdecl cals_unmap_events(cals_roll_t(*argp)));

signed(__cdecl cals_bind_events(cals_roll_t(*argp)));
signed(__cdecl cals_concat_events(cals_event_t(*cache),cals_roll_t(*argp)));

signed(__cdecl cals_r_r(signed short(mo),signed(arg),cals_t(*argp)));
signed(__cdecl cals_r(signed(arg),cals_t(*argp)));

signed(__cdecl cals_backward_r(signed(arg),cals_t(*argp)));
signed(__cdecl cals_backward(signed(arg),cals_t(*argp)));

signed(__cdecl cals_retrieve_week1(signed short(day_thefirst),signed short(month_thefirst),time_t(*di),time_t(si)));

signed(__cdecl cals_sched(signed long long/* time_t */(arg),cals_event_t(*argp)));

signed(__cdecl cals_init_codepage(cals_codepage_t(*argp)));
signed(__cdecl cals_init_event(cals_event_t(*argp)));
signed(__cdecl cals_init_roll(cals_roll_t(*argp)));
signed(__cdecl cals_init(cals_t(*argp)));
signed(__cdecl cals_help(void));

signed(__cdecl concat_in_csv(signed char(**b),cals_event_t(*argp)));
// concatenate in CSV.

signed(__cdecl cv_time(signed char(*b),cals_event_t(*argp)));
// convert to time out of characters.

signed(__cdecl cv_date(signed char(*b),cals_event_t(*argp)));
// convert to a month, day and year out of characters.

signed(__cdecl cv_subject(signed char(*b),cals_event_t(*argp)));
// map a subject on the RAM.
