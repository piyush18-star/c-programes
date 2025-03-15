#include<stdio.h>
int main(){
    int sum=0,i=1;
    for(i=1;i<=10;i++){
        sum+=8*i;
    }
    printf("The sum of the multiples of 8 is %d",sum);
    return 0;
}