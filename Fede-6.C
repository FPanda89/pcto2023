#include <stdio.h>

int main()
{
int x;
int y;
int z;
printf("inserisci tre interi: %d %d %d\n", x , y , z);
scanf("%d %d %d", &x , &y , &z);

if(y-x==z-y)
{
    printf("é una progressione aritmetica\n");
}
else
{
    printf("non é una progressione aritmetica\n");
}
}




