/* Notes

Japanese

Remarks:
Based on UTF-8
*/


static signed char FIRST_JA_JP[] = {
0xE7,0xAC,0xAC,0xE4,0xB8,0x80,0x00,
};
static signed char SECOND_JA_JP[] = {
0xE7,0xAC,0xAC,0xE4,0xBA,0x8C,0x00,
};
static signed char THIRD_JA_JP[] = {
0xE7,0xAC,0xAC,0xE4,0xB8,0x89,0x00,
};
static signed char FOURTH_JA_JP[] = {
0xE7,0xAC,0xAC,0xE5,0x9B,0x9B,0x00,
};
static signed char FIFTH_JA_JP[] = {
0xE7,0xAC,0xAC,0xE4,0xBA,0x94,0x00,
};
static signed char LAST_JA_JP[] = {
0xE6,0x9C,0x80,0xE7,0xB5,0x82,0x00,
};
static signed char *(CALENDAR_ORDER_IN_JA_JP[]) = {
"",
FIRST_JA_JP,
SECOND_JA_JP,
THIRD_JA_JP,
FOURTH_JA_JP,
FIFTH_JA_JP,
LAST_JA_JP,
0x00,
};

static signed char SUN_JA_JP[] = {
0xE6,0x97,0xA5,0x00,
};
static signed char MON_JA_JP[] = {
0xE6,0x9C,0x88,0x00,
};
static signed char TUE_JA_JP[] = {
0xE7,0x81,0xAB,0x00,
};
static signed char WED_JA_JP[] = {
0xE6,0xB0,0xB4,0x00,
};
static signed char THU_JA_JP[] = {
0xE6,0x9C,0xA8,0x00,
};
static signed char FRI_JA_JP[] = {
0xE9,0x87,0x91,0x00,
};
static signed char SAT_JA_JP[] = {
0xE5,0x9C,0x9F,0x00,
};
static signed char *(CALENDAR_WK_IN_JA_JP[]) = {
SUN_JA_JP,
MON_JA_JP,
TUE_JA_JP,
WED_JA_JP,
THU_JA_JP,
FRI_JA_JP,
SAT_JA_JP,
0x00,
};

static signed char SUNDAY_JA_JP[] = {
0xE6,0x97,0xA5,0xE6,0x9B,0x9C,0xE6,0x97,0xA5,0x00,
};
static signed char MONDAY_JA_JP[] = {
0xE6,0x9C,0x88,0xE6,0x9B,0x9C,0xE6,0x97,0xA5,0x00,
};
static signed char TUESDAY_JA_JP[] = {
0xE7,0x81,0xAB,0xE6,0x9B,0x9C,0xE6,0x97,0xA5,0x00,
};
static signed char WEDNESDAY_JA_JP[] = {
0xE6,0xB0,0xB4,0xE6,0x9B,0x9C,0xE6,0x97,0xA5,0x00,
};
static signed char THURSDAY_JA_JP[] = {
0xE6,0x9C,0xA8,0xE6,0x9B,0x9C,0xE6,0x97,0xA5,0x00,
};
static signed char FRIDAY_JA_JP[] = {
0xE9,0x87,0x91,0xE6,0x9B,0x9C,0xE6,0x97,0xA5,0x00,
};
static signed char SATURDAY_JA_JP[] = {
0xE5,0x9C,0x9F,0xE6,0x9B,0x9C,0xE6,0x97,0xA5,0x00,
};
static signed char *(CALENDAR_WEEK_IN_JA_JP[]) = {
SUNDAY_JA_JP,
MONDAY_JA_JP,
TUESDAY_JA_JP,
WEDNESDAY_JA_JP,
THURSDAY_JA_JP,
FRIDAY_JA_JP,
SATURDAY_JA_JP,
0x00,
};

static signed char DAY_JA_JP[] = {
0xE6,0x97,0xA5,0x00,
};

static signed char MONTH_JA_JP[] = {
0xE6,0x9C,0x88,0x00,
};

static signed char YEAR_JA_JP[] = {
0xE5,0xB9,0xB4,0x00,
};

static signed char JANUARY_JA_JP[] = {
0xE7,0x9D,0xA6,0xE6,0x9C,0x88,0x00,
};
static signed char FEBRUARY_JA_JP[] = {
0xE5,0xA6,0x82,0xE6,0x9C,0x88,0x00,
};
static signed char MARCH_JA_JP[] = {
0xE5,0xBC,0xA5,0xE7,0x94,0x9F,0x00,
};
static signed char APRIL_JA_JP[] = {
0xE5,0x8D,0xAF,0xE6,0x9C,0x88,0x00,
};
static signed char MAY_JA_JP[] = {
0xE7,0x9A,0x90,0xE6,0x9C,0x88,0x00,
};
static signed char JUNE_JA_JP[] = {
0xE6,0xB0,0xB4,0xE7,0x84,0xA1,0xE6,0x9C,0x88,0x00,
};
static signed char JULY_JA_JP[] = {
0xE6,0x96,0x87,0xE6,0x9C,0x88,0x00,
};
static signed char AUGUST_JA_JP[] = {
0xE8,0x91,0x89,0xE6,0x9C,0x88,0x00,
};
static signed char SEPTEMBER_JA_JP[] = {
0xE9,0x95,0xB7,0xE6,0x9C,0x88,0x00,
};
static signed char OCTOBER_JA_JP[] = {
0xE7,0xA5,0x9E,0xE7,0x84,0xA1,0xE6,0x9C,0x88,0x00,
};
static signed char NOVEMBER_JA_JP[] = {
0xE9,0x9C,0x9C,0xE6,0x9C,0x88,0x00,
};
static signed char DECEMBER_JA_JP[] = {
0xE5,0xB8,0xAB,0xE8,0xB5,0xB0,0x00,
};
static signed char *(CALENDAR_MONTH_IN_JA_JP[]) = {
"",
JANUARY_JA_JP,
FEBRUARY_JA_JP,
MARCH_JA_JP,
APRIL_JA_JP,
MAY_JA_JP,
JUNE_JA_JP,
JULY_JA_JP,
AUGUST_JA_JP,
SEPTEMBER_JA_JP,
OCTOBER_JA_JP,
NOVEMBER_JA_JP,
DECEMBER_JA_JP,
0x00,
};
