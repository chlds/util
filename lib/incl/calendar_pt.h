/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WK_IN_PT[]) = {
"Dom.","2a.","3a.","4a.","5a.","6a.","Sab.",0x00,
};

static signed char tuesday_pt[] = {
't','e','r',0xC3,0xA7,'a','-','f','e','i','r','a',0x00,
};
static signed char saturday_pt[] = {
's',0xC3,0xA1,'b','a','d','o',0x00,
};
static signed char *(CALENDAR_WEEK_IN_PT[]) = {
"domingo","segunda-feira",tuesday_pt,"quarta-feira","quinta-feira","sexta-feira",saturday_pt,0x00,
};

static signed char marco[] = {
'm','a','r',0xC3,0xA7,'o',0x00,
};
static signed char *(CALENDAR_MONTH_IN_PT[]) = {
"","janeiro","fevereiro",marco,"abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro",0x00,
};
