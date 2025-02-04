/* Notes

Breton

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_BR_FR[] = ("Breton");
static signed char CALENDAR_LLSC_IN_BR_FR[] = {
0xCA,0x99,0xCA,0x80,0xE1,0xB4,0x87,0xE1,0xB4,0x9B,0xE1,0xB4,0x8F,0xC9,0xB4,0x00,
};
static signed char CALENDAR_NATIVE_IN_BR_FR[] = ("brezhoneg");
static signed char *CALENDAR_LLSC_NATIVE_IN_BR_FR = (CALENDAR_NATIVE_IN_BR_FR);

static signed char CALENDAR_DAY_THE_FIRST_IN_BR_FR[] = {
'1','a',0xC3,0xB1,0x00,
};

/*
static signed char *(CALENDAR_WK_IN_BR_FR[]) = {
"disul","dilun","dimeurzh","dimerc'her","diriaou","digwener","disadorn",0x00,
};
//*/

static signed char *(CALENDAR_WK_IN_BR_FR[]) = {
"Su.","Lu.","Meur.","Merc.","Ya.","Gw.","Sa.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_BR_FR[]) = {
"Sul","Lun","Meurzh","Merc'her","Yaou","Gwener","Sadorn",0x00,
};

static signed char *(CALENDAR_DAY_IN_BR_FR[]) = {
"",
CALENDAR_DAY_THE_FIRST_IN_BR_FR,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_BR_FR[]) = {
"","Genver","C'hwevrer","Meurzh","Ebrel","Mae","Mezheven","Gouere","Eost","Gwengolo","Here","Du","Kerzu",0x00,
};
