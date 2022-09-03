#include<stdio.h>
int revprintn(int);
int main()
{
   int n;
   printf("enter a numer:");
   scanf("%d",&n);
    revprintn(n);
    return 0;
}
int revprintn(int n)
{
    if(n==0)
    return 0;
    printf("%d ",n);
    revprintn(n-1);
}