/* Notes

Latin

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_LL[] = ("Latin");
static signed char CALENDAR_LLSC_IN_LL[] = {
0xCA,0x9F,0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xC9,0xAA,0xC9,0xB4,\
0x00,
};
static signed char CALENDAR_NATIVE_IN_LL[] = ("Lingua Latina");
static signed char CALENDAR_LLSC_NATIVE_IN_LL[] = {
0xCA,0x9F,0xC9,0xAA,0xC9,0xB4,0xC9,0xA2,0xE1,0xB4,0x9C,0xE1,0xB4,0x80,\
' ',0xCA,0x9F,0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xC9,0xAA,0xC9,0xB4,0xE1,0xB4,0x80,\
0x00,
};

static signed char CALENDAR_ROMAN_IN_LL[] = ("Roman");
static signed char CALENDAR_ROMAN_LLSC_IN_LL[] = {
0xCA,0x80,0xE1,0xB4,0x8F,0xE1,0xB4,0x8D,\
0xE1,0xB4,0x80,0xC9,0xB4,\
0x00,
};
static signed char CALENDAR_CALENDAR_IN_LL[] = ("Calendar");
static signed char CALENDAR_CALENDAR_LLSC_IN_LL[] = {
0xE1,0xB4,0x84,0xE1,0xB4,0x80,0xCA,0x9F,\
0xE1,0xB4,0x87,0xC9,0xB4,0xE1,0xB4,0x85,\
0xE1,0xB4,0x80,0xCA,0x80,\
0x00,
};
static signed char CALENDAR_NUMERALS_IN_LL[] = ("Numerals");
static signed char CALENDAR_NUMERALS_LLSC_IN_LL[] = {
0xC9,0xB4,0xE1,0xB4,0x9C,0xE1,0xB4,0x8D,\
0xE1,0xB4,0x87,0xCA,0x80,0xE1,0xB4,0x80,0xCA,0x9F,\
0xEA,0x9C,0xB1,\
0x00,
};

static signed char *(CALENDAR_WEEK_IN_LL[]) = {
"SOLIS",
"LVNAE",
"MARTIS",
"MERCVRII",
"IOVIS",
"VENERIS",
"SATVRNI",
0x00,
};

static signed char *(CALENDAR_WK_IN_LL[]) = {
"SO",
"L",
"MA",
"ME",
"I",
"V",
"SA",
0x00,
};

static signed char *(CALENDAR_WEEK_SS_IN_LL[]) = {
"Solis",
"Lunae",
"Martis",
"Mercurii",
"Iovis",
"Veneris",
"Saturni",
0x00,
};

// in Carolingian minuscule
static signed char *(CALENDAR_WK_SS_IN_LL[]) = {
"So.",
"L.",
"Ma.",
"Me.",
"I.",
"V.",
"Sa.",
0x00,
};

static signed char *(CALENDAR_DAY_IN_LL[]) = {
"","I","II","III","IV","V","VI","VII","VIII","IX",\
"X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX",\
"XX","XXI","XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX",\
"XXX","XXXI",\
0x00,
};

static signed char *(CALENDAR_DAY_S_IN_LL[]) = {
"","i","ii","iii","iv","v","vi","vii","viii","ix",\
"x","xi","xii","xiii","xiv","xv","xvi","xvii","xviii","xix",\
"xx","xxi","xxii","xxiii","xxiv","xxv","xxvi","xxvii","xxviii","xxix",\
"xxx","xxxi",\
0x00,
};

// more correctly written as Romans did not have a 'J' or a 'U' in their alphabet..
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_LL[]) = {
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

static signed char *(CALENDAR_MONTH_GENITIVE_SINGULAR_MASCULINE_IN_LL[]) = {
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

static signed char *(CALENDAR_MON_IN_LL[]) = {
"",
"IAN",
"FEB",
"MART",
"APR",
"MAI",
"IVN",
"IVL",
"AVG",
"SEPT",
"OCT",
"NOV",
"DEC",
0x00,
};

static signed char *(CALENDAR_MONTH_NOMINATIVE_SS_IN_LL[]) = {
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

static signed char *(CALENDAR_MONTH_GENITIVE_SINGULAR_MASCULINE_SS_IN_LL[]) = {
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

static signed char *(CALENDAR_MONTH_GENITIVE_PLURAL_MASCULINE_SS_IN_LL[]) = {
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

// in Carolingian minuscule
static signed char *(CALENDAR_MON_SS_IN_LL[]) = {
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
