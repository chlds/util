/* Notes

Spanish

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_SPANISH_IN_ES_ES[] = ("Spanish");
static signed char CALENDAR_LLSC_SPANISH_IN_ES_ES[] = {
'S',0xE1,0xB4,0x98,0xE1,0xB4,0x80,0xC9,0xB4,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,0x00,
};

static signed char AND_LAST_ES_ES[] = {
'y',' ',0xC3,0xBA,'l','t','i','m','o',0x00,
};
static signed char *(CALENDAR_ORDER_IN_ES_ES[]) = {
"",
"primer",
"segundo",
"tercer",
"cuarto",
"quinto",
AND_LAST_ES_ES,
"de",
0x00,
};

static signed char *(CALENDAR_WK_IN_ES_ES[]) = {
"D",
"L",
"M",
"X",
"J",
"V",
"S",
0x00,
};

static signed char WEDNESDAY_ES_ES[] = {
'm','i',0xC3,0xA9,'r','c','o','l','e','s',0x00,
};
static signed char SATURDAY_ES_ES[] = {
's',0xC3,0xA1,'b','a','d','o',0x00,
};
static signed char *(CALENDAR_WEEK_IN_ES_ES[]) = {
"domingo",
"lunes",
"martes",
WEDNESDAY_ES_ES,
"jueves",
"viernes",
SATURDAY_ES_ES,
0x00,
};

static signed char *(CALENDAR_DAY_IN_ES_ES[]) = {
"",
"primero",
0x00,
};

static signed char *(CALENDAR_MONTH_IN_ES_ES[]) = {
"",
"enero",
"febrero",
"marzo",
"abril",
"mayo",
"junio",
"julio",
"agosto",
"septiembre",
"octubre",
"noviembre",
"diciembre",
0x00,
};
