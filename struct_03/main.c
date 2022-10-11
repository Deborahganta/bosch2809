#include <stdio.h>
#include <stdlib.h>

struct Employee_st
{

    short sEmpId;
    char cAge;
};
struct Department_st
{
    short sDeptId;
    struct Employee_st emp1_ot, emp2_ot;
};

int main()
{
    struct Department_st dept1_ot, dept2_ot, dept3_ot;
    dept1_ot.sDeptId = 420;
    dept1_ot.emp1_ot.sEmpId = 1111;
    dept1_ot.emp1_ot.cAge = 11;
    dept1_ot.emp2_ot.sEmpId = 2222;
    dept1_ot.emp2_ot.cAge = 22;

    dept2_ot.sDeptId = 520;
    dept2_ot.emp1_ot.sEmpId= 3333;
    dept2_ot.emp1_ot.cAge= 33;
    dept2_ot.emp2_ot.sEmpId=4444;
    dept2_ot.emp1_ot.cAge=44;


    dept3_ot.sDeptId = 620;
    dept3_ot.emp1_ot.sEmpId= 5555;
    dept3_ot.emp1_ot.cAge= 55;
    dept3_ot.emp2_ot.sEmpId=6666;
    dept3_ot.emp2_ot.cAge=66;




    //emp2_ot.sEmpId = 5678;
    //emp2_ot.cAge=29;
    //printf("emp1_ot sEmpId:%d \n cAge = %d!\n", emp1_ot.sEmpId, emp1_ot.cAge);
    //printf("emp2_ot sEmpId:%d \n cAge = %d!\n", emp2_ot.sEmpId, emp2_ot.cAge);
    printf("Size of structure is %d!\n", sizeof(struct Department_st));
    printf("Department 1 ID=%d\n",dept1_ot.sDeptId);
    printf("Department 1 employee 1 details sEmpId:%d \t cAge = %d!\n\n", dept1_ot.emp1_ot.sEmpId, dept1_ot.emp1_ot.cAge);
    printf("Department 1 employee 2 details sEmpId:%d \t cAge = %d!\n\n", dept1_ot.emp2_ot.sEmpId, dept1_ot.emp2_ot.cAge);
    printf("Department 1 ID=%d\n",dept2_ot.sDeptId);
    printf("Department 2 employee 1 details sEmpId:%d \t cAge = %d!\n\n", dept2_ot.emp1_ot.sEmpId, dept2_ot.emp1_ot.cAge);
    printf("Department 2 employee 2 details sEmpId:%d \t cAge = %d!\n\n", dept2_ot.emp2_ot.sEmpId, dept2_ot.emp2_ot.cAge);
    printf("Department 1 ID=%d\n",dept3_ot.sDeptId);
    printf("Department 3 employee 1 details sEmpId:%d \t cAge = %d!\n\n", dept3_ot.emp1_ot.sEmpId, dept3_ot.emp1_ot.cAge);
    printf("Department 3 employee 2 details sEmpId:%d \t cAge = %d!\n\n", dept3_ot.emp2_ot.sEmpId, dept3_ot.emp2_ot.cAge);

    return 0;
}
