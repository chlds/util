/* Notes

Malayalam

Remarks:
Based on UTF-8
*/


static signed char SUNDAY_ML_IN[] = {
0xE0,0xB4,0x9E,0xE0,0xB4,0xBE,0xE0,0xB4,0xAF,0xE0,0xB4,0xB1,\
0xE0,0xB4,0xBE,0xE0,0xB4,0xB4,0xE0,0xB5,0x8D,0xE2,0x80,0x8C,\
0xE0,0xB4,0x9A,0x00,
};
static signed char MONDAY_ML_IN[] = {
0xE0,0xB4,0xA4,0xE0,0xB4,0xBF,0xE0,0xB4,0x99,0xE0,0xB5,0x8D,\
0xE0,0xB4,0x95,0xE0,0xB4,0xB3,0xE0,0xB4,0xBE,0xE0,0xB4,0xB4,\
0xE0,0xB5,0x8D,0xE2,0x80,0x8C,0xE0,0xB4,0x9A,0x00,
};
static signed char TUESDAY_ML_IN[] = {
0xE0,0xB4,0x9A,0xE0,0xB5,0x8A,0xE0,0xB4,0xB5,0xE0,0xB5,0x8D,\
0xE0,0xB4,0xB5,0xE0,0xB4,0xBE,0xE0,0xB4,0xB4,0xE0,0xB5,0x8D,\
0xE2,0x80,0x8C,0xE0,0xB4,0x9A,0x00,
};
static signed char WEDNESDAY_ML_IN[] = {
0xE0,0xB4,0xAC,0xE0,0xB5,0x81,0xE0,0xB4,0xA7,0xE0,0xB4,0xA8,\
0xE0,0xB4,0xBE,0xE0,0xB4,0xB4,0xE0,0xB5,0x8D,0xE2,0x80,0x8C,\
0xE0,0xB4,0x9A,0x00,
};
static signed char THURSDAY_ML_IN[] = {
0xE0,0xB4,0xB5,0xE0,0xB5,0x8D,0xE0,0xB4,0xAF,0xE0,0xB4,0xBE,\
0xE0,0xB4,0xB4,0xE0,0xB4,0xBE,0xE0,0xB4,0xB4,0xE0,0xB5,0x8D,\
0xE2,0x80,0x8C,0xE0,0xB4,0x9A,0x00,
};
static signed char FRIDAY_ML_IN[] = {
0xE0,0xB4,0xB5,0xE0,0xB5,0x86,0xE0,0xB4,0xB3,0xE0,0xB5,0x8D,\
0xE0,0xB4,0xB3,0xE0,0xB4,0xBF,0xE0,0xB4,0xAF,0xE0,0xB4,0xBE,\
0xE0,0xB4,0xB4,0xE0,0xB5,0x8D,0xE2,0x80,0x8C,0xE0,0xB4,0x9A,\
0x00,
};
static signed char SATURDAY_ML_IN[] = {
0xE0,0xB4,0xB6,0xE0,0xB4,0xA8,0xE0,0xB4,0xBF,0xE0,0xB4,0xAF,\
0xE0,0xB4,0xBE,0xE0,0xB4,0xB4,0xE0,0xB5,0x8D,0xE2,0x80,0x8C,\
0xE0,0xB4,0x9A,0x00,
};
static signed char *(CALENDAR_WEEK_IN_ML_IN[]) = {
SUNDAY_ML_IN,
MONDAY_ML_IN,
TUESDAY_ML_IN,
WEDNESDAY_ML_IN,
THURSDAY_ML_IN,
FRIDAY_ML_IN,
SATURDAY_ML_IN,
0x00,
};

static signed char SUN_ML_IN[] = {
0xE0,0xB4,0x9E,0xE0,0xB4,0xBE,0xE0,0xB4,0xAF,0xE0,0xB5,0xBC,\
0x00,
};
static signed char MON_ML_IN[] = {
0xE0,0xB4,0xA4,0xE0,0xB4,0xBF,0xE0,0xB4,0x99,0xE0,0xB5,0x8D,\
0xE0,0xB4,0x95,0xE0,0xB5,0xBE,0x00,
};
static signed char TUE_ML_IN[] = {
0xE0,0xB4,0x9A,0xE0,0xB5,0x8A,0xE0,0xB4,0xB5,0xE0,0xB5,0x8D,\
0xE0,0xB4,0xB5,0x00,
};
static signed char WED_ML_IN[] = {
0xE0,0xB4,0xAC,0xE0,0xB5,0x81,0xE0,0xB4,0xA7,0xE0,0xB5,0xBB,\
0x00,
};
static signed char THU_ML_IN[] = {
0xE0,0xB4,0xB5,0xE0,0xB5,0x8D,0xE0,0xB4,0xAF,0xE0,0xB4,0xBE,\
0xE0,0xB4,0xB4,0xE0,0xB4,0x82,0x00,
};
static signed char FRI_ML_IN[] = {
0xE0,0xB4,0xB5,0xE0,0xB5,0x86,0xE0,0xB4,0xB3,0xE0,0xB5,0x8D,\
0xE0,0xB4,0xB3,0xE0,0xB4,0xBF,0x00,
};
static signed char SAT_ML_IN[] = {
0xE0,0xB4,0xB6,0xE0,0xB4,0xA8,0xE0,0xB4,0xBF,0x00,
};
static signed char *(CALENDAR_WK_IN_ML_IN[]) = {
SUN_ML_IN,
MON_ML_IN,
TUE_ML_IN,
WED_ML_IN,
THU_ML_IN,
FRI_ML_IN,
SAT_ML_IN,
0x00,
};

static signed char JANUARY_ML_IN[] = {
0xE0,0xB4,0x9C,0xE0,0xB4,0xA8,0xE0,0xB5,0x81,0xE0,0xB4,0xB5,\
0xE0,0xB4,0xB0,0xE0,0xB4,0xBF,0x00,
};
static signed char FEBRUARY_ML_IN[] = {
0xE0,0xB4,0xAB,0xE0,0xB5,0x86,0xE0,0xB4,0xAC,0xE0,0xB5,0x8D,\
0xE0,0xB4,0xB0,0xE0,0xB5,0x81,0xE0,0xB4,0xB5,0xE0,0xB4,0xB0,\
0xE0,0xB4,0xBF,0x00,
};
static signed char MARCH_ML_IN[] = {
0xE0,0xB4,0xAE,0xE0,0xB4,0xBE,0xE0,0xB5,0xBC,0xE0,0xB4,0x9A,\
0xE0,0xB5,0x8D,0xE0,0xB4,0x9A,0xE0,0xB5,0x8D,0x00,
};
static signed char APRIL_ML_IN[] = {
0xE0,0xB4,0x8F,0xE0,0xB4,0xAA,0xE0,0xB5,0x8D,0xE0,0xB4,0xB0,\
0xE0,0xB4,0xBF,0xE0,0xB5,0xBD,0x00,
};
static signed char MAY_ML_IN[] = {
0xE0,0xB4,0xAE,0xE0,0xB5,0x87,0xE0,0xB4,0xAF,0xE0,0xB5,0x8D,\
0x00,
};
static signed char JUNE_ML_IN[] = {
0xE0,0xB4,0x9C,0xE0,0xB5,0x82,0xE0,0xB5,0xBA,0x00,
};
static signed char JULY_ML_IN[] = {
0xE0,0xB4,0x9C,0xE0,0xB5,0x82,0xE0,0xB4,0xB2,0xE0,0xB5,0x88,\
0x00,
};
static signed char AUGUST_ML_IN[] = {
0xE0,0xB4,0x93,0xE0,0xB4,0x97,0xE0,0xB4,0xB8,0xE0,0xB5,0x8D,\
0xE0,0xB4,0xB1,0xE0,0xB5,0x8D,0xE0,0xB4,0xB1,0xE0,0xB5,0x8D,\
0x00,
};
static signed char SEPTEMBER_ML_IN[] = {
0xE0,0xB4,0xB8,0xE0,0xB5,0x86,0xE0,0xB4,0xAA,0xE0,0xB5,0x8D,\
0xE0,0xB4,0xB1,0xE0,0xB5,0x8D,0xE0,0xB4,0xB1,0xE0,0xB4,0x82,\
0xE0,0xB4,0xAC,0xE0,0xB5,0xBC,0x00,
};
static signed char OCTOBER_ML_IN[] = {
0xE0,0xB4,0x92,0xE0,0xB4,0x95,0xE0,0xB5,0x8D,0xE2,0x80,0x8C,\
0xE0,0xB4,0x9F,0xE0,0xB5,0x8B,0xE0,0xB4,0xAC,0xE0,0xB5,0xBC,\
0x00,
};
static signed char NOVEMBER_ML_IN[] = {
0xE0,0xB4,0xA8,0xE0,0xB4,0xB5,0xE0,0xB4,0x82,0xE0,0xB4,0xAC,\
0xE0,0xB5,0xBC,0x00,
};
static signed char DECEMBER_ML_IN[] = {
0xE0,0xB4,0xA1,0xE0,0xB4,0xBF,0xE0,0xB4,0xB8,0xE0,0xB4,0x82,\
0xE0,0xB4,0xAC,0xE0,0xB5,0xBC,0x00,
};
static signed char *(CALENDAR_MONTH_IN_ML_IN[]) = {
"",
JANUARY_ML_IN,
FEBRUARY_ML_IN,
MARCH_ML_IN,
APRIL_ML_IN,
MAY_ML_IN,
JUNE_ML_IN,
JULY_ML_IN,
AUGUST_ML_IN,
SEPTEMBER_ML_IN,
OCTOBER_ML_IN,
NOVEMBER_ML_IN,
DECEMBER_ML_IN,
0x00,
};