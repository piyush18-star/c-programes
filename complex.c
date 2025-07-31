#include<stdio.h>
typedef struct c{
    int real;
    int imaginary;
}complex;
int main(){
    complex c={4,5};
    printf("the complex is %d+i%d",c.real,c.imaginary);
    
    return 0;
}