#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    char cVar1;
    short sEmpId1;
    char cVar2;
    long lVar1;
    short sEmpId2;


};

int main()
{
    struct Employee_st emp1_ot;
    printf("Size of %d!\n", sizeof(struct Employee_st));
    return 0;
}
