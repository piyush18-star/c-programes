#include<stdio.h>
char *slice(char str[],int m,int n){
    char *pt1=&str[m];
    char *pt2=&str[n];
    str=pt1;
    str[n]='\0';
    return str;
}

int main(){
    char str[]="bhai bhai";
    printf("%s", slice(str,1,4));
    return 0;
}
