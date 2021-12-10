#include<stdio.h>
typedef struct 
complex
{
  float real,img;
}
complex;
complex add(complex a,complex b);
int main()
{
  complex a,b,result;
  printf("for the first complex number\n");
  printf("enter the real and imaginary parts\n");
  scanf("%f %f",&a.real,&a.img);
  printf("for the second complex number\n");
  printf("enter the real and complex number\n");
  scanf("%f %f",&b.real,&b.img);
  result=add(a,b);
  printf("sum=%.1f+%.1fi",result.real,result.img);
  return 0;
}
complex add(complex a,complex b)
{
  complex temp;
  temp.real=a.real+b.real;
  temp.img=a.img+b.img;
  return (temp);
}