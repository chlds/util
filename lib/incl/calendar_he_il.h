/* Notes

Hebrew

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_HE_IL[] = ("Hebrew");
static signed char CALENDAR_LLSC_IN_HE_IL[] = {
0xCA,0x9C,0xE1,0xB4,0x87,0xCA,0x99,0xCA,0x80,0xE1,0xB4,0x87,0xE1,0xB4,0xA1,0x00,
};
static signed char CALENDAR_NATIVE_IN_HE_IL[] = {
0xD7,0xA2,0xD6,0xB4,0xD7,0x91,0xD6,0xB0,\
0xD7,0xA8,0xD6,0xB4,0xD7,0x99,0xD7,0xAA,\
0xE2,0x80,0x8E,\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_HE_IL = (CALENDAR_NATIVE_IN_HE_IL);

static signed char SUNDAY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0xA8,0xD7,0x90,0xD7,0xA9,0xD7,0x95,0xD7,0x9F,0x00,
};
static signed char MONDAY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0xA9,0xD7,0xA0,0xD7,0x99,0x00,
};
static signed char TUESDAY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0xA9,0xD7,0x9C,0xD7,0x99,0xD7,0xA9,0xD7,0x99,0x00,
};
static signed char WEDNESDAY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0xA8,0xD7,0x91,0xD7,0x99,0xD7,0xA2,0xD7,0x99,0x00,
};
static signed char THURSDAY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0x97,0xD7,0x9E,0xD7,0x99,0xD7,0xA9,0xD7,0x99,0x00,
};
static signed char FRIDAY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0xA9,0xD7,0x99,0xD7,0xA9,0xD7,0x99,0x00,
};
static signed char SATURDAY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0xA9,0xD7,0x91,0xD7,0xAA,0x00,
};
static signed char *(CALENDAR_WEEK_IN_HE_IL[]) = {
SUNDAY_HE_IL,
MONDAY_HE_IL,
TUESDAY_HE_IL,
WEDNESDAY_HE_IL,
THURSDAY_HE_IL,
FRIDAY_HE_IL,
SATURDAY_HE_IL,
0x00,
};

static signed char SUN_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0x90,0xD7,0xB3,0x00,
};
static signed char MON_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0x91,0xD7,0xB3,0x00,
};
static signed char TUE_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0x92,0xD7,0xB3,0x00,
};
static signed char WED_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0x93,0xD7,0xB3,0x00,
};
static signed char THU_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0x94,0xD7,0xB3,0x00,
};
static signed char FRI_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9D,' ',0xD7,0x95,0xD7,0xB3,0x00,
};
static signed char SAT_HE_IL[] = {
0xD7,0xA9,0xD7,0x91,0xD7,0xAA,0x00,
};
static signed char *(CALENDAR_WK_IN_HE_IL[]) = {
SUN_HE_IL,
MON_HE_IL,
TUE_HE_IL,
WED_HE_IL,
THU_HE_IL,
FRI_HE_IL,
SAT_HE_IL,
0x00,
};

static signed char SU_HE_IL[] = {
0xD7,0x90,0xD7,0xB3,0x00,
};
static signed char MO_HE_IL[] = {
0xD7,0x91,0xD7,0xB3,0x00,
};
static signed char TU_HE_IL[] = {
0xD7,0x92,0xD7,0xB3,0x00,
};
static signed char WE_HE_IL[] = {
0xD7,0x93,0xD7,0xB3,0x00,
};
static signed char TH_HE_IL[] = {
0xD7,0x94,0xD7,0xB3,0x00,
};
static signed char FR_HE_IL[] = {
0xD7,0x95,0xD7,0xB3,0x00,
};
static signed char SA_HE_IL[] = {
0xD7,0xA9,0xD7,0xB3,0x00,
};
static signed char *(CALENDAR_W_IN_HE_IL[]) = {
SU_HE_IL,
MO_HE_IL,
TU_HE_IL,
WE_HE_IL,
TH_HE_IL,
FR_HE_IL,
SA_HE_IL,
0x00,
};

static signed char JANUARY_HE_IL[] = {
0xD7,0x99,0xD7,0xA0,0xD7,0x95,0xD7,0x90,0xD7,0xA8,0x00,
};
static signed char FEBRUARY_HE_IL[] = {
0xD7,0xA4,0xD7,0x91,0xD7,0xA8,0xD7,0x95,0xD7,0x90,0xD7,0xA8,0x00,
};
static signed char MARCH_HE_IL[] = {
0xD7,0x9E,0xD7,0xA8,0xD7,0xA5,0x00,
};
static signed char APRIL_HE_IL[] = {
0xD7,0x90,0xD7,0xA4,0xD7,0xA8,0xD7,0x99,0xD7,0x9C,0x00,
};
static signed char MAY_HE_IL[] = {
0xD7,0x9E,0xD7,0x90,0xD7,0x99,0x00,
};
static signed char JUNE_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0xA0,0xD7,0x99,0x00,
};
static signed char JULY_HE_IL[] = {
0xD7,0x99,0xD7,0x95,0xD7,0x9C,0xD7,0x99,0x00,
};
static signed char AUGUST_HE_IL[] = {
0xD7,0x90,0xD7,0x95,0xD7,0x92,0xD7,0x95,0xD7,0xA1,0xD7,0x98,0x00,
};
static signed char SEPTEMBER_HE_IL[] = {
0xD7,0xA1,0xD7,0xA4,0xD7,0x98,0xD7,0x9E,0xD7,0x91,0xD7,0xA8,0x00,
};
static signed char OCTOBER_HE_IL[] = {
0xD7,0x90,0xD7,0x95,0xD7,0xA7,0xD7,0x98,0xD7,0x95,0xD7,0x91,0xD7,0xA8,0x00,
};
static signed char NOVEMBER_HE_IL[] = {
0xD7,0xA0,0xD7,0x95,0xD7,0x91,0xD7,0x9E,0xD7,0x91,0xD7,0xA8,0x00,
};
static signed char DECEMBER_HE_IL[] = {
0xD7,0x93,0xD7,0xA6,0xD7,0x9E,0xD7,0x91,0xD7,0xA8,0x00,
};
static signed char *(CALENDAR_MONTH_IN_HE_IL[]) = {
"",
JANUARY_HE_IL,
FEBRUARY_HE_IL,
MARCH_HE_IL,
APRIL_HE_IL,
MAY_HE_IL,
JUNE_HE_IL,
JULY_HE_IL,
AUGUST_HE_IL,
SEPTEMBER_HE_IL,
OCTOBER_HE_IL,
NOVEMBER_HE_IL,
DECEMBER_HE_IL,
0x00,
};

static signed char JAN_HE_IL[] = {
0xD7,0x99,0xD7,0xA0,0xD7,0x95,0xD7,0xB3,0x00,
};
static signed char FEB_HE_IL[] = {
0xD7,0xA4,0xD7,0x91,0xD7,0xA8,0xD7,0xB3,0x00,
};
static signed char APR_HE_IL[] = {
0xD7,0x90,0xD7,0xA4,0xD7,0xA8,0xD7,0xB3,0x00,
};
static signed char AUG_HE_IL[] = {
0xD7,0x90,0xD7,0x95,0xD7,0x92,0xD7,0xB3,0x00,
};
static signed char SEP_HE_IL[] = {
0xD7,0xA1,0xD7,0xA4,0xD7,0x98,0xD7,0xB3,0x00,
};
static signed char OCT_HE_IL[] = {
0xD7,0x90,0xD7,0x95,0xD7,0xA7,0xD7,0xB3,0x00,
};
static signed char NOV_HE_IL[] = {
0xD7,0xA0,0xD7,0x95,0xD7,0x91,0xD7,0xB3,0x00,
};
static signed char DEC_HE_IL[] = {
0xD7,0x93,0xD7,0xA6,0xD7,0x9E,0xD7,0xB3,0x00,
};
static signed char *(CALENDAR_MON_IN_HE_IL[]) = {
"",
JAN_HE_IL,
FEB_HE_IL,
MARCH_HE_IL,
APR_HE_IL,
MAY_HE_IL,
JUNE_HE_IL,
JULY_HE_IL,
AUG_HE_IL,
SEP_HE_IL,
OCT_HE_IL,
NOV_HE_IL,
DEC_HE_IL,
0x00,
};
