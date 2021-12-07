#include<stdio.h>
#include<math.h>
int main()
{
  int a;
  float ans;
  printf("enter the number\n");
  scanf("%d",&a);
  ans=sqrt(a);
  printf("the squareroot of number %d is %0.2f",a,ans);
  return 0;
}