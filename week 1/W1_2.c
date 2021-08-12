#include<stdio.h>
int main ()
{
   int n;
   printf("Enter number : ");
   scanf("%d",&n);
   int i=0;
  while(i<n)
  {
      printf("*");
      i++;
  }
   return 0;
}