/* Notes

Latvian / Lettish

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_LV_LV[] = ("Latvian / Lettish");
static signed char CALENDAR_LLSC_IN_LV_LV[] = {
0xCA,0x9F,0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xE1,0xB4,0xA0,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,\
' ','/',' ',\
0xCA,0x9F,0xE1,0xB4,0x87,0xE1,0xB4,0x9B,0xE1,0xB4,0x9B,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,\
0x00,
};
static signed char CALENDAR_NATIVE_IN_LV_LV[] = {
'l','a','t','v','i','e',0xC5,0xA1,'u',' ','v','a','l','o','d','a',0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_LV_LV = (CALENDAR_NATIVE_IN_LV_LV);

static signed char SUN_LV_LV[] = {
's','v',0xC4,0x93,'t','d','.',0x00,
};
static signed char WED_LV_LV[] = {
't','r','e',0xC5,0xA1,'d','.',0x00,
};
static signed char *(CALENDAR_WK_IN_LV_LV[]) = {
SUN_LV_LV,
"pirmd.",
"otrd.",
WED_LV_LV,
"ceturtd.",
"piektd.",
"sestd.",
0x00,
};

static signed char SUNDAY_LV_LV[] = {
's','v',0xC4,0x93,'t','d','i','e','n','a',0x00,
};
static signed char WEDNESDAY_LV_LV[] = {
't','r','e',0xC5,0xA1,'d','i','e','n','a',0x00,
};
static signed char *(CALENDAR_WEEK_IN_LV_LV[]) = {
SUNDAY_LV_LV,
"pirmdiena",
"otrdiena",
WEDNESDAY_LV_LV,
"ceturtdiena",
"piektdiena",
"sestdiena",
0x00,
};

static signed char JANUARY_LV_LV[] = {
'j','a','n','v',0xC4,0x81,'r','i','s',0x00,
};
static signed char FEBRUARY_LV_LV[] = {
'f','e','b','r','u',0xC4,0x81,'r','i','s',0x00,
};
static signed char APRIL_LV_LV[] = {
'a','p','r',0xC4,0xAB,'l','i','s',0x00,
};
static signed char JUNE_LV_LV[] = {
'j',0xC5,0xAB,'n','i','j','s',0x00,
};
static signed char JULY_LV_LV[] = {
'j',0xC5,0xAB,'l','i','j','s',0x00,
};
static signed char *(CALENDAR_MONTH_IN_LV_LV[]) = {
"",
JANUARY_LV_LV,
FEBRUARY_LV_LV,
"marts",
APRIL_LV_LV,
"maijs",
JUNE_LV_LV,
JULY_LV_LV,
"augusts",
"septembris",
"oktobris",
"novembris",
"decembris",
0x00,
};

static signed char JUN_LV_LV[] = {
'j',0xC5,0xAB,'n','.',0x00,
};
static signed char JUL_LV_LV[] = {
'j',0xC5,0xAB,'l','.',0x00,
};
static signed char *(CALENDAR_MON_IN_LV_LV[]) = {
"",
"janv.",
"febr.",
"marts",
"apr.",
"maijs",
JUN_LV_LV,
JUL_LV_LV,
"aug.",
"sept.",
"okt.",
"nov.",
"dec.",
0x00,
};
