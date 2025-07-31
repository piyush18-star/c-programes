#include<stdio.h>
struct employee{
    int code;
    char name[50];
    float salary;
};
int main(){
    struct employee n1,n2,n3;
    printf("enter the code: ");
    scanf("%d",&n1.code);
    printf("enter the name: ");
    scanf("%s",&n1.name);
    printf("enter the salary: ");
    scanf("%f",&n1.salary);
    printf("%d %s %f\n",n1.code,n1.name,n1.salary);

    printf("enter the code: ");
    scanf("%d",&n2.code);
    printf("enter the name: ");
    scanf("%s",&n2.name);
    printf("enter the salary: ");
    scanf("%f",&n2.salary);
    printf("%d %s %f\n",n2.code,n2.name,n2.salary);
    
    printf("enter the code: ");
    scanf("%d",&n3.code);
    printf("enter the name: ");
    scanf("%s",&n3.name);
    printf("enter the salary: ");
    scanf("%f",&n3.salary);
    printf("%d %s %f",n3.code,n3.name,n3.salary);

    return 0;
}