/* **** **** Data types

//*/


typedef void(__cdecl*(SIGHDR_T)) (int);
// SIGHDR_T(__cdecl signal(int(A), SIGHDR_T(B)));
// void(__cdecl*(__cdecl signal(int(A), void(__cdecl*(B)) (int)))) (int);
