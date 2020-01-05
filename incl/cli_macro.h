/*

The object-like macros and function-like macros for Typewriter

Remarks:
Refer at ./config_ty.h and cli.h
*/


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
