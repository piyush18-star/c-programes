#include<stdio.h>
int main(){
    int n,i=10;
    printf("Enter the number whose table you want in reverse order: ");
    scanf("%d",&n);
    for(i=10;i;i--){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}