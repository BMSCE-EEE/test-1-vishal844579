#include<stdio.h>
int main()
{
  int a,b,c,sum=0;
  printf("enter the values\n");
  scanf("%d%d%d",&a,&b,&c);
  sum=a+b+c;
  printf("the sum of %d,%d and %d is %d",a,b,c,sum);
  return 0;
}