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

# define CALS_OBJS (0x04)

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

struct cals {
signed char *b;
signed short *w;
signed short time[CALS_TIME];
signed short date[CALS_DATE];
time_t t;
// signed long long /* time_t */ ll;
signed short flag;
struct cals *d;
struct cals *s;
void *optl;
} typedef cals_t;

struct cals_stat {
signed short day[0x02];
signed short month[0x02];
time_t wk1[0x04];
time_t t[0x04];
signed short insert;
signed short flag;
cals_t today;
cals_t *event[0x04];
void *optl;
} typedef cals_stat_t;

/* calend_f.h */
signed(__cdecl cals_load_events(signed char(*csv_filename),cals_stat_t(*argp)));
// load events i.e., map events at *(CLI_B/O/I/L+(R(event,*argp))) on the RAM.

signed(__cdecl cals_store(cals_t(*argp)));
signed(__cdecl cals_parse(signed char(*content),cals_t(*argp)));
signed(__cdecl cals_entry(signed char(**argv),cals_t(*argp)));
// store an event at file event.csv in directory ~/.cals/.

signed(__cdecl cals_sched_events(signed char(*content),cals_stat_t(*argp)));
signed(__cdecl cals_add_events(signed char(*content),cals_stat_t(*argp)));

signed(__cdecl cals_unbind_events(cals_stat_t(*argp)));
signed(__cdecl cals_unmap_events(cals_stat_t(*argp)));

signed(__cdecl cals_bind_events(cals_stat_t(*argp)));
signed(__cdecl cals_concat_events(cals_t(*cache),cals_stat_t(*argp)));

signed(__cdecl cals_rr(signed short(mo),signed(arg),cals_stat_t(*argp)));
signed(__cdecl cals_r(signed(arg),cals_stat_t(*argp)));

signed(__cdecl cals_backward_r(signed(arg),cals_stat_t(*argp)));
signed(__cdecl cals_backward(signed(arg),cals_stat_t(*argp)));

signed(__cdecl cals_stat_init(cals_stat_t(*argp)));
signed(__cdecl cals_retrieve_week1(signed short(day_thefirst),signed short(month_thefirst),time_t(*di),time_t(si)));

signed(__cdecl cals_sched(signed long long/* time_t */(arg),cals_t(*argp)));
signed(__cdecl cals_init(cals_t(*argp)));

signed(__cdecl cv_time(signed char(*b),cals_t(*argp)));
// convert to time out of characters.

signed(__cdecl cv_date(signed char(*b),cals_t(*argp)));
// convert to a month, day and year out of characters.

signed(__cdecl cv_subject(signed char(*b),cals_t(*argp)));
// map a subject on the RAM.
