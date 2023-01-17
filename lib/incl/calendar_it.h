/* Notes

Italian

Remarks:
Based on UTF-8
*/


static signed char *(CALENDAR_WK_IN_IT[]) = {
"dom",
"lun",
"mar",
"mer",
"gio",
"ven",
"sab",
0x00,
};

static signed char lunedi[] = {
'l','u','n','e','d',0xC3,0xAC,0x00,
};
static signed char martedi[] = {
'm','a','r','t','e','d',0xC3,0xAC,0x00,
};
static signed char mercoledi[] = {
'm','e','r','c','o','l','e','d',0xC3,0xAC,0x00,
};
static signed char giovedi[] = {
'g','i','o','v','e','d',0xC3,0xAC,0x00,
};
static signed char venerdi[] = {
'v','e','n','e','r','d',0xC3,0xAC,0x00,
};
static signed char *(CALENDAR_WEEK_IN_IT[]) = {
"domenica",lunedi,martedi,mercoledi,giovedi,venerdi,"sabato",0x00,
};

static signed char first_it[] = {
'1',0xC2,0xBA,0x00,
};
static signed char *(CALENDAR_DAY_IN_IT[]) = {
"",first_it,0x00,
};

static signed char *(CALENDAR_MONTH_IN_IT[]) = {
"","gennaio","febbraio","marzo","aprile","maggio","giugno","luglio","agosto","settembre","ottobre","novembre","dicembre",0x00,
};
