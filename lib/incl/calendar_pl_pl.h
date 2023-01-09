/* Notes

Polish

Remarks:
Based on UTF-8
*/


static signed char WED_PL_PL[] = {
0xC5,0x9B,'r','.',0x00,
};
static signed char *(CALENDAR_WK_IN_PL_PL[]) = {
"niedz.",
"pon.",
"wt.",
WED_PL_PL,
"czw.",
"pt.",
"sob.",
0x00,
};

static signed char poniedzialek[] = {
'p','o','n','i','e','d','z','i','a',0xC5,0x82,'e','k',0x00,
};
static signed char sroda[] = {
0xC5,0x9B,'r','o','d','a',0x00,
};
static signed char piatek[] = {
'p','i',0xC4,0x85,'t','e','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_PL_PL[]) = {
"niedziela",
poniedzialek,
"wtorek",
sroda,
"czwartek",
piatek,
"sobota",
0x00,
};

/*
static signed char styczen[] = {
's','t','y','c','z','e',0xC5,0x84,0x00,
};
static signed char kwiecien[] = {
'k','w','i','e','c','i','e',0xC5,0x84,0x00,
};
static signed char sierpien[] = {
's','i','e','r','p','i','e',0xC5,0x84,0x00,
};
static signed char wrzesien[] = {
'w','r','z','e','s','i','e',0xC5,0x84,0x00,
};
static signed char pazdziernik[] = {
'p','a',0xC5,0xBA,'d','z','i','e','r','n','i','k',0x00,
};
static signed char grudzien[] = {
'g','r','u','d','z','i','e',0xC5,0x84,0x00,
};
static signed char *(CALENDAR_MONTH_IN_PL_PL[]) = {
"",
styczen,
"luty",
"marzec",
kwiecien,
"maj",
"czerwiec",
"lipiec",
sierpien,
wrzesien,
pazdziernik,
"listopad",
grudzien,
0x00,
};
//*/

// genitives
static signed char wrzesnia[] = {
'w','r','z','e',0xC5,0x9B,'n','i','a',0x00,
};
static signed char pazdziernika[] = {
'p','a',0xC5,0xBA,'d','z','i','e','r','n','i','k','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_PL_PL[]) = {
"",
"stycznia",
"lutego",
"marca",
"kwietnia",
"maja",
"czerwca",
"lipca",
"sierpnia",
wrzesnia,
pazdziernika,
"listopada",
"grudnia",
0x00,
};
