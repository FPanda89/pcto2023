#include <stdio.h>

int main()
{
int a;
int b;


printf("inserire due interi: %d %d\n", a , b);
scanf("%d %d", &a , &b);


if (a%b==0)
{
    printf("multiplo\n");
}
else
{
    printf("non multiplo\n");
}
}



