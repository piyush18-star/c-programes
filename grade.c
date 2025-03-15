#include<stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a>90){
        printf("your grade is A");
    }
    else if(a>80 && a<=90){
        printf("your grade is B");
    }
    else if(a>70 && a<=60){
        printf("your grade is C");
    }
    else if(a<60 && a>=50){
        printf("your grade is D");
    }
    else{
        printf("you are fail");
    }
    return 0;
}