#include<stdio.h>
void revprintevn(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    revprintevn(n);
    return 0;
}
void revprintevn(int n)
{
    if(n>0)
    {
         printf("%d ",2*n);
        revprintevn(n-1);
       
    }
}