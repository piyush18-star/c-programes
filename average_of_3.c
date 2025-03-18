#include<stdio.h>
float average();
float average(int n,int o,int p){
    return (n+o+p)/3;
}
int main(){
    int a,b,c;
    printf("enter the 1st number");
    scanf("%d",&a);
    printf("enter the 2nd number");
    scanf("%d",&b);
    printf("enter the 3rd number");
    scanf("%d",&c);
    printf("the average of %d %d %d is %f",a,b,c,average(a,b,c));
    return 0;
}