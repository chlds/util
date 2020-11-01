/* **** Calendar

Remarks:
Not a good design and/or implementation..
Being deprecated..
*/


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
static signed char const *(dayoftheweek[]) = {
(char signed(*)) ("Sunday"),
(char signed(*)) ("Monday"),
(char signed(*)) ("Tuesday"),
(char signed(*)) ("Wednesday"),
(char signed(*)) ("Thursday"),
(char signed(*)) ("Friday"),
(char signed(*)) ("Saturday"),
(char signed(*)) (0x00),
};

static signed char const *(dayofthewk[]) = {
(char signed(*)) ("SUN"),
(char signed(*)) ("MON"),
(char signed(*)) ("TUE"),
(char signed(*)) ("WED"),
(char signed(*)) ("THU"),
(char signed(*)) ("FRI"),
(char signed(*)) ("SAT"),
(char signed(*)) (0x00),
};

static signed char const *(month[]) = {
(char signed(*)) ("January"),
(char signed(*)) ("February"),
(char signed(*)) ("March"),
(char signed(*)) ("April"),
(char signed(*)) ("May"),
(char signed(*)) ("June"),
(char signed(*)) ("July"),
(char signed(*)) ("August"),
(char signed(*)) ("Septembre"),
(char signed(*)) ("Octobre"),
(char signed(*)) ("Novembre"),
(char signed(*)) ("Decembre"),
(char signed(*)) (0x00),
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
time_t curr_t;
time_t curr_wk1;
signed short flag;
cals_t today;
cals_t *event[0x04];
void *optl;
} typedef cals_stat_t;

/* calend_f.h */
signed(__cdecl cals_stat_init(cals_stat_t(*argp)));
signed(__cdecl cals_retrieve_week1(signed short(day_thefirst),signed short(month_thefirst),time_t(*di),time_t(si)));

signed(__cdecl cals_unmap(cals_t(*argp)));
signed(__cdecl cals_map(cals_t(*argp),signed char(*si)));

signed(__cdecl cals_sched(cals_t(*argp),signed long long/* time_t */(arg)));
signed(__cdecl cals_init(cals_t(*argp)));

signed(__cdecl cv_date(cals_t(*di),signed char(*si)));
// convert to a month, day and year out of characters.
