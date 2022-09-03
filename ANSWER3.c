#include<stdio.h>
int printodd(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printodd(n);
    return 0;
}
int printodd(int n)
{
    if(n==0)
    return 0;
    printodd(n-1);
    printf("%d ",2*n-1);
}