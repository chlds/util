/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WK_IN_HU[]) = {
"V","H","K","Sze","Cs","P","Szo",0x00,
};

static signed char sunday_hu[] = {
'v','a','s',0xC3,0xA1,'r','n','a','p',0x00,
};
static signed char monday_hu[] = {
'h',0xC3,0xA9,'t','f',0xC5,0x91,0x00,
};
static signed char thursday_hu[] = {
'c','s',0xC3,0xBC,'t',0xC3,0xB6,'r','t',0xC3,0xB6,'k',0x00,
};
static signed char friday_hu[] = {
'p',0xC3,0xA9,'n','t','e','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_HU[]) = {
sunday_hu,monday_hu,"kedd","szerda",thursday_hu,friday_hu,"szombat",0x00,
};

static signed char january_hu[] = {
'j','a','n','u',0xC3,0xA1,'r',0x00,
};
static signed char february_hu[] = {
'f','e','b','r','u',0xC3,0xA1,'r',0x00,
};
static signed char march_hu[] = {
'm',0xC3,0xA1,'r','c','i','u','s',0x00,
};
static signed char april_hu[] = {
0xC3,0xA1,'p','r','i','l','i','s',0x00,
};
static signed char may_hu[] = {
'm',0xC3,0xA1,'j','u','s',0x00,
};
static signed char june_hu[] = {
'j',0xC3,0xBA,'n','i','u','s',0x00,
};
static signed char july_hu[] = {
'j',0xC3,0xBA,'l','i','u','s',0x00,
};
static signed char october_hu[] = {
'o','k','t',0xC3,0xB3,'b','e','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_HU[]) = {
"",january_hu,february_hu,march_hu,april_hu,may_hu,june_hu,july_hu,"augusztus","szeptember",october_hu,"november","december",0x00,
};
