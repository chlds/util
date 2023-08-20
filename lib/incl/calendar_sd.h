/* Notes

Sindhi

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_SD[] = ("Sindhi");
static signed char CALENDAR_LLSC_IN_SD[] = {
'S',0xC9,0xAA,0xC9,0xB4,0xE1,0xB4,0x85,0xCA,0x9C,0xC9,0xAA,0x00,
};

static signed char CALENDAR_NATIVE_IN_SD[] = {
0xD8,0xB3,0xD9,0x90,0xD9,0x86,0xDA,0x8C,\
0xD9,0x90,0xD9,0x8A,0xE2,0x80,0x8E,\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_SD = (CALENDAR_NATIVE_IN_SD);

static signed char SUNDAY_SD[] = {
0xD8,0xA2,0xDA,0x86,0xD8,0xB1,0x00,
};
static signed char MONDAY_SD[] = {
0xD8,0xB3,0xD9,0x88,0xD9,0x85,0xD8,0xB1,0x00,
};
static signed char TUESDAY_SD[] = {
0xD8,0xA7,0xDA,0xB1,0xD8,0xA7,0xD8,0xB1,0xD9,0x88,0x00,
};
static signed char WEDNESDAY_SD[] = {
0xD8,0xA7,0xD8,0xB1,0xD8,0xA8,0xD8,0xB9,0x00,
};
static signed char THURSDAY_SD[] = {
0xD8,0xAE,0xD9,0x85,0xD9,0x8A,0xD8,0xB3,0x00,
};
static signed char FRIDAY_SD[] = {
0xD8,0xAC,0xD9,0x85,0xD8,0xB9,0xD9,0x88,0x00,
};
static signed char SATURDAY_SD[] = {
0xDA,0x87,0xD9,0x86,0xDA,0x87,0xD8,0xB1,0x00,
};

static signed char *(CALENDAR_WEEK_IN_SD[]) = {
SUNDAY_SD,
MONDAY_SD,
TUESDAY_SD,
WEDNESDAY_SD,
THURSDAY_SD,
FRIDAY_SD,
SATURDAY_SD,
0x00,
};

static signed char *(CALENDAR_WK_IN_SD[]) = {
SUNDAY_SD,
MONDAY_SD,
TUESDAY_SD,
WEDNESDAY_SD,
THURSDAY_SD,
FRIDAY_SD,
SATURDAY_SD,
0x00,
};

static signed char JANUARY_SD[] = {
0xD8,0xAC,0xD9,0x86,0xD9,0x88,0xD8,0xB1,0xD9,0x8A,0x00,
};
static signed char FEBRUARY_SD[] = {
0xD9,0x81,0xD9,0x8A,0xD8,0xA8,0xD8,0xB1,0xD9,0x88,0xD8,0xB1,0xD9,0x8A,0x00,
};
static signed char MARCH_SD[] = {
0xD9,0x85,0xD8,0xA7,0xD8,0xB1,0xDA,0x86,0x00,
};
static signed char APRIL_SD[] = {
0xD8,0xA7,0xD9,0xBE,0xD8,0xB1,0xD9,0x8A,0xD9,0x84,0x00,
};
static signed char MAY_SD[] = {
0xD9,0x85,0xD8,0xA6,0xD9,0x8A,0x00,
};
static signed char JUNE_SD[] = {
0xD8,0xAC,0xD9,0x88,0xD9,0x86,0x00,
};
static signed char JULY_SD[] = {
0xD8,0xAC,0xD9,0x88,0xD9,0x84,0xD8,0xA7,0xD8,0xA1,0xD9,0x90,0x00,
};
static signed char AUGUST_SD[] = {
0xD8,0xA2,0xDA,0xAF,0xD8,0xB3,0xD9,0xBD,0x00,
};
static signed char SEPTEMBER_SD[] = {
0xD8,0xB3,0xD9,0x8A,0xD9,0xBE,0xD9,0xBD,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char OCTOBER_SD[] = {
0xD8,0xA2,0xDA,0xAA,0xD9,0xBD,0xD9,0x88,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char NOVEMBER_SD[] = {
0xD9,0x86,0xD9,0x88,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char DECEMBER_SD[] = {
0xDA,0x8A,0xD8,0xB3,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};

static signed char *(CALENDAR_MONTH_IN_SD[]) = {
"",
JANUARY_SD,
FEBRUARY_SD,
MARCH_SD,
APRIL_SD,
MAY_SD,
JUNE_SD,
JULY_SD,
AUGUST_SD,
SEPTEMBER_SD,
OCTOBER_SD,
NOVEMBER_SD,
DECEMBER_SD,
0x00,
};

static signed char *(CALENDAR_MON_IN_SD[]) = {
"",
JANUARY_SD,
FEBRUARY_SD,
MARCH_SD,
APRIL_SD,
MAY_SD,
JUNE_SD,
JULY_SD,
AUGUST_SD,
SEPTEMBER_SD,
OCTOBER_SD,
NOVEMBER_SD,
DECEMBER_SD,
0x00,
};
