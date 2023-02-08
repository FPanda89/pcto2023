#include <stdio.h>

int main()
{
int a;

printf("inserisci un intero: %d\n", a);
scanf("%d", &a);

if ((a%4 == 0 && a%100) || a%400 == 0)
{
    printf("anno bisestile");
}
else 
{
    printf("anno non bisestile");
}

}





