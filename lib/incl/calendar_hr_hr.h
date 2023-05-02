/* Notes

Croatian

Remarks:
Latin Capital Letter C with Caron: C4.8C
Latin Small Letter C with Caron: C4.8D
Latin Capital Letter Z with Caron: C5.BD
Latin Small Letter Z with Caron: C5.BE
Based on UTF-8
*/


static signed char CALENDAR_CROATIAN_IN_HR_HR[] = ("Croatian");
static signed char CALENDAR_LLSC_CROATIAN_IN_HR_HR[] = {
'C',0xCA,0x80,0xE1,0xB4,0x8F,0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char THURSDAY_HR_HR[] = {
0xC4,0x8D,'e','t','v','r','t','a','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_HR_HR[]) = {
"nedjelja",
"ponedjeljak",
"utorak",
"srijeda",
THURSDAY_HR_HR,
"petak",
"subota",
0x00,
};

static signed char THU_HR_HR[] = {
0xC4,0x8D,'e','t',0x00,
};
static signed char *(CALENDAR_WK_IN_HR_HR[]) = {
"ned",
"pon",
"uto",
"sri",
THU_HR_HR,
"pet",
"sub",
0x00,
};

static signed char JANUARY_HR_HR[] = {
's','i','j','e',0xC4,0x8D,'n','j','a',0x00,
};
static signed char FEBRUARY_HR_HR[] = {
'v','e','l','j','a',0xC4,0x8D,'e',0x00,
};
static signed char MARCH_HR_HR[] = {
'o',0xC5,0xBE,'u','j','k','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_HR_HR[]) = {
"",
JANUARY_HR_HR,
FEBRUARY_HR_HR,
MARCH_HR_HR,
"travnja",
"svibnja",
"lipnja",
"srpnja",
"kolovoza",
"rujna",
"listopada",
"studenoga",
"prosinca",
0x00,
};
