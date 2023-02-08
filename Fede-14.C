#include <stdio.h>

int main()
{
   int a;
   printf("inserisci un intero\n");
   scanf("%d", &a);
   int b = a - 1;
   while (a % b != 0 && b > 1)
   {
     b = b - 1;
   }
   if (b == 1)
   {
    printf("il numero é primo\n");
   }
   else
   {
    printf("il numero non é primo\n");
   }
    
}
   










