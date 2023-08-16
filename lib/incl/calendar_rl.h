/* Notes

Roman

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_RL[] = ("Roman");
static signed char CALENDAR_LLSC_IN_RL[] = {
'R',0xE1,0xB4,0x8F,0xE1,0xB4,0x8D,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char *(CALENDAR_WK_IN_RL[]) = {
"So.","L.","Ma.","Me.","J.","V.","Sa.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_RL[]) = {
"dies Solis","dies Lunae","dies Martis","dies Mercurii","dies Jovis","dies Veneris","dies Saturni",0x00,
};

static signed char *(CALENDAR_DAY_IN_RL[]) = {
"","I","II","III","IV","V","VI","VII","VIII","IX",\
"X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX",\
"XX","XXI","XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX",\
"XXX","XXXI",\
0x00,
};

static signed char *(CALENDAR_DAY_S_IN_RL[]) = {
"","i","ii","iii","iv","v","vi","vii","viii","ix",\
"x","xi","xii","xiii","xiv","xv","xvi","xvii","xviii","xix",\
"xx","xxi","xxii","xxiii","xxiv","xxv","xxvi","xxvii","xxviii","xxix",\
"xxx","xxxi",\
0x00,
};

/*
static signed char *(CALENDAR_MONTH_IN_RL[]) = {
"",
"JANUARIUS",
"FEBRUARIUS",
"MARTIUS",
"APRILIS",
"MAIUS",
"JUNIUS",
"JULIUS",
"AUGUSTUS",
"SEPTEMBER",
"OCTOBER",
"NOVEMBER",
"DECEMBER",
0x00,
};
//*/

// more correctly written as Romans did not have a 'J' or a 'U' in their alphabet..
static signed char *(CALENDAR_MONTH_IN_RL[]) = {
"",
"IANVARIVS",
"FEBRVARIVS",
"MARTIVS",
"APRILIS",
"MAIVS",
"IVNIVS",
"IVLIVS",
"AVGVSTVS",
"SEPTEMBER",
"OCTOBER",
"NOVEMBER",
"DECEMBER",
0x00,
};
