#include <stdio.h>

int main()
{
int a;
int b;
int c;

printf("inserisci tre interi\n");
scanf("%d %d %d", &a , &b , &c);

if (a + b > c && b + c > a && a + c > b )
{
    printf("é un triangolo\n");
    
     if (a == b && a == c)
    {
    printf("é un triangolo equilatero\n");
    }

    else if ((a == b && a != c) || (b == c && a !=c) || ( c == a && a !=b))
    {
        printf("é un triangolo isoscele\n");
    }
    else if ( a != b && a != c && b != c)
    {
    printf("é un triangolo scaleno\n");
    }
}
else 
{
    printf("non é un triangolo\n");
}

}







