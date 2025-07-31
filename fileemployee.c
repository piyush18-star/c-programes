#include<stdio.h>
int main(){
    FILE *ptr;
    char name1[34],name2[33];
    int salary1,salary2;
    ptr=fopen("employee.txt","w");
    printf("enter the name of employee 1:");
    scanf("%s",&name1);
    printf("enter the salary of employee 1:");
    scanf("%d",&salary1);
    printf("enter the name of employee 2:");
    scanf("%s",&name2);
    printf("enter the salary of employee 2:");
    scanf("%d",&salary2);
    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",",");
    fprintf(ptr,"%d\n",salary1);
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",",");
    fprintf(ptr,"%d",salary2);
    fclose(ptr);
    return 0;
}