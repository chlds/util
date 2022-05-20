/* Notes

Based on UTF-8
//*/


signed char wk_fr_0[] = ("dimanche");
signed char wk_fr_1[] = ("lundi");
signed char wk_fr_2[] = ("mardi");
signed char wk_fr_3[] = ("mercredi");
signed char wk_fr_4[] = ("jeudi");
signed char wk_fr_5[] = ("vendredi");
signed char wk_fr_6[] = ("samedi");
signed char *(CALENDAR_WEEK_IN_FR[]) = {
wk_fr_0,wk_fr_1,wk_fr_2,wk_fr_3,wk_fr_4,wk_fr_5,wk_fr_6,0x00,
};

signed char mo_fr_0[] = ("janvier");
signed char mo_fr_1[] = {
'f',0xC3,0xA9,'v','r','i','e','r',0x00,
};
signed char mo_fr_2[] = ("mars");
signed char mo_fr_3[] = ("avril");
signed char mo_fr_4[] = ("mai");
signed char mo_fr_5[] = ("juin");
signed char mo_fr_6[] = ("juillet");
signed char mo_fr_7[] = {
'a','o',0xC3,0xBB,'t',0x00,
};
signed char mo_fr_8[] = ("septembre");
signed char mo_fr_9[] = ("octobre");
signed char mo_fr_a[] = ("novembre");
signed char mo_fr_b[] = {
'd',0xC3,0xA9,'c','e','m','b','r','e',0x00,
};
signed char *(CALENDAR_MONTH_IN_FR[]) = {
"",mo_fr_0,mo_fr_1,mo_fr_2,mo_fr_3,mo_fr_4,mo_fr_5,mo_fr_6,mo_fr_7,mo_fr_8,mo_fr_9,mo_fr_a,mo_fr_b,0x00,
};
