#include <stdio.h>

int main()
{
int a;

printf(" inserisci un intero:\n");
scanf("%d", &a);

if (a == 1969)
{
    printf("sei nato quando l'uomo é andato sulla Luna\n");

}
else if (a < 1969)
{
    int differenza1 = 1969 - a;
    printf("sei nato %d anni prima\n", differenza1);
}
else if (a > 1969)
{
    int differenza2 =  a - 1969;
    printf("sei nato %d anni dopo\n", differenza2);
}

}







