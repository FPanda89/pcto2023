#include <stdio.h>

int main()
{
int a;
int b;
int c;

printf("inserisci due interi\n");
scanf("%d %d %d", &a , &b , &c);

if(a+b > c && b+c > a  &&  a+c > b)
{
    printf("sono lati di un triangolo\n");
}
else
{
    printf("non sono lati di un triangolo\n");
}

}





