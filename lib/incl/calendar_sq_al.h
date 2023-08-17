/* Notes

Albanian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_SQ_AL[] = ("Albanian");
static signed char CALENDAR_LLSC_IN_SQ_AL[] = {
'A',0xCA,0x9F,0xCA,0x99,0xE1,0xB4,0x80,0xC9,0xB4,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char CALENDAR_NATIVE_IN_SQ_AL[] = ("gjuha shqipe / shqipja");
static signed char *CALENDAR_LLSC_NATIVE_IN_SQ_AL = (CALENDAR_NATIVE_IN_SQ_AL);

static signed char FIRST_SQ_AL[] = {
'e',' ','p','a','r',0xC3,0xAB,0x00,
};
static signed char SECOND_SQ_AL[] = {
'e',' ','d','y','t',0xC3,0xAB,0x00,
};
static signed char THIRD_SQ_AL[] = {
'e',' ','t','r','e','t',0xC3,0xAB,0x00,
};
static signed char FOURTH_SQ_AL[] = {
'e',' ','k','a','t',0xC3,0xAB,'r','t',0x00,
};
static signed char FIFTH_SQ_AL[] = {
'e',' ','p','e','s','t',0xC3,0xAB,0x00,
};
static signed char AND_LAST_SQ_AL[] = {
'd','h','e',' ','e',' ','f','u','n','d','i','t',0x00,
};
static signed char *(CALENDAR_ORDER_IN_SQ_AL[]) = {
"",
FIRST_SQ_AL,
SECOND_SQ_AL,
THIRD_SQ_AL,
FOURTH_SQ_AL,
FIFTH_SQ_AL,
AND_LAST_SQ_AL,
0x00,
};

static signed char ORDER_MONDAY_SQ_AL[] = {
'e',' ','h',0xC3,0xAB,'n','a',0x00,
};
static signed char ORDER_WEDNESDAY_SQ_AL[] = {
'e',' ','m',0xC3,0xAB,'r','k','u','r','a',0x00,
};
static signed char *(CALENDAR_ORDER_WEEK_IN_SQ_AL[]) = {
"e diela",
ORDER_MONDAY_SQ_AL,
"e marta",
ORDER_WEDNESDAY_SQ_AL,
"e enjtja",
"e premtja",
"e shtuna",
0x00,
};

static signed char ORDER_NOVEMBER_SQ_AL[] = {
'e',' ','n',0xC3,0xAB,'n','t','o','r','i','t',0x00,
};
static signed char *(CALENDAR_ORDER_MONTH_IN_SQ_AL[]) = {
"",
"e janarit",
"e shkurtit",
"e marsit",
"e prillit",
"e majit",
"e qershorit",
"e korrikut",
"e gushtit",
"e shtatorit",
"e tetorit",
ORDER_NOVEMBER_SQ_AL,
"e dhjetorit",
0x00,
};

static signed char MONDAY_SQ_AL[] = {
'e',' ','h',0xC3,0xAB,'n',0xC3,0xAB,0x00,
};
static signed char TUESDAY_SQ_AL[] = {
'e',' ','m','a','r','t',0xC3,0xAB,0x00,
};
static signed char WEDNESDAY_SQ_AL[] = {
'e',' ','m',0xC3,0xAB,'r','k','u','r',0xC3,0xAB,0x00,
};
static signed char SATURDAY_SQ_AL[] = {
'e',' ','s','h','t','u','n',0xC3,0xAB,0x00,
};
static signed char *(CALENDAR_WEEK_IN_SQ_AL[]) = {
"e diel",
MONDAY_SQ_AL,
TUESDAY_SQ_AL,
WEDNESDAY_SQ_AL,
"e enjte",
"e premte",
SATURDAY_SQ_AL,
0x00,
};

static signed char MON_SQ_AL[] = {
'h',0xC3,0xAB,'n',0x00,
};
static signed char WED_SQ_AL[] = {
'm',0xC3,0xAB,'r',0x00,
};
static signed char *(CALENDAR_WK_IN_SQ_AL[]) = {
"die",
MON_SQ_AL,
"mar",
WED_SQ_AL,
"enj",
"pre",
"sht",
0x00,
};

static signed char NOVEMBER_SQ_AL[] = {
'n',0xC3,0xAB,'n','t','o','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_SQ_AL[]) = {
"",
"janar",
"shkurt",
"mars",
"prill",
"maj",
"qershor",
"korrik",
"gusht",
"shtator",
"tetor",
NOVEMBER_SQ_AL,
"dhjetor",
0x00,
};

static signed char NOV_SQ_AL[] = {
'n',0xC3,0xAB,'n',0x00,
};
static signed char *(CALENDAR_MON_IN_SQ_AL[]) = {
"",
"jan",
"shk",
"mar",
"pri",
"maj",
"qer",
"korr",
"gush",
"sht",
"tet",
NOV_SQ_AL,
"dhj",
0x00,
};
