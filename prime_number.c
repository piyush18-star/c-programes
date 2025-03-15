#include<stdio.h>
int main(){
    int n=10,not_prime=0;
    for(int i=2;i<n;i++){
        if(n%i==0 && n!=2){
            not_prime=1;
            break;
        }
    }
    if(not_prime=1){
        printf("It is not a prime number\n");
    }    
    else{
        printf("It is a prime number\n");
    }
    
    return 0;
}