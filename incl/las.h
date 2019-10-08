/* **** light

Circ. XNOR, XOR, NOR, OR, NAND, AND and/or NOT
Standards: STDIN, STDOUT and STDERR */







# define ALIGN_TAB (0x08)


# define XNOR(A)    A = (~((A)^(A)))

# define  XOR(A,B)  A = ((A)^(B))
# define   OR(A,B)  A = ((A)|(B))
# define  AND(A,B)  A = ((A)&(B))

# define  NOT(A)    A = (~(A))

# define  SHL(A,B)  A = ((A)<<(B))
# define  SHR(A,B)  A = ((A)>>(B))

# define  ADD(A,B)  A=((A)+(B));

# define  DEC(A)    (--(A))
# define  INC(A)    (++(A))

# define  NIL       (0x00)


enum {
CIN, COUT, CERR
};
