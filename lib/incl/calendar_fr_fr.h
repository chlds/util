/* Notes

French

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_FR_FR[] = ("French");
static signed char CALENDAR_LLSC_IN_FR_FR[] = {
'F',0xCA,0x80,0xE1,0xB4,0x87,0xC9,0xB4,0xE1,0xB4,0x84,0xCA,0x9C,0x00,
};
static signed char CALENDAR_NATIVE_IN_FR_FR[] = {
'f','r','a','n',0xC3,0xA7,'a','i','s',0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_FR_FR = (CALENDAR_NATIVE_IN_FR_FR);

static signed char DVE_MID_IN_FR_FR[] = ("mi");
static signed char DVE_NIGHT_IN_FR_FR[] = ("nuit");
static signed char DVE_LATE_NIGHT_IN_FR_FR[] = ("nocturne");
static signed char DVE_EARLY_IN_FR_FR[] = {
'd',0xC3,0xA9,'b','u','t',0x00,
};
static signed char DVE_MORNING_IN_FR_FR[] = {
'm','a','t','i','n',0xC3,0xA9,'e',0x00,
};
static signed char DVE_LATE_IN_FR_FR[] = ("fin");
static signed char DVE_AFTER_IN_FR_FR[] = {
'a','p','r',0xC3,0xA8,'s',0x00,
};
static signed char DVE_NOON_IN_FR_FR[] = ("midi");
static signed char DVE_EVENING_IN_FR_FR[] = {
's','o','i','r',0xC3,0xA9,'e',0x00,
};

static signed char SECOND_FR_FR[] = {
'd','e','u','x','i',0xC3,0xA8,'m','e',0x00,
};
static signed char THIRD_FR_FR[] = {
't','r','o','i','s','i',0xC3,0xA8,'m','e',0x00,
};
static signed char FOURTH_FR_FR[] = {
'q','u','a','t','r','i',0xC3,0xA8,'m','e',0x00,
};
static signed char FIFTH_FR_FR[] = {
'c','i','n','q','u','i',0xC3,0xA8,'m','e',0x00,
};
static signed char *(CALENDAR_ORDER_IN_FR_FR[]) = {
"",
"premier",
SECOND_FR_FR,
THIRD_FR_FR,
FOURTH_FR_FR,
FIFTH_FR_FR,
"et dernier",
// "de",
0x00,
};

static signed char *(CALENDAR_WK_IN_FR_FR[]) = {
"dim.","lun.","mar.","mer.","jeu.","ven.","sam.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_FR_FR[]) = {
"dimanche","lundi","mardi","mercredi","jeudi","vendredi","samedi",0x00,
};

static signed char CALENDAR_FIRST_DAY_MODIF_IN_FR_FR[] = {
'1',0xE1,0xB5,0x89,0xCA,0xB3,0x00,
};
static signed char *(CALENDAR_DAY_MODIF_IN_FR_FR[]) = {
"",
CALENDAR_FIRST_DAY_MODIF_IN_FR_FR,
0x00,
};

static signed char *(CALENDAR_DAY_IN_FR_FR[]) = {
"",
"1er",
0x00,
};

static signed char FEBRUARY_FR_FR[] = {
'f',0xC3,0xA9,'v','r','i','e','r',0x00,
};
static signed char AUGUST_FR_FR[] = {
'a','o',0xC3,0xBB,'t',0x00,
};
static signed char DECEMBER_FR_FR[] = {
'd',0xC3,0xA9,'c','e','m','b','r','e',0x00,
};
static signed char *(CALENDAR_MONTH_IN_FR_FR[]) = {
"",
"janvier",
FEBRUARY_FR_FR,
"mars",
"avril",
"mai",
"juin",
"juillet",
AUGUST_FR_FR,
"septembre",
"octobre",
"novembre",
DECEMBER_FR_FR,
0x00,
};

static signed char FEB_FR_FR[] = {
'f',0xC3,0xA9,'v','r','.',0x00,
};
static signed char DEC_FR_FR[] = {
'd',0xC3,0xA9,'c','.',0x00,
};
static signed char *(CALENDAR_MON_IN_FR_FR[]) = {
"",
"janv.",
FEB_FR_FR,
"mars",
"avr.",
"mai",
"juin",
"juil.",
AUGUST_FR_FR,
"sept.",
"oct.",
"nov.",
DEC_FR_FR,
0x00,
};

static signed char FEBRUARY_ORDER_FR_FR[] = {
'd','e',' ','f',0xC3,0xA9,'v','r','i','e','r',0x00,
};
static signed char AUGUST_ORDER_FR_FR[] = {
'd','\'','a','o',0xC3,0xBB,'t',0x00,
};
static signed char DECEMBER_ORDER_FR_FR[] = {
'd','e',' ','d',0xC3,0xA9,'c','e','m','b','r','e',0x00,
};
static signed char *(CALENDAR_MONTH_ORDER_IN_FR_FR[]) = {
"",
"de janvier",
FEBRUARY_ORDER_FR_FR,
"de mars",
"d'avril",
"de mai",
"de juin",
"de juillet",
AUGUST_ORDER_FR_FR,
"de septembre",
"d'octobre",
"de novembre",
DECEMBER_ORDER_FR_FR,
0x00,
};
