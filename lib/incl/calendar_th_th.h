/* Notes

Thai

Remarks:
Based on UTF-8
*/


static signed char SUNDAY_TH_TH[] = {
0xE0,0xB8,0xA7,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0xAD,\
0xE0,0xB8,0xB2,0xE0,0xB8,0x97,0xE0,0xB8,0xB4,0xE0,0xB8,0x95,\
0xE0,0xB8,0xA2,0xE0,0xB9,0x8C,0x00,
};
static signed char MONDAY_TH_TH[] = {
0xE0,0xB8,0xA7,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0x88,\
0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0x97,0xE0,0xB8,0xA3,\
0xE0,0xB9,0x8C,0x00,
};
static signed char TUESDAY_TH_TH[] = {
0xE0,0xB8,0xA7,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0xAD,\
0xE0,0xB8,0xB1,0xE0,0xB8,0x87,0xE0,0xB8,0x84,0xE0,0xB8,0xB2,\
0xE0,0xB8,0xA3,0x00,
};
static signed char WEDNESDAY_TH_TH[] = {
0xE0,0xB8,0xA7,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0x9E,\
0xE0,0xB8,0xB8,0xE0,0xB8,0x98,0x00,
};
static signed char THURSDAY_TH_TH[] = {
0xE0,0xB8,0xA7,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0x9E,\
0xE0,0xB8,0xA4,0xE0,0xB8,0xAB,0xE0,0xB8,0xB1,0xE0,0xB8,0xAA,\
0xE0,0xB8,0x9A,0xE0,0xB8,0x94,0xE0,0xB8,0xB5,0x00,
};
static signed char FRIDAY_TH_TH[] = {
0xE0,0xB8,0xA7,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0xA8,\
0xE0,0xB8,0xB8,0xE0,0xB8,0x81,0xE0,0xB8,0xA3,0xE0,0xB9,0x8C,\
0x00,
};
static signed char SATURDAY_TH_TH[] = {
0xE0,0xB8,0xA7,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB9,0x80,\
0xE0,0xB8,0xAA,0xE0,0xB8,0xB2,0xE0,0xB8,0xA3,0xE0,0xB9,0x8C,\
0x00,
};
static signed char *(CALENDAR_WEEK_IN_TH_TH[]) = {
SUNDAY_TH_TH,
MONDAY_TH_TH,
TUESDAY_TH_TH,
WEDNESDAY_TH_TH,
THURSDAY_TH_TH,
FRIDAY_TH_TH,
SATURDAY_TH_TH,
0x00,
};

static signed char SUN_TH_TH[] = {
0xE0,0xB8,0xAD,0xE0,0xB8,0xB2,0x00,
};
static signed char MON_TH_TH[] = {
0xE0,0xB8,0x88,0x00,
};
static signed char TUE_TH_TH[] = {
0xE0,0xB8,0xAD,0x00,
};
static signed char WED_TH_TH[] = {
0xE0,0xB8,0x9E,0x00,
};
static signed char THU_TH_TH[] = {
0xE0,0xB8,0x9E,0xE0,0xB8,0xA4,0x00,
};
static signed char FRI_TH_TH[] = {
0xE0,0xB8,0xA8,0x00,
};
static signed char SAT_TH_TH[] = {
0xE0,0xB8,0xAA,0x00,
};
static signed char *(CALENDAR_WK_IN_TH_TH[]) = {
SUN_TH_TH,
MON_TH_TH,
TUE_TH_TH,
WED_TH_TH,
THU_TH_TH,
FRI_TH_TH,
SAT_TH_TH,
0x00,
};

static signed char JANUARY_TH_TH[] = {
0xE0,0xB8,0xA1,0xE0,0xB8,0x81,0xE0,0xB8,0xA3,0xE0,0xB8,0xB2,\
0xE0,0xB8,0x84,0xE0,0xB8,0xA1,0x00,
};
static signed char FEBRUARY_TH_TH[] = {
0xE0,0xB8,0x81,0xE0,0xB8,0xB8,0xE0,0xB8,0xA1,0xE0,0xB8,0xA0,\
0xE0,0xB8,0xB2,0xE0,0xB8,0x9E,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,\
0xE0,0xB8,0x98,0xE0,0xB9,0x8C,0x00,
};
static signed char MARCH_TH_TH[] = {
0xE0,0xB8,0xA1,0xE0,0xB8,0xB5,0xE0,0xB8,0x99,0xE0,0xB8,0xB2,\
0xE0,0xB8,0x84,0xE0,0xB8,0xA1,0x00,
};
static signed char APRIL_TH_TH[] = {
0xE0,0xB9,0x80,0xE0,0xB8,0xA1,0xE0,0xB8,0xA9,0xE0,0xB8,0xB2,\
0xE0,0xB8,0xA2,0xE0,0xB8,0x99,0x00,
};
static signed char MAY_TH_TH[] = {
0xE0,0xB8,0x9E,0xE0,0xB8,0xA4,0xE0,0xB8,0xA9,0xE0,0xB8,0xA0,\
0xE0,0xB8,0xB2,0xE0,0xB8,0x84,0xE0,0xB8,0xA1,0x00,
};
static signed char JUNE_TH_TH[] = {
0xE0,0xB8,0xA1,0xE0,0xB8,0xB4,0xE0,0xB8,0x96,0xE0,0xB8,0xB8,\
0xE0,0xB8,0x99,0xE0,0xB8,0xB2,0xE0,0xB8,0xA2,0xE0,0xB8,0x99,\
0x00,
};
static signed char JULY_TH_TH[] = {
0xE0,0xB8,0x81,0xE0,0xB8,0xA3,0xE0,0xB8,0x81,0xE0,0xB8,0x8E,\
0xE0,0xB8,0xB2,0xE0,0xB8,0x84,0xE0,0xB8,0xA1,0x00,
};
static signed char AUGUST_TH_TH[] = {
0xE0,0xB8,0xAA,0xE0,0xB8,0xB4,0xE0,0xB8,0x87,0xE0,0xB8,0xAB,\
0xE0,0xB8,0xB2,0xE0,0xB8,0x84,0xE0,0xB8,0xA1,0x00,
};
static signed char SEPTEMBER_TH_TH[] = {
0xE0,0xB8,0x81,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0xA2,\
0xE0,0xB8,0xB2,0xE0,0xB8,0xA2,0xE0,0xB8,0x99,0x00,
};
static signed char OCTOBER_TH_TH[] = {
0xE0,0xB8,0x95,0xE0,0xB8,0xB8,0xE0,0xB8,0xA5,0xE0,0xB8,0xB2,\
0xE0,0xB8,0x84,0xE0,0xB8,0xA1,0x00,
};
static signed char NOVEMBER_TH_TH[] = {
0xE0,0xB8,0x9E,0xE0,0xB8,0xA4,0xE0,0xB8,0xA8,0xE0,0xB8,0x88,\
0xE0,0xB8,0xB4,0xE0,0xB8,0x81,0xE0,0xB8,0xB2,0xE0,0xB8,0xA2,\
0xE0,0xB8,0x99,0x00,
};
static signed char DECEMBER_TH_TH[] = {
0xE0,0xB8,0x98,0xE0,0xB8,0xB1,0xE0,0xB8,0x99,0xE0,0xB8,0xA7,\
0xE0,0xB8,0xB2,0xE0,0xB8,0x84,0xE0,0xB8,0xA1,0x00,
};
static signed char *(CALENDAR_MONTH_IN_TH_TH[]) = {
"",
JANUARY_TH_TH,
FEBRUARY_TH_TH,
MARCH_TH_TH,
APRIL_TH_TH,
MAY_TH_TH,
JUNE_TH_TH,
JULY_TH_TH,
AUGUST_TH_TH,
SEPTEMBER_TH_TH,
OCTOBER_TH_TH,
NOVEMBER_TH_TH,
DECEMBER_TH_TH,
0x00,
};