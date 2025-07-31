#include<stdio.h>
typedef struct arrr{
    int code;
    float sal;
}emp;
int main(){
    emp e1;
    emp* ptr=&e1;
    ptr->code=324;
    ptr->sal=45788;
    printf("the code is %d and salary is %f",ptr->code,ptr->sal);
    return 0;
}