/* Notes

German

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_DE_DE[] = ("German");
static signed char CALENDAR_LLSC_IN_DE_DE[] = {
0xC9,0xA2,0xE1,0xB4,0x87,0xCA,0x80,0xE1,0xB4,0x8D,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};
static signed char CALENDAR_NATIVE_IN_DE_DE[] = ("Deutsch");
static signed char CALENDAR_LLSC_NATIVE_IN_DE_DE[] = {
0xE1,0xB4,0x85,0xE1,0xB4,0x87,0xE1,0xB4,0x9C,0xE1,0xB4,0x9B,0xEA,0x9C,0xB1,0xE1,0xB4,0x84,0xCA,0x9C,0x00,
};

static signed char CALENDAR_MIDNIGHT_IN_DE_DE[] = ("Mitternacht");
static signed char CALENDAR_AUX_SMALL_HOURS_IN_DE_DE[] = ("Nachmitternacht"); // (12am-4am)
static signed char CALENDAR_SMALL_HOURS_IN_DE_DE[] = ("Nacht"); // (12am-4am)
static signed char CALENDAR_MORNING_IN_DE_DE[] = ("Morgen"); // (4am-9am)
static signed char CALENDAR_LATE_MORNING_IN_DE_DE[] = ("Vormittag"); // Before noon (10am-12pm)
static signed char CALENDAR_NOON_IN_DE_DE[] = ("Mittag");
static signed char CALENDAR_AFTERNOON_IN_DE_DE[] = ("Nachmittag"); // (3pm-6pm)
static signed char CALENDAR_EVENING_IN_DE_DE[] = ("Abend"); // Evening / Night (6pm-11pm/12am)
static signed char CALENDAR_EARLY_IN_DE_DE[] = {
'F','r',0xC3,0xBC,'h','e','r',0x00,
};
static signed char CALENDAR_LATE_IN_DE_DE[] = {
'S','p',0xC3,0xA4,'t','e','r',0x00,
};

static signed char FIFTH_DE_DE[] = {
'F',0xC3,0xBC,'n','f','t','e','r',0x00,
};
static signed char *(CALENDAR_ORDER_IN_DE_DE[]) = {
"",
"Erster",
"Zweiter",
"Dritter",
"Vierter",
FIFTH_DE_DE,
"und letzter",
"im",
0x00,
};

static signed char *(CALENDAR_WEEK_IN_DE_DE[]) = {
"Sonntag",
"Montag",
"Dienstag",
"Mittwoch",
"Donnerstag",
"Freitag",
"Samstag",
0x00,
};

static signed char *(CALENDAR_WK_IN_DE_DE[]) = {
"So.",
"Mo.",
"Di.",
"Mi.",
"Do.",
"Fr.",
"Sa.",
0x00,
};

static signed char MARCH_DE_DE[] = {
'M',0xC3,0xA4,'r','z',0x00,
};

static signed char *(CALENDAR_MONTH_IN_DE_DE[]) = {
"",
"Januar",
"Februar",
MARCH_DE_DE,
"April",
"Mai",
"Juni",
"Juli",
"August",
"September",
"Oktober",
"November",
"Dezember",
0x00,
};

static signed char *(CALENDAR_MON_IN_DE_DE[]) = {
"",
"Jan.",
"Feb.",
MARCH_DE_DE,
"Apr.",
"Mai",
"Juni",
"Juli",
"Aug.",
"Sept.",
"Okt.",
"Nov.",
"Dez.",
0x00,
};
