#include <stdio.h>

int main()
{
float temp;


printf("inserire la temperatura in gradi Celsius\n");
scanf("%f", &temp);
if (temp<-273.15)
{
    printf("errore\n");
}
else 
{
float fahrenheit = temp*9/5+32;
printf("in fahrenheit: %f\n", fahrenheit);
float kelvin= temp+273.15;
printf("in kelvin: %f\n", kelvin);


}
}




