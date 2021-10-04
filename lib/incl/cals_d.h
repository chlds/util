/* cals_d.h */

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
# define CALS_BOUND (0x400)
# define CALS_PERIODIC (0x800)
# define CALS_QUIT (0x1000)
# define CALS_MERIDIEM (0x2000)
# define CALS_IN_DAYS (0x4000)
# define CALS_EOM (0x8000)

# define CALS_ANNUAL (0x01)
# define CALS_MONTHLY (0x02)
# define CALS_WEEKLY (0x04)
# define CALS_DAILY (0x08)
# define CALS_THEDAY (0x10)
# define CALS_TWODAYS (0x20)
# define CALS_WORKWEEK (0x40)
# define CALS_WEEKEND (0x80)
# define CALS_THEFIRST (0x100)
# define CALS_THESECOND (0x200)
# define CALS_THETHIRD (0x400)
# define CALS_THEFOURTH (0x800)
# define CALS_THELAST (0x1000)
# define CALS_APERIODIC (0x8000)

# define CALS_OBJS (0x04)

# define COL_R (0x38)
// column width of the right

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

static signed char *(CAPS_MON[]) = {
"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC",(signed char(*)) (0x00),
};

static signed char *(MON[]) = {
"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec",(signed char(*)) (0x00),
};

static signed char **(MONTH_V[]) = {
CAPS_MONTH,MON,(signed char(**)) (0x00),
};

struct cals_event {
signed char *b;
signed short *w;
time_t t;
// signed long long /* time_t */ ll;
signed short colors;
signed short flag;
signed short periodic;
signed short time[CALS_TIME];
signed short date[CALS_DATE];
struct cals_event *(event[CLI_CACHE]);
void *optl;
} typedef cals_event_t;

struct cals_roll {
signed short colors;
signed short flag;
cals_event_t *event[0x04];
void *optl;
} typedef cals_roll_t;

struct cals {
signed short day[0x02];
signed short month[0x02];
time_t wk1[0x04];
time_t t[0x04];
cli_codepage_t codepage;
cli_property_t property;
cals_event_t today;
cals_roll_t roll;
signed short colors;
signed short flag;
void *optl;
} typedef cals_t;
