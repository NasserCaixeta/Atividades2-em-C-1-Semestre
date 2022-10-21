#include <stdio.h>
#include <math.h>
int main(){
int a, b, resultado_divisao, resultado_resto ;




printf("%s", "Escreva 2 números em sequência: ");
scanf("%d", &a);
scanf("%d", &b);

resultado_divisao = a / b;
resultado_resto = (a % b);
printf("%s\n", "O resultado da divisão de A por B é: ");
printf("%d\n", resultado_divisao);
printf("%s\n", "O resto da divisão é: ");
printf("%d", resultado_resto);
return 0;
}
