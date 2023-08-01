/* Notes

French

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_FR_FR[] = ("French");
static signed char CALENDAR_LLSC_IN_FR_FR[] = {
'F',0xCA,0x80,0xE1,0xB4,0x87,0xC9,0xB4,0xE1,0xB4,0x84,0xCA,0x9C,0x00,
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
