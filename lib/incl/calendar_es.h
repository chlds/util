/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WK_IN_ES[]) = {
"D","L","M","X","J","V","S",0x00,
};

static signed char miercoles[] = {
'm','i',0xC3,0xA9,'r','c','o','l','e','s',0x00,
};
static signed char sabado[] = {
's',0xC3,0xA1,'b','a','d','o',0x00,
};
static signed char *(CALENDAR_WEEK_IN_ES[]) = {
"domingo","lunes","martes",miercoles,"jueves","viernes",sabado,0x00,
};

static signed char *(CALENDAR_MONTH_IN_ES[]) = {
"","enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre",0x00,
};
