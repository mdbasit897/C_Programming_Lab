#include<stdio.h>

int main(){

    int i=1,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    while(i<=100){
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
