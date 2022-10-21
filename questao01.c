#include <math.h>
#include <stdio.h>
int main() {
int a, b, c, resposta;


printf("%s", "insira seus 3 numeros em sequencia: ");
scanf("%u", &a);
scanf("%u", &b);
scanf("%u", &c);
resposta = (a + b + c)/3;


printf("%s", "Sua média é: ");
printf("%d", resposta);







return 0;
}