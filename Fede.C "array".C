#include <stdio.h>

//creare un array e riempirlo di numeri pari
int main()
{
   int i = 0; //scorre l'array un elemento alla volta
   int x = 0; // scorre i numeri pari da 0 a 8
   int array[5];

   while (i <= 4)
   {
      array[i] = x;
      i = i + 1;
      x = x + 2;
   }
   i = 0;
   while (i <= 4)
   {
      printf("%d\n", array[i]);
      i = i +  1;
      
   }
}


   










