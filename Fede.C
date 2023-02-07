#include <stdio.h>

int main()
{
char x = 'f';
char y = 'p';
int num = 5;

printf("x era: %c\n", x);
printf("y era: %c\n", y);
printf("num era: %d\n", num);
printf("inserisci due caratteri e un intero\n");
scanf("%c %c %d", &x, &y, &num );
printf("x é diventato: %c\n", x);
}