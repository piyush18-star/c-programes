#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int player,computer=rand()%3;
    printf("choose 0 for snake,1 for water,2 for gun:");
    scanf("%d",&player);
    printf("computer choose:%d\n",computer);
    if(player==0 && computer==0){
        printf("draw!");
    }
    else if(player==0 && computer==1){
        printf("you won!");
    }
     else if(player==0 && computer==2){
        printf("you lose!");  
    }
     else if(player==1 && computer==0){
        printf("you lose!");
    }
     else if(player==1 && computer==1){
        printf("draw!");
    }
     else if(player==1 && computer==2){
        printf("you won!");
    } 
    else if(player==2 && computer==0){
        printf("you won!");
    }
     else if(player==2 && computer==1){
        printf("you lose!");
    }
     else if(player==2 && computer==2){
        printf("draw!");
    }
    else{
        printf("something went wrong");

    }

    return 0;
}