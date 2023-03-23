/* Notes

Hindi

Remarks:
Based on UTF-8
*/


static signed char SUNDAY_HI_IN[] = {
0xE0,0xA4,0xB0,0xE0,0xA4,0xB5,0xE0,0xA4,0xBF,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char MONDAY_HI_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA5,0x8B,0xE0,0xA4,0xAE,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char TUESDAY_HI_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0x82,0xE0,0xA4,0x97,0xE0,0xA4,0xB2,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char WEDNESDAY_HI_IN[] = {
0xE0,0xA4,0xAC,0xE0,0xA5,0x81,0xE0,0xA4,0xA7,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char THURSDAY_HI_IN[] = {
0xE0,0xA4,0x97,0xE0,0xA5,0x81,0xE0,0xA4,0xB0,0xE0,0xA5,0x81,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char FRIDAY_HI_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA5,0x81,0xE0,0xA4,0x95,0xE0,0xA5,0x8D,0xE0,0xA4,0xB0,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char SATURDAY_HI_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA4,0xA8,0xE0,0xA4,0xBF,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char *(CALENDAR_WEEK_IN_HI_IN[]) = {
SUNDAY_HI_IN,
MONDAY_HI_IN,
TUESDAY_HI_IN,
WEDNESDAY_HI_IN,
THURSDAY_HI_IN,
FRIDAY_HI_IN,
SATURDAY_HI_IN,
0x00,
};

static signed char SUN_HI_IN[] = {
0xE0,0xA4,0xB0,0x00,
};
static signed char MON_HI_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA5,0x8B,0x00,
};
static signed char TUE_HI_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0x82,0x00,
};
static signed char WED_HI_IN[] = {
0xE0,0xA4,0xAC,0xE0,0xA5,0x81,0x00,
};
static signed char THU_HI_IN[] = {
0xE0,0xA4,0x97,0xE0,0xA5,0x81,0x00,
};
static signed char FRI_HI_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA5,0x81,0x00,
};
static signed char SAT_HI_IN[] = {
0xE0,0xA4,0xB6,0x00,
};
static signed char *(CALENDAR_WK_IN_HI_IN[]) = {
SUN_HI_IN,
MON_HI_IN,
TUE_HI_IN,
WED_HI_IN,
THU_HI_IN,
FRI_HI_IN,
SAT_HI_IN,
0x00,
};

static signed char JANUARY_HI_IN[] = {
0xE0,0xA4,0x9C,0xE0,0xA4,0xA8,0xE0,0xA4,0xB5,0xE0,0xA4,0xB0,0xE0,0xA5,0x80,0x00,
};
static signed char FEBRUARY_HI_IN[] = {
0xE0,0xA4,0xAB,0xE0,0xA4,0xBC,0xE0,0xA4,0xB0,0xE0,0xA4,0xB5,0xE0,0xA4,0xB0,0xE0,0xA5,0x80,0x00,
};
static signed char MARCH_HI_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0xE0,0xA5,0x8D,0xE0,0xA4,0x9A,0x00,
};
static signed char APRIL_HI_IN[] = {
0xE0,0xA4,0x85,0xE0,0xA4,0xAA,0xE0,0xA5,0x8D,0xE0,0xA4,0xB0,0xE0,0xA5,0x88,0xE0,0xA4,0xB2,0x00,
};
static signed char MAY_HI_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0x88,0x00,
};
static signed char JUNE_HI_IN[] = {
0xE0,0xA4,0x9C,0xE0,0xA5,0x82,0xE0,0xA4,0xA8,0x00,
};
static signed char JULY_HI_IN[] = {
0xE0,0xA4,0x9C,0xE0,0xA5,0x81,0xE0,0xA4,0xB2,0xE0,0xA4,0xBE,0xE0,0xA4,0x88,0x00,
};
static signed char AUGUST_HI_IN[] = {
0xE0,0xA4,0x85,0xE0,0xA4,0x97,0xE0,0xA4,0xB8,0xE0,0xA5,0x8D,0xE0,0xA4,0xA4,0x00,
};
static signed char SEPTEMBER_HI_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA4,0xBF,0xE0,0xA4,0xA4,0xE0,0xA4,0x82,0xE0,0xA4,0xAC,0xE0,0xA4,0xB0,0x00,
};
static signed char OCTOBER_HI_IN[] = {
0xE0,0xA4,0x85,0xE0,0xA4,0x95,0xE0,0xA5,0x8D,0xE0,0xA4,0xA4,0xE0,0xA5,0x82,0xE0,0xA4,0xAC,0xE0,0xA4,0xB0,0x00,
};
static signed char NOVEMBER_HI_IN[] = {
0xE0,0xA4,0xA8,0xE0,0xA4,0xB5,0xE0,0xA4,0x82,0xE0,0xA4,0xAC,0xE0,0xA4,0xB0,0x00,
};
static signed char DECEMBER_HI_IN[] = {
0xE0,0xA4,0xA6,0xE0,0xA4,0xBF,0xE0,0xA4,0xB8,0xE0,0xA4,0x82,0xE0,0xA4,0xAC,0xE0,0xA4,0xB0,0x00,
};
static signed char *(CALENDAR_MONTH_IN_HI_IN[]) = {
"",
JANUARY_HI_IN,
FEBRUARY_HI_IN,
MARCH_HI_IN,
APRIL_HI_IN,
MAY_HI_IN,
JUNE_HI_IN,
JULY_HI_IN,
AUGUST_HI_IN,
SEPTEMBER_HI_IN,
OCTOBER_HI_IN,
NOVEMBER_HI_IN,
DECEMBER_HI_IN,
0x00,
};
