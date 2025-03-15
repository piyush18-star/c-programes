#include<stdio.h>
int main(){
    int product=1,num;
    printf("Enter the number whose factorial you want: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        product*=i;
    }
    printf("The factorial of %d is %d",num,product);
    return 0;
}