#include<stdio.h>
int sum(int,int);
int avg(int,int);

int sum(int a,int b){
    return a+b;
}
int avg(int a,int b){
    return (a+b)/2;
}
int main(){
    int x,y;
    printf("enter the 1st number:\n ");
    scanf("%d",&x);
    printf("enter the 1st number: \n");
    scanf("%d",&y);
    printf("the sum of both the values is %d",sum(x,y));
    printf("the average of both the value is %d",avg(x,y));
    return 0;
}