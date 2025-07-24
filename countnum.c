#include<stdio.h>
#include<string.h>
int main(){
    char str[]="you are genius";
    char a='u';
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==a){
            count++;
        }
        
    }
    printf("number of %c is %d",a,count);
    return 0;
}