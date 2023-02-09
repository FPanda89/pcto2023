#include <stdio.h>

//creare un array di interi e riempirlo di numeri da 10 a 20 
//successivamente stampare tutti  gi elementi del suddetto array
int main()
{
   int i = 0;
   int x = 10;
   int array[11];

   while (i <= 10)
   {
      array[i] = x;
      i = i + 1;
      x = x + 1;
   }
   i = 0;
   while (i <= 10)
   {
      printf("%d\n", array[i]);
      i = i + 1;
   }
}
