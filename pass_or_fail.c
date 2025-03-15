#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    printf("enter the marks of 1st subject: ");
    scanf("%d",&marks1);
    printf("enter the marks of 2nd subject: ");
    scanf("%d",&marks2);
    printf("enter the marks of 3rd subject: ");
    scanf("%d",&marks3);
    if(marks1<33||marks2<33||marks3<33){
        printf("you are fail because you got less than 33 marks ");
    }
    else if((marks1+marks2+marks3)/3<40){
        printf("you are fail because you get less than 40 marks ");
    }
    else{
        printf("you are pass ");
    }
    return 0;
}