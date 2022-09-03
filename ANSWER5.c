#include<stdio.h>
void printevn(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printevn(n);
    return 0;
}
void printevn(int n)
{
    if(n>0)
    {
        printevn(n-1);
        printf("%d ",2*n);
    }
}