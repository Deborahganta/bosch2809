#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;
    struct Employee_st *pNext ;

};

int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot, emp4_ot, *pEmp_ot;
    emp1_ot.sEmpId = 1;
    emp2_ot.sEmpId = 2;
    emp3_ot.sEmpId = 3;
    emp4_ot.sEmpId = 4;
    emp1_ot.pNext = &emp2_ot;
    emp2_ot.pNext= &emp3_ot;
    emp3_ot.pNext = &emp4_ot;
    emp4_ot.pNext = NULL;
    printf("emp1 address=%p: EmpID is %d! pNext=%p\n", &emp1_ot, emp1_ot.sEmpId,emp1_ot.pNext);
    printf("emp2 address=%p: EmpID is %d! pNext=%p\n", &emp2_ot, emp2_ot.sEmpId ,emp2_ot.pNext);
    printf("emp3 address=%p: EmpID is %d! pNext=%p\n", &emp3_ot, emp3_ot.sEmpId, emp3_ot.pNext);
    printf("emp4 address=%p :Empid is %d! pnext=%p\n", &emp4_ot, emp4_ot.sEmpId, emp4_ot.pNext);
    for(pEmp_ot= &emp1_ot; pEmp_ot->pNext!=NULL; pEmp_ot = pEmp_ot->pNext)
    {
       printf("pEmp_ot  empid=%d, pnext=%p \n", pEmp_ot->sEmpId, pEmp_ot->pNext);
    }
    printf("pEmp_ot empid=%d, pnext=%p \n", pEmp_ot->sEmpId, pEmp_ot->pNext);
    return 0;
}
