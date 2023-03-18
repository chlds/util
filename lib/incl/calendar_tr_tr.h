/* Notes

Turkish
C4.9E/C4.9F : Latin Capital/Small Letter G with Breve
C4.B0 : Latin Capital Letter I with Dot above
C4.B1 : Latin Small Letter Dotless I
C5.9E/C5.9F : Latin Capital/Small Letter S with Cedilla

Remarks:
Based on UTF-8
*/


static signed char SECOND_TR_TR[] = {
'i','k','i','n','c','i',0x00,
};
static signed char THIRD_TR_TR[] = {
0xC3,0xBC,0xC3,0xA7,0xC3,0xBC,'n','c',0xC3,0xBC,0x00,
};
static signed char FOURTH_TR_TR[] = {
'd',0xC3,0xB6,'r','d',0xC3,0xBC,'n','c',0xC3,0xBC,0x00,
};
static signed char FIFTH_TR_TR[] = {
'b','e',0xC5,0x9F,'i','n','c','i',0x00,
};
static signed char OF_TR_TR[] = {
'a','y',0xC4,0xB1,'n',0xC4,0xB1,'n',0x00,
};
static signed char *(CALENDAR_ORDER_IN_TR_TR[]) = {
"",
"ilk",
SECOND_TR_TR,
THIRD_TR_TR,
FOURTH_TR_TR,
FIFTH_TR_TR,
"ve son",
OF_TR_TR,
0x00,
};

static signed char TUESDAY_TR_TR[] = {
'S','a','l',0xC4,0xB1,0x00,
};
static signed char WEDNESDAY_TR_TR[] = {
0xC3,0x87,'a','r',0xC5,0x9F,'a','m','b','a',0x00,
};
static signed char THURSDAY_TR_TR[] = {
'P','e','r',0xC5,0x9F,'e','m','b','e',0x00,
};
static signed char *(CALENDAR_WEEK_IN_TR_TR[]) = {
"Pazar",
"Pazartesi",
TUESDAY_TR_TR,
WEDNESDAY_TR_TR,
THURSDAY_TR_TR,
"Cuma",
"Cumartesi",
0x00,
};

static signed char WED_TR_TR[] = {
0xC3,0x87,'a','r',0x00,
};
static signed char *(CALENDAR_WK_IN_TR_TR[]) = {
"Paz",
"Pzt",
"Sal",
WED_TR_TR,
"Per",
"Cum",
"Cmt",
0x00,
};

static signed char FEBRUARY_TR_TR[] = {
0xC5,0x9E,'u','b','a','t',0x00,
};
static signed char MAY_TR_TR[] = {
'M','a','y',0xC4,0xB1,'s',0x00,
};
static signed char AUGUST_TR_TR[] = {
'A',0xC4,0x9F,'u','s','t','o','s',0x00,
};
static signed char SEPTEMBER_TR_TR[] = {
'E','y','l',0xC3,0xBC,'l',0x00,
};
static signed char NOVEMBER_TR_TR[] = {
'K','a','s',0xC4,0xB1,'m',0x00,
};
static signed char DECEMBER_TR_TR[] = {
'A','r','a','l',0xC4,0xB1,'k',0x00,
};
static signed char *(CALENDAR_MONTH_IN_TR_TR[]) = {
"",
"Ocak",
FEBRUARY_TR_TR,
"Mart",
"Nisan",
MAY_TR_TR,
"Haziran",
"Temmuz",
AUGUST_TR_TR,
SEPTEMBER_TR_TR,
"Ekim",
NOVEMBER_TR_TR,
DECEMBER_TR_TR,
0x00,
};
