#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr=fopen("num.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("num.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
    return 0;
}