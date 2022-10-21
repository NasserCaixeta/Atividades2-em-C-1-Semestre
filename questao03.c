#include <stdio.h>
#include <math.h>
int main(){
float temperatura_c, temperatura_f;
printf("%s", "Escreva uma temperatura aqui: ");
scanf("%f", &temperatura_c);
temperatura_f = (temperatura_c * 9 / 5) + 32;
printf("%s", "Sua temperatura em Fahrenheit é: ");
printf("%f", temperatura_f);
return 0;
}