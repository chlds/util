/* Notes

Turkmen
C5.87/C5.88 : Latin Capital/Small Letter N with Caron
C5.9E/C5.9F : Latin Capital/Small Letter S with Cedilla

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_TK_TM[] = ("Turkmen");
static signed char CALENDAR_LLSC_IN_TK_TM[] = {
'T',0xE1,0xB4,0x9C,0xCA,0x80,0xE1,0xB4,0x8B,0xE1,0xB4,0x8D,0xE1,0xB4,0x87,0xC9,0xB4,0x00,
};

static signed char CALENDAR_NATIVE_IN_TK_TM[] = {
't',0xC3,0xBC,'r','k','m','e','n',0xC3,0xA7,'e',\
' ','/',' ',\
't',0xC3,0xBC,'r','k','m','e','n',' ','d','i','l','i',\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_TK_TM = (CALENDAR_NATIVE_IN_TK_TM);

static signed char THIRD_TK_TM[] = {
0xC3,0xBC,0xC3,0xA7,0xC3,0xBC,'n','j','i',0x00,
};
static signed char FOURTH_TK_TM[] = {
'd',0xC3,0xB6,'r','d',0xC3,0xBC,'n','j','i',0x00,
};
static signed char FIFTH_TK_TM[] = {
'b',0xC3,0xA4,0xC5,0x9F,'i','n','j','i',0x00,
};
static signed char AND_LAST_TK_TM[] = {
'w','e',' ','s','o',0xC5,0x88,'k','y',0x00,
};
static signed char OF_TK_TM[] = {
'a',0xC3,0xBD,'y','n','y',0xC5,0x88,0x00,
};
static signed char *(CALENDAR_ORDER_IN_TK_TM[]) = {
"",
"birinji",
"ikinji",
THIRD_TK_TM,
FOURTH_TK_TM,
FIFTH_TK_TM,
AND_LAST_TK_TM,
OF_TK_TM,
0x00,
};

static signed char SUNDAY_TK_TM[] = {
0xC3,0xBD,'e','k',0xC5,0x9F,'e','n','b','e',0x00,
};
static signed char MONDAY_TK_TM[] = {
'd','u',0xC5,0x9F,'e','n','b','e',0x00,
};
static signed char TUESDAY_TK_TM[] = {
's','i',0xC5,0x9F,'e','n','b','e',0x00,
};
static signed char WEDNESDAY_TK_TM[] = {
0xC3,0xA7,'a','r',0xC5,0x9F,'e','n','b','e',0x00,
};
static signed char THURSDAY_TK_TM[] = {
'p','e','n',0xC5,0x9F,'e','n','b','e',0x00,
};
static signed char SATURDAY_TK_TM[] = {
0xC5,0x9F,'e','n','b','e',0x00,
};
static signed char *(CALENDAR_WEEK_IN_TK_TM[]) = {
SUNDAY_TK_TM,
MONDAY_TK_TM,
TUESDAY_TK_TM,
WEDNESDAY_TK_TM,
THURSDAY_TK_TM,
"anna",
SATURDAY_TK_TM,
0x00,
};

static signed char SUN_TK_TM[] = {
0xC3,0xBD,'e','k',0x00,
};
static signed char MON_TK_TM[] = {
'd','u',0xC5,0x9F,0x00,
};
static signed char TUE_TK_TM[] = {
's','i',0xC5,0x9F,0x00,
};
static signed char WED_TK_TM[] = {
0xC3,0xA7,'a','r',0x00,
};
static signed char THU_TK_TM[] = {
'p','e','n',0x00,
};
static signed char SAT_TK_TM[] = {
0xC5,0x9F,'e','n',0x00,
};
static signed char *(CALENDAR_WK_IN_TK_TM[]) = {
SUN_TK_TM,
MON_TK_TM,
TUE_TK_TM,
WED_TK_TM,
THU_TK_TM,
"ann",
SAT_TK_TM,
0x00,
};

/*
static signed char SUN_TK_TM[] = {
0xC3,0x9D,0x00,
};
static signed char MON_TK_TM[] = {
'D',0x00,
};
static signed char TUE_TK_TM[] = {
'S',0x00,
};
static signed char WED_TK_TM[] = {
0xC3,0x87,0x00,
};
static signed char THU_TK_TM[] = {
'P',0x00,
};
static signed char SAT_TK_TM[] = {
0xC5,0x9E,0x00,
};
static signed char *(CALENDAR_WK_IN_TK_TM[]) = {
SUN_TK_TM,
MON_TK_TM,
TUE_TK_TM,
WED_TK_TM,
THU_TK_TM,
"A",
SAT_TK_TM,
0x00,
};
//*/

static signed char JANUARY_TK_TM[] = {
0xC3,0xBD,'a','n','w','a','r',0x00,
};
static signed char MAY_TK_TM[] = {
'm','a',0xC3,0xBD,0x00,
};
static signed char JUNE_TK_TM[] = {
'i',0xC3,0xBD,'u','n',0x00,
};
static signed char JULY_TK_TM[] = {
'i',0xC3,0xBD,'u','l',0x00,
};
static signed char SEPTEMBER_TK_TM[] = {
's','e','n','t',0xC3,0xBD,'a','b','r',0x00,
};
static signed char OCTOBER_TK_TM[] = {
'o','k','t',0xC3,0xBD,'a','b','r',0x00,
};
static signed char NOVEMBER_TK_TM[] = {
'n','o',0xC3,0xBD,'a','b','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_TK_TM[]) = {
"",
JANUARY_TK_TM,
"fewral",
"mart",
"aprel",
MAY_TK_TM,
JUNE_TK_TM,
JULY_TK_TM,
"awgust",
SEPTEMBER_TK_TM,
OCTOBER_TK_TM,
NOVEMBER_TK_TM,
"dekabr",
0x00,
};

static signed char JAN_TK_TM[] = {
0xC3,0xBD,'a','n',0x00,
};
static signed char NOV_TK_TM[] = {
'n','o',0xC3,0xBD,0x00,
};
static signed char *(CALENDAR_MON_IN_TK_TM[]) = {
"",
JAN_TK_TM,
"few",
"mart",
"apr",
MAY_TK_TM,
JUNE_TK_TM,
JULY_TK_TM,
"awg",
"sen",
"okt",
NOV_TK_TM,
"dek",
0x00,
};
