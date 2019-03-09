/* **** **** light

STDIN, STDOUT and STDERR

//*/




# define NIL (0)

# define XOR(A, B) A = ((A)^(B))
# define OR(A, B) A = ((A)|(B))
# define AND(A, B) A = ((A)&(B))
# define NOT(A) A = (~(A))

# define SHL(A, B) A = ((A)<<(B))
# define SHR(A, B) A = ((A)>>(B))


enum {
CIN, COUT, CERR
};
