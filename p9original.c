#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[200];
  printf("enter the first string\n");
  fgets(a,100,stdin);
  printf("enter the second string\n");
  fgets(b,200,stdin);
  if (strcmp(a,b)==0)
  printf("strings are equal\n");
  else
  printf("strings are not equal\n");
  return 0;
}