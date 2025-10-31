#include<stdio.h>

int main(){

    int i=1, sum = 0,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    while(i<=n){
        printf("%d+",i);
        i++;
        sum+=i; 
    }
    printf("\nSum of 1 to %d is %d\n",n,sum);
    return 0;
    printf("\nSum of 1 to %d is %d\n",n,sum);


}
