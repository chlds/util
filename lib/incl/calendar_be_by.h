/* Notes

Belarusian

Remarks:
Based on UTF-8
*/


static signed char SUNDAY_BE_BY[] = {
0xD0,0xBD,0xD1,0x8F,0xD0,0xB4,0xD0,0xB7,0xD0,0xB5,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char MONDAY_BE_BY[] = {
0xD0,0xBF,0xD0,0xB0,0xD0,0xBD,0xD1,0x8F,0xD0,0xB4,0xD0,0xB7,0xD0,0xB5,0xD0,0xBB,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char TUESDAY_BE_BY[] = {
0xD0,0xB0,0xD1,0x9E,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char WEDNESDAY_BE_BY[] = {
0xD1,0x81,0xD0,0xB5,0xD1,0x80,0xD0,0xB0,0xD0,0xB4,0xD0,0xB0,0x00,
};
static signed char THURSDAY_BE_BY[] = {
0xD1,0x87,0xD0,0xB0,0xD1,0x86,0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0x00,
};
static signed char FRIDAY_BE_BY[] = {
0xD0,0xBF,0xD1,0x8F,0xD1,0x82,0xD0,0xBD,0xD1,0x96,0xD1,0x86,0xD0,0xB0,0x00,
};
static signed char SATURDAY_BE_BY[] = {
0xD1,0x81,0xD1,0x83,0xD0,0xB1,0xD0,0xBE,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char *(CALENDAR_WEEK_IN_BE_BY[]) = {
SUNDAY_BE_BY,
MONDAY_BE_BY,
TUESDAY_BE_BY,
WEDNESDAY_BE_BY,
THURSDAY_BE_BY,
FRIDAY_BE_BY,
SATURDAY_BE_BY,
0x00,
};

static signed char SUN_BE_BY[] = {
0xD0,0xBD,0xD0,0xB4,0x00,
};
static signed char MON_BE_BY[] = {
0xD0,0xBF,0xD0,0xBD,0x00,
};
static signed char TUE_BE_BY[] = {
0xD0,0xB0,0xD1,0x9E,0x00,
};
static signed char WED_BE_BY[] = {
0xD1,0x81,0xD1,0x80,0x00,
};
static signed char THU_BE_BY[] = {
0xD1,0x87,0xD1,0x86,0x00,
};
static signed char FRI_BE_BY[] = {
0xD0,0xBF,0xD1,0x82,0x00,
};
static signed char SAT_BE_BY[] = {
0xD1,0x81,0xD0,0xB1,0x00,
};
static signed char *(CALENDAR_WK_IN_BE_BY[]) = {
SUN_BE_BY,
MON_BE_BY,
TUE_BE_BY,
WED_BE_BY,
THU_BE_BY,
FRI_BE_BY,
SAT_BE_BY,
0x00,
};

static signed char JANUARY_BE_BY[] = {
0xD1,0x81,0xD1,0x82,0xD1,0x83,0xD0,0xB4,0xD0,0xB7,0xD0,0xB5,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char FEBRUARY_BE_BY[] = {
0xD0,0xBB,0xD1,0x8E,0xD1,0x82,0xD0,0xB0,0xD0,0xB3,0xD0,0xB0,0x00,
};
static signed char MARCH_BE_BY[] = {
0xD1,0x81,0xD0,0xB0,0xD0,0xBA,0xD0,0xB0,0xD0,0xB2,0xD1,0x96,0xD0,0xBA,0xD0,0xB0,0x00,
};
static signed char APRIL_BE_BY[] = {
0xD0,0xBA,0xD1,0x80,0xD0,0xB0,0xD1,0x81,0xD0,0xB0,0xD0,0xB2,0xD1,0x96,0xD0,0xBA,0xD0,0xB0,0x00,
};
static signed char MAY_BE_BY[] = {
0xD0,0xBC,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char JUNE_BE_BY[] = {
0xD1,0x87,0xD1,0x8D,0xD1,0x80,0xD0,0xB2,0xD0,0xB5,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char JULY_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD0,0xBF,0xD0,0xB5,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char AUGUST_BE_BY[] = {
0xD0,0xB6,0xD0,0xBD,0xD1,0x96,0xD1,0x9E,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char SEPTEMBER_BE_BY[] = {
0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD0,0xB0,0xD1,0x81,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char OCTOBER_BE_BY[] = {
0xD0,0xBA,0xD0,0xB0,0xD1,0x81,0xD1,0x82,0xD1,0x80,0xD1,0x8B,0xD1,0x87,0xD0,0xBD,0xD1,0x96,0xD0,0xBA,0xD0,0xB0,0x00,
};
static signed char NOVEMBER_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD1,0x81,0xD1,0x82,0xD0,0xB0,0xD0,0xBF,0xD0,0xB0,0xD0,0xB4,0xD0,0xB0,0x00,
};
static signed char DECEMBER_BE_BY[] = {
0xD1,0x81,0xD0,0xBD,0xD0,0xB5,0xD0,0xB6,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char *(CALENDAR_MONTH_IN_BE_BY[]) = {
"",
JANUARY_BE_BY,
FEBRUARY_BE_BY,
MARCH_BE_BY,
APRIL_BE_BY,
MAY_BE_BY,
JUNE_BE_BY,
JULY_BE_BY,
AUGUST_BE_BY,
SEPTEMBER_BE_BY,
OCTOBER_BE_BY,
NOVEMBER_BE_BY,
DECEMBER_BE_BY,
0x00,
};