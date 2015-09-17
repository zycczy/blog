typedef struct A_stm_ *A_stm;
typedef struct A_exp_ *A_exp;
typedef struct A_expList_ *A_expList;
typedef enum 
{
    A_plusm, 
    A_minus, 
    A_times, 
    A_div
} A_binop;

struct A_exp_
{
    enum
    {
        A_idExp, A_numExp, A_opExp, A_eseqExp
    } kind;
    union
    {
        string id;
        int num;
        struct 
        {
            A_exp left,
            A_binop oper,
            A_exp right
        } op;
        struct
        {
            A_exp stm,
            A_exp exp
        } eseq;
    }
}

