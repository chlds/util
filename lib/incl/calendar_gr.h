/* Notes

Greek alphabet
Letter  small capital
Alpha   CE.B1 CE.91
Beta    CE.B2 CE.92
Gamma   CE.B3 CE.93
Delta   CE.B4 CE.94
Epsilon CE.B5 CE.95
Zeta    CE.B6 CE.96
Eta     CE.B7 CE.97
Theta   CE.B8 CE.98
Iota    CE.B9 CE.99
Kappa   CE.BA CE.9A
Lambda  CE.BB CE.9B
Mu      CE.BC CE.9C
Nu      CE.BD CE.9D
Xi      CE.BE CE.9E
Omicron CE.BF CE.9F
Pi      CF.80 CE.A0
Rho     CF.81 CE.A1
Sigma   CF.83 CE.A3
Tau     CF.84 CE.A4
Upsilon CF.85 CE.A5
Phi     CF.86 CE.A6
Chi     CF.87 CE.A7
Psi     CF.88 CE.A8
Omega   CF.89 CE.A9

Remarks:
Based on UTF-8
//*/


static signed char sun_gr[] = {
0xCE,0x9A,'.',0x00,
};
static signed char mon_gr[] = {
0xCE,0x94,'.',0x00,
};
static signed char tue_gr[] = {
0xCE,0xA4,0xCF,0x81,'.',0x00,
};
static signed char wed_gr[] = {
0xCE,0xA4,0xCE,0xB5,'.',0x00,
};
static signed char thu_gr[] = {
0xCE,0xA0,0xCE,0xAD,'.',0x00,
};
static signed char fri_gr[] = {
0xCE,0xA0,0xCE,0xB1,'.',0x00,
};
static signed char sat_gr[] = {
0xCE,0xA3,'.',0x00,
};
static signed char *(CALENDAR_WK_IN_GR[]) = {
sun_gr,mon_gr,tue_gr,wed_gr,thu_gr,fri_gr,sat_gr,0x00,
};

static signed char sunday_gr[] = {
0xCE,0x9A,0xCF,0x85,0xCF,0x81,0xCE,0xB9,0xCE,0xB1,0xCE,0xBA,0xCE,0xAE,0x00,
};
static signed char monday_gr[] = {
0xCE,0x94,0xCE,0xB5,0xCF,0x85,0xCF,0x84,0xCE,0xAD,0xCF,0x81,0xCE,0xAE,0x00,
};
static signed char tuesday_gr[] = {
0xCE,0xA4,0xCF,0x81,0xCE,0xAF,0xCF,0x84,0xCE,0xB7,0x00,
};
static signed char wednesday_gr[] = {
0xCE,0xA4,0xCE,0xB5,0xCF,0x84,0xCE,0xAC,0xCF,0x81,0xCF,0x84,0xCE,0xB7,0x00,
};
static signed char thursday_gr[] = {
0xCE,0xA0,0xCE,0xAD,0xCE,0xBC,0xCF,0x80,0xCF,0x84,0xCE,0xB7,0x00,
};
static signed char friday_gr[] = {
0xCE,0xA0,0xCE,0xB1,0xCF,0x81,0xCE,0xB1,0xCF,0x83,0xCE,0xBA,0xCE,0xB5,0xCF,0x85,0xCE,0xAE,0x00,
};
static signed char saturday_gr[] = {
0xCE,0xA3,0xCE,0xAC,0xCE,0xB2,0xCE,0xB2,0xCE,0xB1,0xCF,0x84,0xCE,0xBF,0x00,
};
static signed char *(CALENDAR_WEEK_IN_GR[]) = {
sunday_gr,monday_gr,tuesday_gr,wednesday_gr,thursday_gr,friday_gr,saturday_gr,0x00,
};

static signed char january_gr[] = {
0xCE,0x99,0xCE,0xB1,0xCE,0xBD,0xCE,0xBF,0xCF,0x85,0xCE,0xB1,0xCF,0x81,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char february_gr[] = {
0xCE,0xA6,0xCE,0xB5,0xCE,0xB2,0xCF,0x81,0xCE,0xBF,0xCF,0x85,0xCE,0xB1,0xCF,0x81,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char march_gr[] = {
0xCE,0x9C,0xCE,0xB1,0xCF,0x81,0xCF,0x84,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char april_gr[] = {
0xCE,0x91,0xCF,0x80,0xCF,0x81,0xCE,0xB9,0xCE,0xBB,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char may_gr[] = {
0xCE,0x9C,0xCE,0xB1,0xCE,0x90,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char june_gr[] = {
0xCE,0x99,0xCE,0xBF,0xCF,0x85,0xCE,0xBD,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char july_gr[] = {
0xCE,0x99,0xCE,0xBF,0xCF,0x85,0xCE,0xBB,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char august_gr[] = {
0xCE,0x91,0xCF,0x85,0xCE,0xB3,0xCE,0xBF,0xCF,0x8D,0xCF,0x83,0xCF,0x84,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char september_gr[] = {
0xCE,0xA3,0xCE,0xB5,0xCF,0x80,0xCF,0x84,0xCE,0xB5,0xCF,0x80,0xCE,0xB2,0xCF,0x81,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char october_gr[] = {
0xCE,0x9F,0xCE,0xBA,0xCF,0x84,0xCF,0x89,0xCE,0xB2,0xCF,0x81,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char november_gr[] = {
0xCE,0x9D,0xCE,0xBF,0xCE,0xB5,0xCE,0xBC,0xCE,0xB2,0xCF,0x81,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char december_gr[] = {
0xCE,0x94,0xCE,0xB5,0xCE,0xBA,0xCE,0xB5,0xCE,0xBC,0xCE,0xB2,0xCF,0x81,0xCE,0xAF,0xCE,0xBF,0xCF,0x85,0x00,
};
static signed char *(CALENDAR_MONTH_IN_GR[]) = {
"",january_gr,february_gr,march_gr,april_gr,may_gr,june_gr,july_gr,august_gr,september_gr,october_gr,november_gr,december_gr,0x00,
};
