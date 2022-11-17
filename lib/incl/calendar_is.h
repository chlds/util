/* Notes

Icelandic

Remarks:
Based on UTF-8
*/


static signed char mon_is[] = {
'M',0xC3,0xA1,'n','.',0x00,
};
static signed char tue_is[] = {
0xC3,0x9E,'r','i','.',0x00,
};
static signed char wed_is[] = {
'M','i',0xC3,0xB0,'.',0x00,
};
static signed char fri_is[] = {
'F',0xC3,0xB6,'s','.',0x00,
};

static signed char *(CALENDAR_WK_IN_IS[]) = {
"Sun.",\
mon_is,\
tue_is,\
wed_is,\
"Fim.",\
fri_is,\
"Lau.",\
0x00,
};

static signed char monday_is[] = {
'M',0xC3,0xA1,'n','u','d','a','g','u','r',0x00,
};
static signed char tuesday_is[] = {
0xC3,0x9E,'r','i',0xC3,0xB0,'j','u','d','a','g','u','r',0x00,
};
static signed char wednesday_is[] = {
'M','i',0xC3,0xB0,'v','i','k','u','d','a','g','u','r',0x00,
};
static signed char friday_is[] = {
'F',0xC3,0xB6,'s','t','u','d','a','g','u','r',0x00,
};

static signed char *(CALENDAR_WEEK_IN_IS[]) = {
"Sunnudagur",\
monday_is,\
tuesday_is,\
wednesday_is,\
"Fimmtudagur",\
friday_is,\
"Laugardagur",\
0x00,
};

static signed char january_is[] = {
'J','a','n',0xC3,0xBA,'a','r',0x00,
};
static signed char february_is[] = {
'F','e','b','r',0xC3,0xBA,'a','r',0x00,
};
static signed char april_is[] = {
'A','p','r',0xC3,0xAD,'l',0x00,
};
static signed char may_is[] = {
'M','a',0xC3,0xAD,0x00,
};
static signed char june_is[] = {
'J',0xC3,0xBA,'n',0xC3,0xAD,0x00,
};
static signed char july_is[] = {
'J',0xC3,0xBA,'l',0xC3,0xAD,0x00,
};
static signed char august_is[] = {
0xC3,0x81,'g',0xC3,0xBA,'s','t',0x00,
};
static signed char october_is[] = {
'O','k','t',0xC3,0xB3,'b','e','r',0x00,
};
static signed char november_is[] = {
'N',0xC3,0xB3,'v','e','m','b','e','r',0x00,
};

static signed char *(CALENDAR_MONTH_IN_IS[]) = {
"",\
january_is,\
february_is,\
"Mars",\
april_is,\
may_is,\
june_is,\
july_is,\
august_is,\
"September",\
october_is,\
november_is,\
"Desember",\
0x00,
};
