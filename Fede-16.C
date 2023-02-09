#include <stdio.h>

int main()
{
 int n; 
 printf("inserire un numero tra 1 e 12\n");
 scanf("%d", &n);
 int m = n - 1;
 int somma = n;
 
 while ( m > 0)
 {
   somma = somma * m;
   m = m - 1;
 }
  printf("%d\n", somma);
   
}
   










