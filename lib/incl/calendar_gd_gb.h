/* Notes

Scottish Gaelic

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_GD_GB[] = ("Scottish Gaelic");
static signed char CALENDAR_LLSC_IN_GD_GB[] = {
'S',0xE1,0xB4,0x84,0xE1,0xB4,0x8F,0xE1,0xB4,0x9B,0xE1,0xB4,0x9B,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,\
' ','G',0xE1,0xB4,0x80,0xE1,0xB4,0x87,0xCA,0x9F,0xC9,0xAA,0xE1,0xB4,0x84,\
0x00,
};

static signed char CALENDAR_NATIVE_IN_GD_GB[] = {
'G',0xC3,0xA0,'i','d','h','l','i','g',0x00,
};
static signed char CALENDAR_LLSC_NATIVE_IN_GD_GB[] = {
'G',0xE1,0xB4,0x80,0xCC,0x80,0xC9,0xAA,0xE1,0xB4,0x85,0xCA,0x9C,0xCA,0x9F,0xC9,0xAA,0xC9,0xA2,0x00,
};

static signed char SUNDAY2_GD_GB[] = {
'L',0xC3,0xA0,' ','n','a',' ','S',0xC3,0xA0,'b','a','i','d',0x00,
};
static signed char SUNDAY_GD_GB[] = {
'D','i','D',0xC3,0xB2,'m','h','n','a','i','c','h',0x00,
};
static signed char TUESDAY_GD_GB[] = {
'D','i','M',0xC3,0xA0,'i','r','t',0x00,
};
static signed char *(CALENDAR_WEEK_IN_GD_GB[]) = {
SUNDAY_GD_GB,
"DiLuain",
TUESDAY_GD_GB,
"DiCiadain",
"DiarDaoin",
"DihAoine",
"DiSathairne",
0x00,
};

static signed char *(CALENDAR_WK_IN_GD_GB[]) = {
"DiD",
"DiL",
"DiM",
"DiC",
"Dia",
"Dih",
"DiS",
0x00,
};

static signed char *(CALENDAR_DAY_IN_GD_GB[]) = {
"",
"a' chiad latha",
"2na",
"3s",
"4mh",
"5mh",
"6mh",
"7mh",
"8mh",
"9mh",
"10mh",
"11mh",
"12mh",
"13mh",
"14mh",
"15mh",
"16mh",
"17mh",
"18mh",
"19mh",
"20mh",
"21mh",
"22mh",
"23mh",
"24mh",
"25mh",
"26mh",
"27mh",
"28mh",
"29mh",
"30mh",
"31mh",
0x00,
};

static signed char MARCH_NOM_GD_GB[] = {
'A','m',' ','M',0xC3,0xA0,'r','t',0x00,
};
static signed char MAY_NOM_GD_GB[] = {
'A','n',' ','C',0xC3,0xA8,'i','t','e','a','n',0x00,
};
static signed char JUNE_NOM_GD_GB[] = {
'A','n',' ','t','-',0xC3,0x92,'g','m','h','i','o','s',0x00,
};
static signed char AUGUST_NOM_GD_GB[] = {
'A','n',' ','L',0xC3,0xB9,'n','a','s','t','a','l',0x00,
};
static signed char OCTOBER_NOM_GD_GB[] = {
'A','n',' ','D',0xC3,0xA0,'m','h','a','i','r',0x00,
};
static signed char DECEMBER_NOM_GD_GB[] = {
'A','n',' ','D',0xC3,0xB9,'b','h','l','a','c','h','d',0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_GD_GB[]) = {
"",
"Am Faoilleach",
"An Gearran",
MARCH_NOM_GD_GB,
"An Giblean",
MAY_NOM_GD_GB,
JUNE_NOM_GD_GB,
"An t-Iuchar",
AUGUST_NOM_GD_GB,
"An t-Sultain",
OCTOBER_NOM_GD_GB,
"An t-Samhain",
DECEMBER_NOM_GD_GB,
0x00,
};

static signed char MARCH_GD_GB[] = {
'd','h','e','n',' ','M','h',0xC3,0xA0,'r','t',0x00,
};
static signed char MAY_GD_GB[] = {
'd','h','e','n',' ','C','h',0xC3,0xA8,'i','t','e','a','n',0x00,
};
static signed char JUNE_GD_GB[] = {
'd','h','e','n',' ',0xC3,0x92,'g','m','h','i','o','s',0x00,
};
static signed char AUGUST_GD_GB[] = {
'd','h','e','n',' ','L',0xC3,0xB9,'n','a','s','t','a','l',0x00,
};
static signed char OCTOBER_GD_GB[] = {
'd','h','e','n',' ','D',0xC3,0xA0,'m','h','a','i','r',0x00,
};
static signed char DECEMBER_GD_GB[] = {
'd','h','e','n',' ','D',0xC3,0xB9,'b','h','l','a','c','h','d',0x00,
};
static signed char *(CALENDAR_MONTH_IN_GD_GB[]) = {
"",
"dhen Fhaoilleach",
"dhen Ghearran",
MARCH_GD_GB,
"dhen Ghiblean",
MAY_GD_GB,
JUNE_GD_GB,
"dhen Iuchar",
AUGUST_GD_GB,
"dhen t-Sultain",
OCTOBER_GD_GB,
"dhen t-Samhain",
DECEMBER_GD_GB,
0x00,
};
