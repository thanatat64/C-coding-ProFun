#include <stdio.h>
#include <string.h>
int main()
{
   char text[100];

   printf("Enter a string to reverse : ");
   gets(text);

   strrev(text);//กลับค่า string

   printf("Reverse of the string: %s ", text);

   return 0;
}
