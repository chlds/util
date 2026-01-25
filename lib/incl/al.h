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

# define EQ(A,B) (A==(B))
// Compare

# define R(D,S) (S).D
// Data

# define ADD(A,B) A = (B+(A))
# define MUL(A,B) A = (B*(A))
// Expression

# define CII(A) A = (0x01+(~(A)))
// CII (NEG) computes the two's complement of the operand by bitwise inversion followed by increment.
// If the operand equals the minimum representable value, the result remains unchanged.
// In standard C, signed integer overflow is undefined behavior and no signal is raised.

# define NOT(A) A = (~(A))
# define AND(A,B) A = (B&(A))
# define OR(A,B) A = (B|(A))
# define XOR(A,B) A = (B^(A))
// Logical Op.

// and more..
