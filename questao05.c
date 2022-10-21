#include <stdio.h>
#include <math.h>
int main(){
float peso, altura, imc;
printf("%s", "Qual seu peso? ");
scanf("%f", &peso);
printf("%s", "Qual sua Altura? ");
scanf("%f", &altura);
imc = peso / (altura * altura);
printf("%s", "Seu índice de massa corporal é: ");
printf("%f", imc);

return 0;








}