#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;

};

int main()
{
    struct Employee_st emp1_ot, emp2_ot, *pEmp_st;
    emp1_ot.sEmpId = 1;
    emp2_ot.sEmpId = 2;
    pEmp_st= &emp1_ot;
    printf("emp1 address=%p: EmpID is %d!\n", &emp1_ot, emp1_ot.sEmpId);
    printf("emp2 address=%p: EmpID is %d!\n", &emp2_ot, emp2_ot.sEmpId);
    printf("pEmp first time %d \n", pEmp_st->sEmpId);
    pEmp_st= &emp2_ot;
    printf("pEmp second time %d \n", pEmp_st->sEmpId);

    return 0;
}
