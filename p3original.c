#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter two numbers\n");
  scanf("%d%d",a,b);
}
void findsum(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int c)
{
  printf("sum of %d+%d is %d\n",a,b,c);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  findsum(x,y,&z);
  output(x,y,z);
  return 0;
}