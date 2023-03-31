/* Notes

Urdu

Remarks:
Based on UTF-8
*/


static signed char SUNDAY_UR[] = {
0xD8,0xA7,0xD8,0xAA,0xD9,0x88,0xD8,0xA7,0xD8,0xB1,0x00,
};
static signed char MONDAY_UR[] = {
0xD9,0xBE,0xDB,0x8C,0xD8,0xB1,0x00,
};
static signed char TUESDAY_UR[] = {
0xD9,0x85,0xD9,0x86,0xDA,0xAF,0xD9,0x84,0x00,
};
static signed char WEDNESDAY_UR[] = {
0xD8,0xA8,0xD8,0xAF,0xDA,0xBE,0x00,
};
static signed char THURSDAY_UR[] = {
0xD8,0xAC,0xD9,0x85,0xD8,0xB9,0xD8,0xB1,0xD8,0xA7,0xD8,0xAA,0x00,
};
static signed char FRIDAY_UR[] = {
0xD8,0xAC,0xD9,0x85,0xD8,0xB9,0xDB,0x81,0x00,
};
static signed char SATURDAY_UR[] = {
0xDB,0x81,0xD9,0x81,0xD8,0xAA,0xDB,0x81,0x00,
};
static signed char *(CALENDAR_WEEK_IN_UR[]) = {
SUNDAY_UR,
MONDAY_UR,
TUESDAY_UR,
WEDNESDAY_UR,
THURSDAY_UR,
FRIDAY_UR,
SATURDAY_UR,
0x00,
};

static signed char *(CALENDAR_WK_IN_UR[]) = {
"S",
"M",
"T",
"W",
"T",
"F",
"S",
0x00,
};

static signed char JANUARY_UR[] = {
0xD8,0xAC,0xD9,0x86,0xD9,0x88,0xD8,0xB1,0xDB,0x8C,0x00,
};
static signed char FEBRUARY_UR[] = {
0xD9,0x81,0xD8,0xB1,0xD9,0x88,0xD8,0xB1,0xDB,0x8C,0x00,
};
static signed char MARCH_UR[] = {
0xD9,0x85,0xD8,0xA7,0xD8,0xB1,0xDA,0x86,0x00,
};
static signed char APRIL_UR[] = {
0xD8,0xA7,0xD9,0xBE,0xD8,0xB1,0xDB,0x8C,0xD9,0x84,0x00,
};
static signed char MAY_UR[] = {
0xD9,0x85,0xD8,0xA6,0xDB,0x8C,0x00,
};
static signed char JUNE_UR[] = {
0xD8,0xAC,0xD9,0x88,0xD9,0x86,0x00,
};
static signed char JULY_UR[] = {
0xD8,0xAC,0xD9,0x88,0xD9,0x84,0xD8,0xA7,0xD8,0xA6,0xDB,0x8C,0x00,
};
static signed char AUGUST_UR[] = {
0xD8,0xA7,0xDA,0xAF,0xD8,0xB3,0xD8,0xAA,0x00,
};
static signed char SEPTEMBER_UR[] = {
0xD8,0xB3,0xD8,0xAA,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char OCTOBER_UR[] = {
0xD8,0xA7,0xDA,0xA9,0xD8,0xAA,0xD9,0x88,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char NOVEMBER_UR[] = {
0xD9,0x86,0xD9,0x88,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char DECEMBER_UR[] = {
0xD8,0xAF,0xD8,0xB3,0xD9,0x85,0xD8,0xA8,0xD8,0xB1,0x00,
};
static signed char *(CALENDAR_MONTH_IN_UR[]) = {
"",
JANUARY_UR,
FEBRUARY_UR,
MARCH_UR,
APRIL_UR,
MAY_UR,
JUNE_UR,
JULY_UR,
AUGUST_UR,
SEPTEMBER_UR,
OCTOBER_UR,
NOVEMBER_UR,
DECEMBER_UR,
0x00,
};
