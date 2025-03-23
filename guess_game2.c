#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int random_number=(rand()%100)+1;
    int guessed;
    for(int i=1;i<=5;i++){
        printf("enter the number: ");
        scanf("%d",&guessed);
    }
    if(guessed==random_number){
        printf("you won!!\n");
    }
    else{
        printf("better luck next time!\n");
    }
    
    return 0;
}