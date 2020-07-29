/*

The object-like macros and function-like macros for Typewriter

Remarks:
Refer at ./config_ty.h and cli.h
*/


typedef void(__cdecl*(SIGHDR_T)) (signed);
// SIGHDR_T(__cdecl signal(signed(A), SIGHDR_T(B)));
// void(__cdecl*(__cdecl signal(signed(A), void(__cdecl*(B)) (signed)))) (signed);

# define SHL(A,B) A = (A<<(B))
# define SHR(A,B) A = (A>>(B))
# define DEC(A) --(A)
# define INC(A) (A)++
// Op

# define R(D,S) (S).D
// Data

# define ADD(A,B) A = (B+(A))
// Expression

# define NOT(A) A = (~(A))
# define AND(A,B) A = (B&(A))
# define OR(A,B) A = (B|(A))
# define XOR(A,B) A = (B^(A))
// Logical Op.

// and more..
