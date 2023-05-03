/* Notes

Hungarian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_HU_HU[] = ("Hungarian");
static signed char CALENDAR_LLSC_IN_HU_HU[] = {
'H',0xE1,0xB4,0x9C,0xC9,0xB4,0xC9,0xA2,0xE1,0xB4,0x80,0xCA,0x80,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char *(CALENDAR_WK_IN_HU_HU[]) = {
"V",
"H",
"K",
"Sze",
"Cs",
"P",
"Szo",
0x00,
};

static signed char SUNDAY_HU_HU[] = {
'v','a','s',0xC3,0xA1,'r','n','a','p',0x00,
};
static signed char MONDAY_HU_HU[] = {
'h',0xC3,0xA9,'t','f',0xC5,0x91,0x00,
};
static signed char THURSDAY_HU_HU[] = {
'c','s',0xC3,0xBC,'t',0xC3,0xB6,'r','t',0xC3,0xB6,'k',0x00,
};
static signed char FRIDAY_HU_HU[] = {
'p',0xC3,0xA9,'n','t','e','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_HU_HU[]) = {
SUNDAY_HU_HU,
MONDAY_HU_HU,
"kedd",
"szerda",
THURSDAY_HU_HU,
FRIDAY_HU_HU,
"szombat",
0x00,
};

static signed char JANUARY_HU_HU[] = {
'j','a','n','u',0xC3,0xA1,'r',0x00,
};
static signed char FEBRUARY_HU_HU[] = {
'f','e','b','r','u',0xC3,0xA1,'r',0x00,
};
static signed char MARCH_HU_HU[] = {
'm',0xC3,0xA1,'r','c','i','u','s',0x00,
};
static signed char APRIL_HU_HU[] = {
0xC3,0xA1,'p','r','i','l','i','s',0x00,
};
static signed char MAY_HU_HU[] = {
'm',0xC3,0xA1,'j','u','s',0x00,
};
static signed char JUNE_HU_HU[] = {
'j',0xC3,0xBA,'n','i','u','s',0x00,
};
static signed char JULY_HU_HU[] = {
'j',0xC3,0xBA,'l','i','u','s',0x00,
};
static signed char OCTOBER_HU_HU[] = {
'o','k','t',0xC3,0xB3,'b','e','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_HU_HU[]) = {
"",
JANUARY_HU_HU,
FEBRUARY_HU_HU,
MARCH_HU_HU,
APRIL_HU_HU,
MAY_HU_HU,
JUNE_HU_HU,
JULY_HU_HU,
"augusztus",
"szeptember",
OCTOBER_HU_HU,
"november",
"december",
0x00,
};
