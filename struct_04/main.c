#include <stdio.h>
#include <stdlib.h>

struct Employee_st//4
{
    short sEmpId;//2
    char cAge;//1
};
struct Department_st//8
{
    struct Employee_st emp1_ot;//4
    long lVar1;//4
};

union union_ut//(the size of union will be 4)
{
    struct Employee_st emp1_ot;//4
    short sEmp2;//2
    long lVar1;//4
};

int main()
{
    printf("Size of UNION %d!\n", sizeof(union union_ut));
    printf("Size of STRUCT %d!\n", sizeof(struct Employee_st));
    printf("Size of STRUCT %d!\n", sizeof(struct Department_st));
    return 0;
}


// Size of union is the bioggest datatype size and not the sum of all the datatypes in the structures or unions.
