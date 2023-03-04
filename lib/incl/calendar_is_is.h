/* Notes

Icelandic

Remarks:
Based on UTF-8
*/


static signed char THIRD_IS_IS[] = {
0xC3,0xBE,'r','i',0xC3,0xB0,'j','a',0x00,
};
static signed char FOURTH_IS_IS[] = {
'f','j',0xC3,0xB3,'r',0xC3,0xB0,'a',0x00,
};
static signed char AND_LAST_IS_IS[] = {
'o','g',' ','s',0xC3,0xAD,0xC3,0xB0,'a','s','t','a',0x00,
};
static signed char OF_IS_IS[] = {
0xC3,0xAD,0x00,
};
static signed char *(CALENDAR_ORDER_IN_IS_IS[]) = {
"",
"fyrsta",
"annan",
THIRD_IS_IS,
FOURTH_IS_IS,
"fimmta",
AND_LAST_IS_IS,
OF_IS_IS,
0x00,
};

static signed char MONDAY_ORDER_IS_IS[] = {
'm',0xC3,0xA1,'n','u','d','a','g',0x00,
};
static signed char TUESDAY_ORDER_IS_IS[] = {
0xC3,0xBE,'r','i',0xC3,0xB0,'j','u','d','a','g',0x00,
};
static signed char WEDNESDAY_ORDER_IS_IS[] = {
'm','i',0xC3,0xB0,'v','i','k','u','d','a','g',0x00,
};
static signed char FRIDAY_ORDER_IS_IS[] = {
'f',0xC3,0xB6,'s','t','u','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_ORDER_IN_IS_IS[]) = {
"sunnudag",
MONDAY_ORDER_IS_IS,
TUESDAY_ORDER_IS_IS,
WEDNESDAY_ORDER_IS_IS,
"fimmtudag",
FRIDAY_ORDER_IS_IS,
"laugardag",
0x00,
};

static signed char MONDAY_IS_IS[] = {
'm',0xC3,0xA1,'n','u','d','a','g','u','r',0x00,
};
static signed char TUESDAY_IS_IS[] = {
0xC3,0xBE,'r','i',0xC3,0xB0,'j','u','d','a','g','u','r',0x00,
};
static signed char WEDNESDAY_IS_IS[] = {
'm','i',0xC3,0xB0,'v','i','k','u','d','a','g','u','r',0x00,
};
static signed char FRIDAY_IS_IS[] = {
'f',0xC3,0xB6,'s','t','u','d','a','g','u','r',0x00,
};
static signed char *(CALENDAR_WEEK_IN_IS_IS[]) = {
"sunnudagur",
MONDAY_IS_IS,
TUESDAY_IS_IS,
WEDNESDAY_IS_IS,
"fimmtudagur",
FRIDAY_IS_IS,
"laugardagur",
0x00,
};

static signed char MON_IS_IS[] = {
'm',0xC3,0xA1,'n','.',0x00,
};
static signed char TUE_IS_IS[] = {
0xC3,0xBE,'r','i','.',0x00,
};
static signed char WED_IS_IS[] = {
'm','i',0xC3,0xB0,'.',0x00,
};
static signed char FRI_IS_IS[] = {
'f',0xC3,0xB6,'s','.',0x00,
};
static signed char *(CALENDAR_WK_IN_IS_IS[]) = {
"sun.",
MON_IS_IS,
TUE_IS_IS,
WED_IS_IS,
"fim.",
FRI_IS_IS,
"lau.",
0x00,
};

static signed char JANUARY_IS_IS[] = {
'j','a','n',0xC3,0xBA,'a','r',0x00,
};
static signed char FEBRUARY_IS_IS[] = {
'f','e','b','r',0xC3,0xBA,'a','r',0x00,
};
static signed char APRIL_IS_IS[] = {
'a','p','r',0xC3,0xAD,'l',0x00,
};
static signed char MAY_IS_IS[] = {
'm','a',0xC3,0xAD,0x00,
};
static signed char JUNE_IS_IS[] = {
'j',0xC3,0xBA,'n',0xC3,0xAD,0x00,
};
static signed char JULY_IS_IS[] = {
'j',0xC3,0xBA,'l',0xC3,0xAD,0x00,
};
static signed char AUGUST_IS_IS[] = {
0xC3,0xA1,'g',0xC3,0xBA,'s','t',0x00,
};
static signed char OCTOBER_IS_IS[] = {
'o','k','t',0xC3,0xB3,'b','e','r',0x00,
};
static signed char NOVEMBER_IS_IS[] = {
'n',0xC3,0xB3,'v','e','m','b','e','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_IS_IS[]) = {
"",
JANUARY_IS_IS,
FEBRUARY_IS_IS,
"mars",
APRIL_IS_IS,
MAY_IS_IS,
JUNE_IS_IS,
JULY_IS_IS,
AUGUST_IS_IS,
"september",
OCTOBER_IS_IS,
NOVEMBER_IS_IS,
"desember",
0x00,
};
