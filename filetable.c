#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("table.txt","w");
    int num,n;
    printf("enter the number to print table:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d*%d=%d\n",n,i,i*n);
    }
    fclose(ptr);
    return 0;
}