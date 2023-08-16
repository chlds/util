/* Notes

Marathi

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_MR_IN[] = ("Marathi");
static signed char CALENDAR_LLSC_IN_MR_IN[] = {
'M',0xE1,0xB4,0x80,0xCA,0x80,0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xCA,0x9C,0xC9,0xAA,0x00,
};

static signed char CALENDAR_NATIVE_IN_MR_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0xB0,0xE0,0xA4,0xBE,0xE0,0xA4,0xA0,\
0xE0,0xA5,0x80,0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_MR_IN = (CALENDAR_NATIVE_IN_MR_IN);

static signed char SUNDAY_MR_IN[] = {
0xE0,0xA4,0xB0,0xE0,0xA4,0xB5,0xE0,0xA4,0xBF,0xE0,0xA4,0xB5,\
0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char MONDAY_MR_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA5,0x8B,0xE0,0xA4,0xAE,0xE0,0xA4,0xB5,\
0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char TUESDAY_MR_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0x82,0xE0,0xA4,0x97,0xE0,0xA4,0xB3,\
0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char WEDNESDAY_MR_IN[] = {
0xE0,0xA4,0xAC,0xE0,0xA5,0x81,0xE0,0xA4,0xA7,0xE0,0xA4,0xB5,\
0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char THURSDAY_MR_IN[] = {
0xE0,0xA4,0x97,0xE0,0xA5,0x81,0xE0,0xA4,0xB0,0xE0,0xA5,0x81,\
0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char FRIDAY_MR_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA5,0x81,0xE0,0xA4,0x95,0xE0,0xA5,0x8D,\
0xE0,0xA4,0xB0,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,\
0x00,
};
static signed char SATURDAY_MR_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA4,0xA8,0xE0,0xA4,0xBF,0xE0,0xA4,0xB5,\
0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0x00,
};
static signed char *(CALENDAR_WEEK_IN_MR_IN[]) = {
SUNDAY_MR_IN,
MONDAY_MR_IN,
TUESDAY_MR_IN,
WEDNESDAY_MR_IN,
THURSDAY_MR_IN,
FRIDAY_MR_IN,
SATURDAY_MR_IN,
0x00,
};

static signed char SUN_MR_IN[] = {
0xE0,0xA4,0xB0,0xE0,0xA4,0xB5,0xE0,0xA4,0xBF,0x00,
};
static signed char MON_MR_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA5,0x8B,0xE0,0xA4,0xAE,0x00,
};
static signed char TUE_MR_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0x82,0xE0,0xA4,0x97,0xE0,0xA4,0xB3,\
0x00,
};
static signed char WED_MR_IN[] = {
0xE0,0xA4,0xAC,0xE0,0xA5,0x81,0xE0,0xA4,0xA7,0x00,
};
static signed char THU_MR_IN[] = {
0xE0,0xA4,0x97,0xE0,0xA5,0x81,0xE0,0xA4,0xB0,0xE0,0xA5,0x81,\
0x00,
};
static signed char FRI_MR_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA5,0x81,0xE0,0xA4,0x95,0xE0,0xA5,0x8D,\
0xE0,0xA4,0xB0,0x00,
};
static signed char SAT_MR_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA4,0xA8,0xE0,0xA4,0xBF,0x00,
};
static signed char *(CALENDAR_WK_IN_MR_IN[]) = {
SUN_MR_IN,
MON_MR_IN,
TUE_MR_IN,
WED_MR_IN,
THU_MR_IN,
FRI_MR_IN,
SAT_MR_IN,
0x00,
};

static signed char SU_MR_IN[] = {
0xE0,0xA4,0xB0,0x00,
};
static signed char MO_MR_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA5,0x8B,0x00,
};
static signed char TU_MR_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0x82,0x00,
};
static signed char WE_MR_IN[] = {
0xE0,0xA4,0xAC,0xE0,0xA5,0x81,0x00,
};
static signed char TH_MR_IN[] = {
0xE0,0xA4,0x97,0xE0,0xA5,0x81,0x00,
};
static signed char FR_MR_IN[] = {
0xE0,0xA4,0xB6,0xE0,0xA5,0x81,0x00,
};
static signed char SA_MR_IN[] = {
0xE0,0xA4,0xB6,0x00,
};
static signed char *(CALENDAR_W_IN_MR_IN[]) = {
SU_MR_IN,
MO_MR_IN,
TU_MR_IN,
WE_MR_IN,
TH_MR_IN,
FR_MR_IN,
SA_MR_IN,
0x00,
};

static signed char JANUARY_MR_IN[] = {
0xE0,0xA4,0x9C,0xE0,0xA4,0xBE,0xE0,0xA4,0xA8,0xE0,0xA5,0x87,\
0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0xE0,0xA5,0x80,\
0x00,
};
static signed char FEBRUARY_MR_IN[] = {
0xE0,0xA4,0xAB,0xE0,0xA5,0x87,0xE0,0xA4,0xAC,0xE0,0xA5,0x8D,\
0xE0,0xA4,0xB0,0xE0,0xA5,0x81,0xE0,0xA4,0xB5,0xE0,0xA4,0xBE,\
0xE0,0xA4,0xB0,0xE0,0xA5,0x80,0x00,
};
static signed char MARCH_MR_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA4,0xBE,0xE0,0xA4,0xB0,0xE0,0xA5,0x8D,\
0xE0,0xA4,0x9A,0x00,
};
static signed char APRIL_MR_IN[] = {
0xE0,0xA4,0x8F,0xE0,0xA4,0xAA,0xE0,0xA5,0x8D,0xE0,0xA4,0xB0,\
0xE0,0xA4,0xBF,0xE0,0xA4,0xB2,0x00,
};
static signed char MAY_MR_IN[] = {
0xE0,0xA4,0xAE,0xE0,0xA5,0x87,0x00,
};
static signed char JUNE_MR_IN[] = {
0xE0,0xA4,0x9C,0xE0,0xA5,0x82,0xE0,0xA4,0xA8,0x00,
};
static signed char JULY_MR_IN[] = {
0xE0,0xA4,0x9C,0xE0,0xA5,0x81,0xE0,0xA4,0xB2,0xE0,0xA5,0x88,\
0x00,
};
static signed char AUGUST_MR_IN[] = {
0xE0,0xA4,0x91,0xE0,0xA4,0x97,0xE0,0xA4,0xB8,0xE0,0xA5,0x8D,\
0xE0,0xA4,0x9F,0x00,
};
static signed char SEPTEMBER_MR_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA4,0xAA,0xE0,0xA5,0x8D,0xE0,0xA4,0x9F,\
0xE0,0xA5,0x87,0xE0,0xA4,0x82,0xE0,0xA4,0xAC,0xE0,0xA4,0xB0,\
0x00,
};
static signed char OCTOBER_MR_IN[] = {
0xE0,0xA4,0x91,0xE0,0xA4,0x95,0xE0,0xA5,0x8D,0xE0,0xA4,0x9F,\
0xE0,0xA5,0x8B,0xE0,0xA4,0xAC,0xE0,0xA4,0xB0,0x00,
};
static signed char NOVEMBER_MR_IN[] = {
0xE0,0xA4,0xA8,0xE0,0xA5,0x8B,0xE0,0xA4,0xB5,0xE0,0xA5,0x8D,\
0xE0,0xA4,0xB9,0xE0,0xA5,0x87,0xE0,0xA4,0x82,0xE0,0xA4,0xAC,\
0xE0,0xA4,0xB0,0x00,
};
static signed char DECEMBER_MR_IN[] = {
0xE0,0xA4,0xA1,0xE0,0xA4,0xBF,0xE0,0xA4,0xB8,0xE0,0xA5,0x87,\
0xE0,0xA4,0x82,0xE0,0xA4,0xAC,0xE0,0xA4,0xB0,0x00,
};
static signed char *(CALENDAR_MONTH_IN_MR_IN[]) = {
"",
JANUARY_MR_IN,
FEBRUARY_MR_IN,
MARCH_MR_IN,
APRIL_MR_IN,
MAY_MR_IN,
JUNE_MR_IN,
JULY_MR_IN,
AUGUST_MR_IN,
SEPTEMBER_MR_IN,
OCTOBER_MR_IN,
NOVEMBER_MR_IN,
DECEMBER_MR_IN,
0x00,
};

static signed char JAN_MR_IN[] = {
0xE0,0xA4,0x9C,0xE0,0xA4,0xBE,0xE0,0xA4,0xA8,0xE0,0xA5,0x87,\
0x00,
};
static signed char FEB_MR_IN[] = {
0xE0,0xA4,0xAB,0xE0,0xA5,0x87,0xE0,0xA4,0xAC,0xE0,0xA5,0x8D,\
0xE0,0xA4,0xB0,0xE0,0xA5,0x81,0x00,
};
static signed char APR_MR_IN[] = {
0xE0,0xA4,0x8F,0xE0,0xA4,0xAA,0xE0,0xA5,0x8D,0xE0,0xA4,0xB0,\
0xE0,0xA4,0xBF,0x00,
};
static signed char AUG_MR_IN[] = {
0xE0,0xA4,0x91,0xE0,0xA4,0x97,0x00,
};
static signed char SEP_MR_IN[] = {
0xE0,0xA4,0xB8,0xE0,0xA4,0xAA,0xE0,0xA5,0x8D,0xE0,0xA4,0x9F,\
0xE0,0xA5,0x87,0xE0,0xA4,0x82,0x00,
};
static signed char OCT_MR_IN[] = {
0xE0,0xA4,0x91,0xE0,0xA4,0x95,0xE0,0xA5,0x8D,0xE0,0xA4,0x9F,\
0xE0,0xA5,0x8B,0x00,
};
static signed char NOV_MR_IN[] = {
0xE0,0xA4,0xA8,0xE0,0xA5,0x8B,0xE0,0xA4,0xB5,0xE0,0xA5,0x8D,\
0xE0,0xA4,0xB9,0xE0,0xA5,0x87,0xE0,0xA4,0x82,0x00,
};
static signed char DEC_MR_IN[] = {
0xE0,0xA4,0xA1,0xE0,0xA4,0xBF,0xE0,0xA4,0xB8,0xE0,0xA5,0x87,\
0xE0,0xA4,0x82,0x00,
};
static signed char *(CALENDAR_MON_IN_MR_IN[]) = {
"",
JAN_MR_IN,
FEB_MR_IN,
MARCH_MR_IN,
APR_MR_IN,
MAY_MR_IN,
JUNE_MR_IN,
JULY_MR_IN,
AUG_MR_IN,
SEP_MR_IN,
OCT_MR_IN,
NOV_MR_IN,
DEC_MR_IN,
0x00,
};
