/* Notes

Estonian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_ET_EE[] = ("Estonian");
static signed char CALENDAR_LLSC_IN_ET_EE[] = {
0xE1,0xB4,0x87,0xEA,0x9C,0xB1,0xE1,0xB4,0x9B,0xE1,0xB4,0x8F,0xC9,0xB4,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};
static signed char CALENDAR_NATIVE_IN_ET_EE[] = ("eesti keel");
static signed char *CALENDAR_LLSC_NATIVE_IN_ET_EE = (CALENDAR_NATIVE_IN_ET_EE);

static signed char *(CALENDAR_WK_IN_ET_EE[]) = {
"P",
"E",
"T",
"K",
"N",
"R",
"L",
0x00,
};

static signed char SUNDAY_ET_EE[] = {
'p',0xC3,0xBC,'h','a','p',0xC3,0xA4,'e','v',0x00,
};
static signed char MONDAY_ET_EE[] = {
'e','s','m','a','s','p',0xC3,0xA4,'e','v',0x00,
};
static signed char TUESDAY_ET_EE[] = {
't','e','i','s','i','p',0xC3,0xA4,'e','v',0x00,
};
static signed char WEDNESDAY_ET_EE[] = {
'k','o','l','m','a','p',0xC3,0xA4,'e','v',0x00,
};
static signed char THURSDAY_ET_EE[] = {
'n','e','l','j','a','p',0xC3,0xA4,'e','v',0x00,
};
static signed char SATURDAY_ET_EE[] = {
'l','a','u','p',0xC3,0xA4,'e','v',0x00,
};
static signed char *(CALENDAR_WEEK_IN_ET_EE[]) = {
SUNDAY_ET_EE,
MONDAY_ET_EE,
TUESDAY_ET_EE,
WEDNESDAY_ET_EE,
THURSDAY_ET_EE,
"reede",
SATURDAY_ET_EE,
0x00,
};

static signed char MARCH_ET_EE[] = {
'm',0xC3,0xA4,'r','t','s',0x00,
};
static signed char *(CALENDAR_MONTH_IN_ET_EE[]) = {
"",
"jaanuar",
"veebruar",
MARCH_ET_EE,
"aprill",
"mai",
"juuni",
"juuli",
"august",
"september",
"oktoober",
"november",
"detsember",
0x00,
};

static signed char *(CALENDAR_MON_IN_ET_EE[]) = {
"",
"jaan",
"veebr",
MARCH_ET_EE,
"apr",
"mai",
"juuni",
"juuli",
"aug",
"sept",
"okt",
"nov",
"dets",
0x00,
};
