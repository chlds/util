/* Notes

Latin

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_LL[] = ("Latin");
static signed char CALENDAR_LLSC_IN_LL[] = {
'L',0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xC9,0xAA,0xC9,0xB4,0x00,
};

static signed char CALENDAR_NATIVE_IN_LL[] = ("Lingua Latina");
static signed char CALENDAR_LLSC_NATIVE_IN_LL[] = {
'L',0xC9,0xAA,0xC9,0xB4,0xC9,0xA2,0xE1,0xB4,0x9C,0xE1,0xB4,0x80,' ','L',0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xC9,0xAA,0xC9,0xB4,0xE1,0xB4,0x80,0x00,
};

static signed char *(CALENDAR_WEEK_IN_LL[]) = {
"dies Solis",
"dies Lunae",
"dies Martis",
"dies Mercurii",
"dies Iovis",
"dies Veneris",
"dies Saturni",
0x00,
};

static signed char *(CALENDAR_WK_IN_LL[]) = {
"So.",
"L.",
"Ma.",
"Me.",
"I.",
"V.",
"Sa.",
0x00,
};

// more correctly written as Romans did not have a 'J' or a 'U' in their alphabet..
static signed char *(CALENDAR_MONTH_JU_NOMINATIVE_IN_LL[]) = {
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

// more correctly written as Romans did not have a 'J' or a 'U' in their alphabet..
static signed char *(CALENDAR_MONTH_JU_GENITIVE_SINGULAR_MASCULINE_IN_LL[]) = {
"",
"IANVARII",
"FEBRVARII",
"MARTII",
"APRILIS",
"MAII",
"IVNII",
"IVLII",
"AVGVSTI",
"SEPTEMBRIS",
"OCTOBRIS",
"NOVEMBRIS",
"DECEMBRIS",
0x00,
};

// more correctly written as Romans did not have a 'J' or a 'U' in their alphabet..
static signed char *(CALENDAR_MON_JU_IN_LL[]) = {
"",
"IAN.",
"FEB.",
"MART.",
"APR.",
"MAI.",
"IVN.",
"IVL.",
"AVG.",
"SEPT.",
"OCT.",
"NOV.",
"DEC.",
0x00,
};

static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_LL[]) = {
"",
"Ianuarius",
"Februarius",
"Martius",
"Aprilis",
"Maius",
"Iunius",
"Iulius",
"Augustus",
"September",
"October",
"November",
"December",
0x00,
};

static signed char *(CALENDAR_MONTH_GENITIVE_SINGULAR_MASCULINE_IN_LL[]) = {
"",
"Ianuarii",
"Februarii",
"Martii",
"Aprilis",
"Maii",
"Iunii",
"Iulii",
"Augusti",
"Septembris",
"Octobris",
"Novembris",
"Decembris",
0x00,
};

static signed char *(CALENDAR_MONTH_GENITIVE_PLURAL_MASCULINE_IN_LL[]) = {
"",
"Ianuariorum",
"Februariorum",
"Martiorum",
"Aprilium",
"Maiorum",
"Iuniorum",
"Iuliorum",
"Augustorum",
"Septembrium",
"Octobrium",
"Novembrium",
"Decembrium",
0x00,
};

static signed char *(CALENDAR_MON_IN_LL[]) = {
"",
"Ian.",
"Feb.",
"Mart.",
"Apr.",
"Mai.",
"Iun.",
"Iul.",
"Aug.",
"Sept.",
"Oct.",
"Nov.",
"Dec.",
0x00,
};
