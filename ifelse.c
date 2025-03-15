#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    if (a<0){
        printf("the number negative ");
    }
    else{
        printf("the  number is positive");
    }
    return 0;
}