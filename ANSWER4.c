#include<stdio.h>
int revprintodd(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    revprintodd(n);
    return 0;
}
int revprintodd(int n)
{
    if(n==0)
    return 0;
    printf("%d ",2*n-1);
    revprintodd(n-1);
}