#include <stdio.h>
#include <math.h>
int main(){
int valor_compra, ano_fabri, ano_depreci, valor_depreciado;
printf("%s", "Qual o ano do seu carro? ");
scanf("%d", &ano_fabri);
printf("%s", "Por quanto você comprou? ");
scanf("%d", &valor_compra);
printf("%s", "Qual o ano depreciação do seu carro? ");
scanf("%d", &ano_depreci);
valor_depreciado = (ano_depreci - ano_fabri) * 0.01 * valor_compra;
printf("%s", "O valor depressiado do seu carro é: ");
printf("%d", valor_depreciado);




return 0;






}