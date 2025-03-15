#include<stdio.h>
int main(){
    float P,SI;
    int R,T;
    printf("enter the value of principle ");
    scanf("%f",&P);
    printf("enter the value of rate ");
    scanf("%d",&R);
    printf("enter the value of time ");
    scanf("%d",&T);
    SI=(P*R*T)/100;
    printf("the simple interest is %f",SI);
    return 0;
}