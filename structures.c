#include<stdio.h>
struct emply{
char empname[50];
int empyid;
float salary;
};
int main(){
struct emply e[4];
int i;
for(i = 0; i < 4; i++){
    printf("Pls enter the employee name : ");
    scanf("%s", &e[i].empname);
    printf("Pls enter the employee id : ");
    scanf("%d", &e[i].empyid);
    printf("Pls enter the employee's salary : ");
    scanf("%f", &e[i].salary);
}
printf("--Your Company Details--\n");
for(i = 0; i < 4; i++){
    printf("Employee Name : %s\n", e[i].empname);
    printf("Employee ID : %d\n", e[i].empyid);
    printf("Employee's Salary : %.2f\n", e[i].salary);
}
}
