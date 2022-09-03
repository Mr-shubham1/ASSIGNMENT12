#include<stdio.h>
void dtooct(int);
int main()
{
   int a;
   printf("enter anumber:");
   scanf("%d",&a);
   dtooct(a);
   return 0; 
}
void dtooct(int a)
{
    if(a>0)
    {
        dtooct(a/8);
        printf("%d",a%8);
    }
}
