/* **** light

Circ. XNOR, XOR, NOR, OR, NAND, AND and/or NOT
Standards: STDIN, STDOUT and STDERR */







# define XOR(A, B) A = ((A)^(B))
# define OR(A, B) A = ((A)|(B))
# define AND(A, B) A = ((A)&(B))
# define NOT(A) A = (~(A))

# define XNOR(A) A = (~((A)^(A)))

# define SHL(A, B) A = ((A)<<(B))
# define SHR(A, B) A = ((A)>>(B))

# define NIL (0)


enum {
CIN, COUT, CERR
};
