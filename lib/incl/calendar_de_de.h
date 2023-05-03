/* Notes

German

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_DE_DE[] = ("German");
static signed char CALENDAR_LLSC_IN_DE_DE[] = {
'G',0xE1,0xB4,0x87,0xCA,0x80,0xE1,0xB4,0x8D,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char FIFTH_DE_DE[] = {
'F',0xC3,0xBC,'n','f','t','e','r',0x00,
};
static signed char *(CALENDAR_ORDER_IN_DE_DE[]) = {
"","Erster","Zweiter","Dritter","Vierter",FIFTH_DE_DE,"und letzter","im",0x00,
};

static signed char *(CALENDAR_WK_IN_DE_DE[]) = {
"So.","Mo.","Di.","Mi.","Do.","Fr.","Sa.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_DE_DE[]) = {
"Sonntag","Montag","Dienstag","Mittwoch","Donnerstag","Freitag","Samstag",0x00,
};

static signed char MARCH_DE_DE[] = {
'M',0xC3,0xA4,'r','z',0x00,
};
static signed char *(CALENDAR_MONTH_IN_DE_DE[]) = {
"","Januar","Februar",MARCH_DE_DE,"April","Mai","Juni","Juli","August","September","Oktober","November","Dezember",0x00,
};
