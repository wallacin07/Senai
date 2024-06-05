#include <stdio.h>

int main()
{

int celsius = 30;
float fahrenheit = celsius*1.8+32;
float kelvin = (fahrenheit - 32) * 0.555555555555 + 273.15;

printf("Temperatura em fahrenheit é: %f", fahrenheit);
printf("\nTemperatura em kelvin é: %f", kelvin);
return 0;

}