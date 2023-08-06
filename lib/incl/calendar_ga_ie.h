/* Notes

Irish

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_GA_IE[] = ("Irish");
static signed char CALENDAR_LLSC_IN_GA_IE[] = {
'I',0xCA,0x80,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,0x00,
};

static signed char CALENDAR_NATIVE_IN_GA_IE[] = ("Gaeilge");
static signed char CALENDAR_LLSC_NATIVE_IN_GA_IE[] = {
'G',0xE1,0xB4,0x80,0xE1,0xB4,0x87,0xC9,0xAA,0xCA,0x9F,0xC9,0xA2,0xE1,0xB4,0x87,0x00,
};

static signed char TUE_GA_IE[] = {
'M',0xC3,0xA1,'i','r','t',0x00,
};
static signed char WED_GA_IE[] = {
'C',0xC3,0xA9,'a','d',0x00,
};
static signed char THU_GA_IE[] = {
'D',0xC3,0xA9,'a','r',0x00,
};
static signed char *(CALENDAR_WK_IN_GA_IE[]) = {
"Domh",
"Luan",
TUE_GA_IE,
WED_GA_IE,
THU_GA_IE,
"Aoine",
"Sath",
0x00,
};

static signed char SUNDAY_GA_IE[] = {
'D',0xC3,0xA9,' ','D','o','m','h','n','a','i','g','h',0x00,
};
static signed char MONDAY_GA_IE[] = {
'D',0xC3,0xA9,' ','L','u','a','i','n',0x00,
};
static signed char TUESDAY_GA_IE[] = {
'D',0xC3,0xA9,' ','M',0xC3,0xA1,'i','r','t',0x00,
};
static signed char WEDNESDAY_GA_IE[] = {
'D',0xC3,0xA9,' ','C',0xC3,0xA9,'a','d','a','o','i','n',0x00,
};
static signed char THURSDAY_GA_IE[] = {
'D',0xC3,0xA9,'a','r','d','a','o','i','n',0x00,
};
static signed char FRIDAY_GA_IE[] = {
'D',0xC3,0xA9,' ','h','A','o','i','n','e',0x00,
};
static signed char SATURDAY_GA_IE[] = {
'D',0xC3,0xA9,' ','S','a','t','h','a','i','r','n',0x00,
};
static signed char *(CALENDAR_WEEK_IN_GA_IE[]) = {
SUNDAY_GA_IE,
MONDAY_GA_IE,
TUESDAY_GA_IE,
WEDNESDAY_GA_IE,
THURSDAY_GA_IE,
FRIDAY_GA_IE,
SATURDAY_GA_IE,
0x00,
};

static signed char JANUARY_GA_IE[] = {
'E','a','n',0xC3,0xA1,'i','r',0x00,
};
static signed char MARCH_GA_IE[] = {
'M',0xC3,0xA1,'r','t','a',0x00,
};
static signed char APRIL_GA_IE[] = {
'A','i','b','r','e',0xC3,0xA1,'n',0x00,
};
static signed char JULY_GA_IE[] = {
'I',0xC3,0xBA,'i','l',0x00,
};
static signed char AUGUST_GA_IE[] = {
'L',0xC3,0xBA,'n','a','s','a',0x00,
};
static signed char SEPTEMBER_GA_IE[] = {
'M','e',0xC3,0xA1,'n',' ','F',0xC3,0xB3,'m','h','a','i','r',0x00,
};
static signed char OCTOBER_GA_IE[] = {
'D','e','i','r','e','a','d','h',' ','F',0xC3,0xB3,'m','h','a','i','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_GA_IE[]) = {
"",
JANUARY_GA_IE,
"Feabhra",
MARCH_GA_IE,
APRIL_GA_IE,
"Bealtaine",
"Meitheamh",
JULY_GA_IE,
AUGUST_GA_IE,
SEPTEMBER_GA_IE,
OCTOBER_GA_IE,
"Samhain",
"Nollaig",
0x00,
};
