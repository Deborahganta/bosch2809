#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;
    struct Employee_st *pNext ;
    struct Employee_st *pPrev ;

};

int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot, emp4_ot,  *pEmp_ot;
    emp1_ot.sEmpId = 1;
    emp2_ot.sEmpId = 2;
    emp3_ot.sEmpId = 3;
    emp4_ot.sEmpId = 4;

    emp1_ot.pNext=&emp2_ot;
    emp1_ot.pPrev=NULL;
    emp2_ot.pNext = &emp3_ot;
    emp2_ot.pPrev= &emp1_ot;
    emp3_ot.pNext = &emp4_ot;
    emp3_ot.pPrev= &emp2_ot;
    emp4_ot.pNext = NULL;
    emp4_ot.pPrev= &emp3_ot;

    for(pEmp_ot= &emp1_ot; pEmp_ot!=NULL; pEmp_ot = pEmp_ot->pNext)
    {
       printf("pEmp_ot empid=%d, address = %p pnext = %p pPrev = %p\n", pEmp_ot->sEmpId, pEmp_ot, pEmp_ot->pNext, pEmp_ot->pPrev);
    }
    return 0;
}
