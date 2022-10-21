#include <stdio.h>
#include <math.h>
int main(){
float salario, salario_liquido, ir, inss, hora_trab,valor_hora_trab, impostos;
ir = 0.11;
inss = 0.25;


printf("%s", "Quanto é o valor da sua hora? ");
scanf("%f", &valor_hora_trab);
printf("%s", "Quantas horas você trabalha por mês? ");
scanf("%f", &hora_trab);
salario = valor_hora_trab * hora_trab;
salario_liquido = salario - ((salario * ir) + (inss * salario)) ;
printf("%s", "Seu salário bruto é: ");
printf("%f\n", salario);
printf("%s", "Seu salário Líquido é: ");
printf("%f", salario_liquido);

return 0;





}