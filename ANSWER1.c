#include<stdio.h>
int printn(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printn(n);
    return 0;
}
int printn(int n)
{
    if(n==0)
    return 0;
     printn(n-1);
    printf("%d ",n);
}