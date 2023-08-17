/* Notes

Tongan
C4.80/C4.81 : Latin Capital/Small Letter A with Macron
C4.92/C4.93 : Latin Capital/Small Letter E with Macron
C4.AA/C4.AB : Latin Capital/Small Letter I with Macron
C5.8C/C5.8D : Latin Capital/Small Letter O with Macron
C5.AA/C5.AB : Latin Capital/Small Letter U with Macron
C7.A2/C7.A3 : Latin Capital/Small Letter Ae with Macron
CA.BB : Modifier Letter Turned Comma

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_TO_TO[] = ("Tongan");
static signed char CALENDAR_LLSC_IN_TO_TO[] = {
'T',0xE1,0xB4,0x8F,0xC9,0xB4,0xC9,0xA2,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char CALENDAR_NATIVE_IN_TO_TO[] = ("lea fakatonga");
static signed char *CALENDAR_LLSC_NATIVE_IN_TO_TO = (CALENDAR_NATIVE_IN_TO_TO);

static signed char SUNDAY_TO_TO[] = {
'S',0xC4,0x81,'p','a','t','e',0x00,
};
static signed char MONDAY_TO_TO[] = {
'M',0xC5,0x8D,'n','i','t','e',0x00,
};
static signed char TUESDAY_TO_TO[] = {
'T',0xC5,0xAB,'s','i','t','e',0x00,
};
static signed char THURSDAY_TO_TO[] = {
'T','u',0xCA,0xBB,'a','p','u','l','e','l','u','l','u',0x00,
};
static signed char *(CALENDAR_WEEK_IN_TO_TO[]) = {
SUNDAY_TO_TO,
MONDAY_TO_TO,
TUESDAY_TO_TO,
"Pulelulu",
THURSDAY_TO_TO,
"Falaite",
"Tokonaki",
0x00,
};

static signed char SUN_TO_TO[] = {
'S',0xC4,0x81,'p',0x00,
};
static signed char MON_TO_TO[] = {
'M',0xC5,0x8D,'n',0x00,
};
static signed char TUE_TO_TO[] = {
'T',0xC5,0xAB,'s',0x00,
};
static signed char THU_TO_TO[] = {
'T','u',0xCA,0xBB,'a',0x00,
};
static signed char *(CALENDAR_WK_IN_TO_TO[]) = {
SUN_TO_TO,
MON_TO_TO,
TUE_TO_TO,
"Pul",
THU_TO_TO,
"Fal",
"Tok",
0x00,
};

static signed char JANUARY_TO_TO[] = {
'S',0xC4,0x81,'n','u','a','l','i',0x00,
};
static signed char FEBRUARY_TO_TO[] = {
'F',0xC4,0x93,'p','u','e','l','i',0x00,
};
static signed char MARCH_TO_TO[] = {
'M','a',0xCA,0xBB,'a','s','i',0x00,
};
static signed char APRIL_TO_TO[] = {
0xCA,0xBB,'E','p','e','l','e','l','i',0x00,
};
static signed char MAY_TO_TO[] = {
'M',0xC4,0x93,0x00,
};
static signed char AUGUST_TO_TO[] = {
0xCA,0xBB,'A','o','k','o','s','i',0x00,
};
static signed char SEPTEMBER_TO_TO[] = {
'S',0xC4,0x93,'p','i','t','e','m','a',0x00,
};
static signed char OCTOBER_TO_TO[] = {
0xCA,0xBB,'O','k','a','t','o','p','a',0x00,
};
static signed char NOVEMBER_TO_TO[] = {
'N',0xC5,0x8D,'v','e','m','a',0x00,
};
static signed char DECEMBER_TO_TO[] = {
'T',0xC4,0xAB,'s','e','m','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_TO_TO[]) = {
"",
JANUARY_TO_TO,
FEBRUARY_TO_TO,
MARCH_TO_TO,
APRIL_TO_TO,
MAY_TO_TO,
"Sune",
"Siulai",
AUGUST_TO_TO,
SEPTEMBER_TO_TO,
OCTOBER_TO_TO,
NOVEMBER_TO_TO,
DECEMBER_TO_TO,
0x00,
};

static signed char JAN_TO_TO[] = {
'S',0xC4,0x81,'n',0x00,
};
static signed char FEB_TO_TO[] = {
'F',0xC4,0x93,'p',0x00,
};
static signed char MAR_TO_TO[] = {
'M','a',0xCA,0xBB,'a',0x00,
};
static signed char APR_TO_TO[] = {
0xCA,0xBB,'E','p','e',0x00,
};
static signed char AUG_TO_TO[] = {
0xCA,0xBB,'A','o','k',0x00,
};
static signed char SEP_TO_TO[] = {
'S',0xC4,0x93,'p',0x00,
};
static signed char OCT_TO_TO[] = {
0xCA,0xBB,'O','k','a',0x00,
};
static signed char NOV_TO_TO[] = {
'N',0xC5,0x8D,'v',0x00,
};
static signed char DEC_TO_TO[] = {
'T',0xC4,0xAB,'s',0x00,
};
static signed char *(CALENDAR_MON_IN_TO_TO[]) = {
"",
JAN_TO_TO,
FEB_TO_TO,
MAR_TO_TO,
APR_TO_TO,
MAY_TO_TO,
"Sun",
"Siu",
AUG_TO_TO,
SEP_TO_TO,
OCT_TO_TO,
NOV_TO_TO,
DEC_TO_TO,
0x00,
};
