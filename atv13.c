#include <stdio.h> 
   int main () {
    float celsius, fahrenheit, kelvin;

printf("Qual o valor dos celsius?");
scanf("%f",celsius);

kelvin = celsius + 273;
fahrenheit = (1.8 * (kelvin -273) )+ 32;

printf ("Seu valor em kelvin é %.1f, e seu valor em fahrenheit é %.1f", kelvin, fahrenheit);

return 0; }