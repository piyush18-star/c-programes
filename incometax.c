#include<stdio.h>
int main(){
    int income;
    float tax=0;
    printf("enter the income: ");
    scanf("%d",&income);
    if(income<250000){
        tax=0;
    }
    else if(income>250000 && income<=500000){
        tax=0.05*(income-250000);
    }
    else if(income>500000 && income<=1000000){
        tax=0.05*(500000-250000)+0.20*(income-50000);
    }
    else{
        tax=0.05*(500000-250000)+0.20*(100000-50000)+0.30*(income-100000);
    }
    printf("your tax will be:%f ",tax);
    return 0;
}