/* Notes

French

Remarks:
Based on UTF-8
*/


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
"de",
0x00,
};

static signed char *(CALENDAR_WK_IN_FR_FR[]) = {
"dim.","lun.","mar.","mer.","jeu.","ven.","sam.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_FR_FR[]) = {
"dimanche","lundi","mardi","mercredi","jeudi","vendredi","samedi",0x00,
};

static signed char *(CALENDAR_DAY_IN_FR[]) = {
"","1er",0x00,
};

static signed char fevrier[] = {
'f',0xC3,0xA9,'v','r','i','e','r',0x00,
};
static signed char aout[] = {
'a','o',0xC3,0xBB,'t',0x00,
};
static signed char decembre[] = {
'd',0xC3,0xA9,'c','e','m','b','r','e',0x00,
};
static signed char *(CALENDAR_MONTH_IN_FR_FR[]) = {
"","janvier",fevrier,"mars","avril","mai","juin","juillet",aout,"septembre","octobre","novembre",decembre,0x00,
};
