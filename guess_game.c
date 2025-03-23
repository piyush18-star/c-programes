#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int random_number=(rand() % 100)+1;
    int number_of_guess=0;
    int guessed;

    do{
        printf("Guess the number: ");
        scanf("%d",&guessed);
        if(guessed>random_number){
            printf("guess the lower number\n");
        }
        else if(guessed<random_number){
            printf("guess the higher number\n");
        }
        else{
            printf("you guess correct number\n");
        }
        number_of_guess++;
    }while(guessed!=random_number);

    printf("you guess the number in %d times\n",number_of_guess);
    return 0;
}