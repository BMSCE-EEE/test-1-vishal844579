#include<stdio.h>
int biggest(int, int,int);
int main()
{
  int a,b,c;
  printf("enter three integers\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("biggest of %d, %d and %d is %d\n",a,b,c,biggest(a,b,c));
  return 0;
}
int biggest(int x,int y,int z)
{
  if(x>y && x>z)
  {
    return x;
  }
  else if(y>x && y>z)
  {
    return y;
  }
  else
  {
    return z;
  }
}