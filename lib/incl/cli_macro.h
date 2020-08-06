/*

Circ. XNOR, XOR, NOR, OR, NAND, AND and/or NOT
Standards: STDIN, STDOUT and STDERR
The object-like macros and function-like macros for Typewriter

Remarks:
Refer at ./config.h
*/


# define external extern
# define global

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
