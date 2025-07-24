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
void strccpy(char m[],char w[]){
    for(int i=0;i<strlen(w);i++){
        m[i]=w[i];
    }
    m[strlen(w)]='\0';
}
int main(){
    char a[]="hello";
    char b[50];
    strccpy(b,a);
    printf("%s %s",a,b);
    return 0;
}