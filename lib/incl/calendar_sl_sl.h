/* Notes

Slovene / Slovenian
C4.8C/C4.8D : Latin Capital/Small Letter C with Caron
C5.A0/C5.A1 : Latin Capital/Small Letter S with Caron
C5.BD/C5.BE : Latin Capital/Small Letter Z with Caron

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_SL_SL[] = ("Slovene / Slovenian");
static signed char CALENDAR_LLSC_IN_SL_SL[] = {
'S',0xCA,0x9F,0xE1,0xB4,0x8F,0xE1,0xB4,0xA0,0xE1,0xB4,0x87,0xC9,0xB4,0xE1,0xB4,0x87,\
' ','/',\
' ','S',0xCA,0x9F,0xE1,0xB4,0x8F,0xE1,0xB4,0xA0,0xE1,0xB4,0x87,0xC9,0xB4,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,\
0x00,
};

static signed char CALENDAR_NATIVE_IN_SL_SL[] = {
's','l','o','v','e','n','s','k','i',' ','j','e','z','i','k',\
' ','/',' ',\
's','l','o','v','e','n',0xC5,0xA1,0xC4,0x8D,'i','n','a',\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_SL_SL = (CALENDAR_NATIVE_IN_SL_SL);

static signed char FOURTH_FEM_SL_SL[] = {
0xC4,0x8D,'e','t','r','t','a',0x00,
};
static signed char *(CALENDAR_ORDER_FEMININE_IN_SL_SL[]) = {
"",
"prva",
"druga",
"tretja",
FOURTH_FEM_SL_SL,
"peta",
"in zadnja",
"v",
0x00,
};

static signed char FOURTH_MASC_SL_SL[] = {
0xC4,0x8D,'e','t','r','t','i',0x00,
};
static signed char *(CALENDAR_ORDER_MASCULINE_IN_SL_SL[]) = {
"",
"prvi",
"drugi",
"tretji",
FOURTH_MASC_SL_SL,
"peti",
"in zadnji",
"v",
0x00,
};

static signed char FOURTH_NEUT_SL_SL[] = {
0xC4,0x8D,'e','t','r','t','o',0x00,
};
static signed char *(CALENDAR_ORDER_NEUTER_IN_SL_SL[]) = {
"",
"prvo",
"drugo",
"tretje",
FOURTH_NEUT_SL_SL,
"peto",
"in zadnje",
"v",
0x00,
};

static signed char THURSDAY_SL_SL[] = {
0xC4,0x8D,'e','t','r','t','e','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_SL_SL[]) = {
"nedelja",
"ponedeljek",
"torek",
"sreda",
THURSDAY_SL_SL,
"petek",
"sobota",
0x00,
};

static signed char THU_SL_SL[] = {
0xC4,0x8D,'e','t','.',0x00,
};
static signed char *(CALENDAR_WK_IN_SL_SL[]) = {
"ned.",
"pon.",
"tor.",
"sre.",
THU_SL_SL,
"pet.",
"sob.",
0x00,
};

static signed char *(CALENDAR_MONTH_ORDER_IN_SL_SL[]) = {
"",
"januarju",
"februarju",
"marcu",
"aprilu",
"maju",
"juniju",
"juliju",
"avgustu",
"septembru",
"oktobru",
"novembru",
"decembru",
0x00,
};

static signed char *(CALENDAR_MONTH_IN_SL_SL[]) = {
"",
"januar",
"februar",
"marec",
"april",
"maj",
"junij",
"julij",
"avgust",
"september",
"oktober",
"november",
"december",
0x00,
};
