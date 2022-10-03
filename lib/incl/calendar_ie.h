/* Notes

Based on UTF-8
*/


static signed char tue_ie[] = {
'M',0xC3,0xA1,'.',0x00,
};
static signed char wed_ie[] = {
'C',0xC3,0xA9,'.',0x00,
};
static signed char thu_ie[] = {
'D',0xC3,0xA9,'.',0x00,
};
static signed char *(CALENDAR_WK_IN_IE[]) = {
"Do.","Lu.",tue_ie,wed_ie,thu_ie,"Ao.","Sa.",0x00,
};

static signed char sunday_ie[] = {
'D',0xC3,0xA9,' ','D','o','m','h','n','a','i','g','h',0x00,
};
static signed char monday_ie[] = {
'D',0xC3,0xA9,' ','L','u','a','i','n',0x00,
};
static signed char tuesday_ie[] = {
'D',0xC3,0xA9,' ','M',0xC3,0xA1,'i','r','t',0x00,
};
static signed char wednesday_ie[] = {
'D',0xC3,0xA9,' ','C',0xC3,0xA9,'a','d','a','o','i','n',0x00,
};
static signed char thursday_ie[] = {
'D',0xC3,0xA9,'a','r','d','a','o','i','n',0x00,
};
static signed char friday_ie[] = {
'D',0xC3,0xA9,' ','h','A','o','i','n','e',0x00,
};
static signed char saturday_ie[] = {
'D',0xC3,0xA9,' ','S','a','t','h','a','i','r','n',0x00,
};
static signed char *(CALENDAR_WEEK_IN_IE[]) = {
sunday_ie,monday_ie,tuesday_ie,wednesday_ie,thursday_ie,friday_ie,saturday_ie,0x00,
};

static signed char january_ie[] = {
'E','a','n',0xC3,0xA1,'i','r',0x00,
};
static signed char march_ie[] = {
'M',0xC3,0xA1,'r','t','a',0x00,
};
static signed char april_ie[] = {
'A','i','b','r','e',0xC3,0xA1,'n',0x00,
};
static signed char july_ie[] = {
'I',0xC3,0xBA,'i','l',0x00,
};
static signed char august_ie[] = {
'L',0xC3,0xBA,'n','a','s','a',0x00,
};
static signed char september_ie[] = {
'M','e',0xC3,0xA1,'n',' ','F',0xC3,0xB3,'m','h','a','i','r',0x00,
};
static signed char october_ie[] = {
'D','e','i','r','e','a','d','h',' ','F',0xC3,0xB3,'m','h','a','i','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_IE[]) = {
"",january_ie,"Feabhra",march_ie,april_ie,"Bealtaine","Meitheamh",july_ie,august_ie,september_ie,october_ie,"Samhain","Nollaig",0x00,
};
