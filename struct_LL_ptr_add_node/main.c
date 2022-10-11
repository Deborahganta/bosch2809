#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;
    struct Employee_st *pNext ;

};

int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot, emp4_ot, emp5_ot, *pEmp_ot, *pEmpHead_ot;
    short i,pos;
    emp1_ot.sEmpId = 1;
    emp2_ot.sEmpId = 2;
    emp3_ot.sEmpId = 3;
    emp4_ot.sEmpId = 4;
    //emp5_ot.sEmpId = 5;

    emp1_ot.pNext=&emp2_ot;
    emp2_ot.pNext = &emp3_ot;
    emp3_ot.pNext = &emp4_ot;
    emp4_ot.pNext = NULL;

    emp5_ot.sEmpId = 5;

    printf("enter the position");
    scanf("%d",&pos);

    pEmpHead_ot= &emp1_ot;
    pEmp_ot= &emp1_ot;
// insert the node in the beginning
    if(pos==0)
    {
        emp5_ot.pNext=pEmp_ot;
        pEmpHead_ot= &emp5_ot;
    }
    else
    {
        for(i=1; ((i<pos)&&(pEmp_ot->pNext != NULL)); i++)
        {
            pEmp_ot = pEmp_ot->pNext;
        }
        emp5_ot.pNext = pEmp_ot->pNext;
        pEmp_ot->pNext = &emp5_ot;
    }
    for( pEmp_ot = pEmpHead_ot; pEmp_ot !=NULL; pEmp_ot= pEmp_ot->pNext)
    {
        printf("pEmp_ot ; empid = %d pnext = %p\n", pEmp_ot->sEmpId , pEmp_ot->pNext);
    }
    return 0;
}
