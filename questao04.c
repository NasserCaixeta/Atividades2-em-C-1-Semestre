#include <math.h>
#include <stdio.h>
int main () {
int comprimento, largura, area;
printf("%s", "Dê o comprimento do seu terreno em m^2: ");
scanf("%d", &comprimento);
printf("%s", "Dê a largura de seu terreno em m^2: ");
scanf("%d", &largura);

area = (comprimento * largura)/10000;

printf("%s", "Sua área mede: ");
printf("%d", area);
printf("%s", " Hectares");






return 0;


}