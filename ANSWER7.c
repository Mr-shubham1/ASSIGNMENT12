#include<stdio.h>
void printsquare(int);
int main()
{
  int n;
  printf("enter  a number:");
  scanf("%d",&n);
  printsquare(n);
  return 0;
}
void printsquare(int n)
{
    if(n>0)
    {
        printsquare(n-1);
        printf("%d ",n*n);
    }
}