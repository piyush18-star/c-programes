#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("piyush2.txt","w");
    int num=594;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}