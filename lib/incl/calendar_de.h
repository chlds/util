/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WK_IN_DE[]) = {
"So.","Mo.","Di.","Mi.","Do.","Fr.","Sa.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_DE[]) = {
"Sonntag","Montag","Dienstag","Mittwoch","Donerstag","Freitag","Samstag",0x00,
};

static signed char marz[] = {
'm',0xC3,0xA4,'r','z',0x00,
};
static signed char *(CALENDAR_MONTH_IN_DE[]) = {
"","Januar","Februar",marz,"April","Mai","Juni","Juli","August","September","Oktober","November","Dezember",0x00,
};
