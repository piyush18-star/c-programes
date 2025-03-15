#include<stdio.h>
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if (a%2==0 && a>=0){
        printf("the number  is divisible by 2 or greater than 0");
    }
    else{
        printf("the number is negative or not divible by 2");
    }
    return 0;
}