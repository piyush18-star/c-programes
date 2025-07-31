#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("piyush.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("the stored data is:%d\n",num);
    fscanf(ptr,"%d",&num);
    printf("the stored data is:%d\n",num);
    fclose(ptr);
    return 0;
}