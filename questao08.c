#include <stdio.h>
#include <math.h>
int main(){
int x1, x2, y1, y2;
double distancia;
printf("%s", "Escolha os dados de x1 e x2: ");
scanf("%d", &x1);
scanf("%d", &x2);
printf("%s", "agora dê o valor de y1 e y2: ");
scanf("%d", &y1);
scanf("%d", &y2);
distancia = sqrt(((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1)));
printf("%s", "Sua distância é: ");
printf("%f", distancia);

return 0;






}