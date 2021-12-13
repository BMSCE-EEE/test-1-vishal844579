#include<stdio.h>
struct complex
{
  int realpart,imaginarypart;
};
void main()
{
  int n,i;
  printf("enter number of complex numbers to be added\n");
  scanf("%d",&n);
  struct complex c[n], total;
  total.realpart=0;
  total.imaginarypart=0;
  for(i=0;i<n;i++)
  {
    printf("enter the real part of %d\n",i+1);
    scanf("%d",&c[i].realpart);
    printf("enter the imaginary part of %d\n",i+1);
    scanf("%d",&c[i].imaginarypart);
    total.realpart+=c[i].realpart;
    total.imaginarypart+=c[i].imaginarypart;
  }
  if(total.imaginarypart>=0)
  printf("%d+%di\n",total.realpart,total.imaginarypart);
  else
  printf("%d%di\n",total.realpart,total.imaginarypart);
}