#include<stdio.h>
typedef struct c{
    int real;
    int imaginary;
}complex;
void display(complex c){
    printf("the complex is %d + %di\n",c.real,c.imaginary);
}
int main(){
    complex c[5];
    for(int i=0;i<5;i++){
        printf("enter the real number:");
        scanf("%d",&c[i].real);
        printf("enter the imaginary number:");
        scanf("%d",&c[i].imaginary);
        display(c[i]);

    }
    
    
    return 0;
}