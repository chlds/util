/* Notes

Arabic

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_ARABIC_IN_AR[] = ("Arabic");
static signed char CALENDAR_LLSC_ARABIC_IN_AR[] = {
'A',0xCA,0x80,0xE1,0xB4,0x80,0xCA,0x99,0xC9,0xAA,0xE1,0xB4,0x84,0x00,
};

static signed char SUNDAY_AR[] = {
0xD8,0xA7,0xD9,0x84,0xD8,0xA3,0xD8,0xAD,0xD8,0xAF,0x00,
};
static signed char MONDAY_AR[] = {
0xD8,0xA7,0xD9,0x84,0xD8,0xA7,0xD8,0xAB,0xD9,0x86,0xD9,0x8A,0xD9,0x86,0x00,
};
static signed char TUESDAY_AR[] = {
0xD8,0xA7,0xD9,0x84,0xD8,0xAB,0xD9,0x84,0xD8,0xA7,0xD8,0xAB,0xD8,0xA7,0xD8,0xA1,0x00,
};
static signed char WEDNESDAY_AR[] = {
0xD8,0xA7,0xD9,0x84,0xD8,0xA3,0xD8,0xB1,0xD8,0xA8,0xD8,0xB9,0xD8,0xA7,0xD8,0xA1,0x00,
};
static signed char THURSDAY_AR[] = {
0xD8,0xA7,0xD9,0x84,0xD8,0xAE,0xD9,0x85,0xD9,0x8A,0xD8,0xB3,0x00,
};
static signed char FRIDAY_AR[] = {
0xD8,0xA7,0xD9,0x84,0xD8,0xAC,0xD9,0x85,0xD8,0xB9,0xD8,0xA9,0x00,
};
static signed char SATURDAY_AR[] = {
0xD8,0xA7,0xD9,0x84,0xD8,0xB3,0xD8,0xA8,0xD8,0xAA,0x00,
};
static signed char *(CALENDAR_WEEK_IN_AR[]) = {
SUNDAY_AR,
MONDAY_AR,
TUESDAY_AR,
WEDNESDAY_AR,
THURSDAY_AR,
FRIDAY_AR,
SATURDAY_AR,
0x00,
};

static signed char SUN_AR[] = {
0xD8,0xAD,0x00,
};
static signed char MON_AR[] = {
0xD9,0x86,0x00,
};
static signed char TUE_AR[] = {
0xD8,0xAB,0x00,
};
static signed char WED_AR[] = {
0xD8,0xB1,0x00,
};
static signed char THU_AR[] = {
0xD8,0xAE,0x00,
};
static signed char FRI_AR[] = {
0xD8,0xAC,0x00,
};
static signed char SAT_AR[] = {
0xD8,0xB3,0x00,
};
static signed char *(CALENDAR_WK_IN_AR[]) = {
SUN_AR,
MON_AR,
TUE_AR,
WED_AR,
THU_AR,
FRI_AR,
SAT_AR,
0x00,
};

static signed char JANUARY_AR[] = {
0xD9,0x8A,0xD9,0x86,0xD8,0xA7,0xD9,0x8A,0xD8,0xB1,0x00,
};
static signed char FEBRUARY_AR[] = {
0xD9,0x81,0xD8,0xA8,0xD8,0xB1,0xD8,0xA7,0xD9,0x8A,0xD8,0xB1,0x00,
};
static signed char MARCH_AR[] = {
0xD9,0x85,0xD8,0xA7,0xD8,0xB1,0xD8,0xB3,0x00,
};
static signed char APRIL_AR[] = {
0xD8,0xA3,0xD8,0xA8,0xD8,0xB1,0xD9,0x8A,0xD9,0x84,0x00,
};
static signed char MAY_AR[] = {
0xD9,0x85,0xD8,0xA7,0xD9,0x8A,0xD9,0x88,0x00,
};
static signed char JUNE_AR[] = {
0xD9,0x8A,0xD9,0x88,0xD9,0x86,0xD9,0x8A,0xD9,0x88,0x00,
};
static signed char JULY_AR[] = {
0xD9,0x8A,0xD9,0x88,0xD9,0x84,0xD9,0x8A,0xD9,0x88,0x00,
};
static signed char AUGUST_AR[] = {
0xD8,0xA3,0xD8,0xBA,0xD8,0xB3,0xD8,0xB7,0xD8,0xB3,0x00,
};
static signed char SEPTEMBER_AR[] = {
0xD8,0xB3,0xD8,0xA8,0xD8,0xAA,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char OCTOBER_AR[] = {
0xD8,0xA3,0xD9,0x83,0xD8,0xAA,0xD9,0x88,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char NOVEMBER_AR[] = {
0xD9,0x86,0xD9,0x88,0xD9,0x81,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char DECEMBER_AR[] = {
0xD8,0xAF,0xD9,0x8A,0xD8,0xB3,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char *(CALENDAR_MONTH_IN_AR[]) = {
"",
JANUARY_AR,
FEBRUARY_AR,
MARCH_AR,
APRIL_AR,
MAY_AR,
JUNE_AR,
JULY_AR,
AUGUST_AR,
SEPTEMBER_AR,
OCTOBER_AR,
NOVEMBER_AR,
DECEMBER_AR,
0x00,
};
