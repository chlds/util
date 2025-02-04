/* Notes

Bosnian
C4.8C/C4.8D : Latin Capital/Small Letter C with Caron
C4.90/C4.91 : Latin Capital/Small Letter D with Stroke
C4.9A/C4.9B : Latin Capital/Small Letter E with Caron
C5.87/C5.88 : Latin Capital/Small Letter N with Caron
C5.98/C5.99 : Latin Capital/Small Letter R with Caron
C5.A0/C5.A1 : Latin Capital/Small Letter S with Caron
C5.BD/C5.BE : Latin Capital/Small Letter Z with Caron
C7.84/C7.86 : Latin Capital/Small Letter Dz with Caron
C7.85 : Latin Capital Letter D with Small Letter Z with Caron
C7.87/C7.89 : Latin Capital/Small Letter Lj
C7.88 : Latin Capital Letter L with Small Letter J
C7.8A/C7.8C : Latin Capital/Small Letter Nj
C7.8B : Latin Capital Letter N with Small Letter J

Remarks:
Feminine, masculine life, masculine non-life and neuter
Based on UTF-8
*/


static signed char CALENDAR_IN_BS_LATN_BA[] = ("Bosnian");
static signed char CALENDAR_LLSC_IN_BS_LATN_BA[] = {
0xCA,0x99,0xE1,0xB4,0x8F,0xEA,0x9C,0xB1,0xC9,0xB4,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};
static signed char CALENDAR_NATIVE_IN_BS_LATN_BA[] = ("bosanski");
static signed char *CALENDAR_LLSC_NATIVE_IN_BS_LATN_BA = (CALENDAR_NATIVE_IN_BS_LATN_BA);

static signed char THURSDAY_BS_LATN_BA[] = {
0xC4,0x8D,'e','t','v','r','t','a','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_BS_LATN_BA[]) = {
"nedjelja",
"ponedjeljak",
"utorak",
"srijeda",
THURSDAY_BS_LATN_BA,
"petak",
"subota",
0x00,
};

static signed char THU_BS_LATN_BA[] = {
0xC4,0x8D,'e','t',0x00,
};
static signed char *(CALENDAR_WK_IN_BS_LATN_BA[]) = {
"ned",
"pon",
"uto",
"sri",
THU_BS_LATN_BA,
"pet",
"sub",
0x00,
};

static signed char *(CALENDAR_MONTH_IN_BS_LATN_BA[]) = {
"",
"januar",
"februar",
"mart",
"april",
"maj",
"juni",
"juli",
"august",
"septembar",
"oktobar",
"novembar",
"decembar",
0x00,
};

static signed char *(CALENDAR_MON_IN_BS_LATN_BA[]) = {
"",
"jan",
"feb",
"mar",
"apr",
"maj",
"jun",
"jul",
"aug",
"sep",
"okt",
"nov",
"dec",
0x00,
};
