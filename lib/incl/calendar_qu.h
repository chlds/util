/* Notes

Quechua

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_QU[] = ("Quechua");
static signed char CALENDAR_LLSC_IN_QU[] = {
'q',0xE1,0xB4,0x9C,0xE1,0xB4,0x87,0xE1,0xB4,0x84,0xCA,0x9C,0xE1,0xB4,0x9C,0xE1,0xB4,0x80,0x00,
};
static signed char CALENDAR_NATIVE_IN_QU[] = ("Runa simi");
static signed char CALENDAR_LLSC_NATIVE_IN_QU[] = {
0xCA,0x80,0xE1,0xB4,0x9C,0xC9,0xB4,0xE1,0xB4,0x80,0x20,\
0xEA,0x9C,0xB1,0xC9,0xAA,0xE1,0xB4,0x8D,0xC9,0xAA,\
0x00,
};

static signed char WEDNESDAY_QU[] = {
'M','i',0xC3,0xA9,'r','c','o','l','e','s',0x00,
};
static signed char SATURDAY_QU[] = {
'S',0xC3,0xA1,'b','a','d','o',0x00,
};
static signed char *(CALENDAR_WEEK_IN_QU[]) = {
"Domingo",
"Lunes",
"Martes",
WEDNESDAY_QU,
"Jueves",
"Viernes",
SATURDAY_QU,
0x00,
};

static signed char WED_QU[] = {
'M','i',0xC3,0xA9,0x00,
};
static signed char SAT_QU[] = {
'S',0xC3,0xA1,'b',0x00,
};
static signed char *(CALENDAR_WK_IN_QU[]) = {
"Dom",
"Lun",
"Mar",
WED_QU,
"Jue",
"Vie",
SAT_QU,
0x00,
};

static signed char *(CALENDAR_W_IN_QU[]) = {
"D",
"L",
"M",
"X",
"J",
"V",
"S",
0x00,
};

static signed char *(CALENDAR_MONTH_IN_QU[]) = {
"",
"Enero",
"Febrero",
"Marzo",
"Abril",
"Mayo",
"Junio",
"Julio",
"Agosto",
"Setiembre",
"Octubre",
"Noviembre",
"Diciembre",
0x00,
};

static signed char *(CALENDAR_MON_IN_QU[]) = {
"",
"Ene",
"Feb",
"Mar",
"Abr",
"May",
"Jun",
"Jul",
"Ago",
"Set",
"Oct",
"Nov",
"Dic",
0x00,
};
