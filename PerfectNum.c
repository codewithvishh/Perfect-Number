#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0) sum+=i;
    }
    printf(n==sum?"perfect number":"not perfect number");
    return 0;
}