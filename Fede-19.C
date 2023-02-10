#include <stdio.h>

//crea un array di interi, riempilo di numeri a tua scelta con scanf e utilizza una sola variabile
//extra: ivertire i suoi elementi
int main()
{
   int i=0;
   int array[5];
   
   while (i<=4)
   {
      scanf("%d", &array[i]);
      i=i+1;
   }
   i=0;
   while (i<=4)
   {
      printf("%d\n", array[i]);
      i=i+1;
   }
   i=0;
   int temp; //variabile temporanea per scambiare i valori a due a due senza perdere il valore di uno dei due
   while (i<2)
   {
      temp=array[i];
      array[i]=array[4-i];
      array[4-i]=temp;
      i=i+1;
   }
   i=0;
   while (i<=4)
   {
      printf("%d\n", array[i]);
      i=i+1;
   }
   }
