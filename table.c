#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter the number which you want to print the table: ");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}