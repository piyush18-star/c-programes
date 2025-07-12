#include<stdio.h>
int strlen(char str[]){
    int i=0,count;
    char w=str[i];
    while(w!='\0'){
        w=str[i];
        i++;
    }
    count=i-1;
    return count;
}
int main(){
    char str[]="char";
    printf("%d",strlen(str));
    return 0;
}