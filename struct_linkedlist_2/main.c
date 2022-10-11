#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{
    short sEmpId;
    struct Employee_st *pNext ;

};

int main()
{
    struct Employee_st emp1_ot, emp2_ot, emp3_ot;
    emp1_ot.sEmpId = 1;
    emp2_ot.sEmpId = 2;
    emp3_ot.sEmpId = 3;
    emp1_ot.pNext = &emp2_ot;
    emp2_ot.pNext= &emp3_ot;
    emp3_ot.pNext = &emp1_ot;
    printf("emp1 address=%p: EmpID is %d! pNext=%p\n", &emp1_ot, emp1_ot.sEmpId,emp1_ot.pNext);
    printf("emp2 address=%p: EmpID is %d! pNext=%p\n", &emp2_ot, emp2_ot.sEmpId ,emp2_ot.pNext);
    printf("emp3 address=%p: EmpID is %d! pNext=%p\n", &emp3_ot, emp3_ot.sEmpId, emp3_ot.pNext);

    return 0;
}
