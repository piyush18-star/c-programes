#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    int a=0,b=1,next;
    for(int i=0;i<n;i++){
        printf("%d,",a);
        next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("The fibonacci series is:");
    fibonacci(a);
    return 0;
}