/* Notes

Italian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_IT_IT[] = ("Italian");
static signed char CALENDAR_LLSC_IN_IT_IT[] = {
'I',0xE1,0xB4,0x9B,0xE1,0xB4,0x80,0xCA,0x9F,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char CALENDAR_NATIVE_IN_IT_IT[] = ("italiano");
static signed char *CALENDAR_LLSC_NATIVE_IN_IT_IT = (CALENDAR_NATIVE_IN_IT_IT);

static signed char *(CALENDAR_ORDER_IN_IT_IT[]) = {
"",
"primo",
"secondo",
"terzo",
"quarto",
"quinto",
"e ultimo",
"di",
0x00,
};

static signed char *(CALENDAR_WK_IN_IT_IT[]) = {
"dom",
"lun",
"mar",
"mer",
"gio",
"ven",
"sab",
0x00,
};

static signed char MONDAY_IT_IT[] = {
'l','u','n','e','d',0xC3,0xAC,0x00,
};
static signed char TUESDAY_IT_IT[] = {
'm','a','r','t','e','d',0xC3,0xAC,0x00,
};
static signed char WEDNESDAY_IT_IT[] = {
'm','e','r','c','o','l','e','d',0xC3,0xAC,0x00,
};
static signed char THURSDAY_IT_IT[] = {
'g','i','o','v','e','d',0xC3,0xAC,0x00,
};
static signed char FRIDAY_IT_IT[] = {
'v','e','n','e','r','d',0xC3,0xAC,0x00,
};
static signed char *(CALENDAR_WEEK_IN_IT_IT[]) = {
"domenica",
MONDAY_IT_IT,
TUESDAY_IT_IT,
WEDNESDAY_IT_IT,
THURSDAY_IT_IT,
FRIDAY_IT_IT,
"sabato",
0x00,
};

static signed char FIRST_IT_IT[] = {
'1',0xC2,0xBA,0x00,
};
static signed char *(CALENDAR_DAY_IN_IT_IT[]) = {
"",
FIRST_IT_IT,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_IT_IT[]) = {
"",
"gennaio",
"febbraio",
"marzo",
"aprile",
"maggio",
"giugno",
"luglio",
"agosto",
"settembre",
"ottobre",
"novembre",
"dicembre",
0x00,
};

static signed char *(CALENDAR_MON_IN_IT_IT[]) = {
"",
"gen",
"feb",
"mar",
"apr",
"mag",
"giu",
"lug",
"ago",
"set",
"ott",
"nov",
"dic",
0x00,
};
