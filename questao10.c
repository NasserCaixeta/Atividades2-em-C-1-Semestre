#include <stdio.h>
#include <math.h>
int main(){
int numero, tabuada1, tabuada2, tabuada3, tabuada4, tabuada5, tabuada6, tabuada7, tabuada8, tabuada9, tabuada10;
printf("%s", "Escreva o número que você quer a tabuada: ");
scanf("%d", &numero);
tabuada1 = numero * 1;
tabuada2 = numero * 2;
tabuada3 = numero * 3;
tabuada4 = numero * 4;
tabuada5 = numero * 5;
tabuada6 = numero * 6;
tabuada7 = numero * 7;
tabuada8 = numero * 8;
tabuada9 = numero * 9;
tabuada10 = numero * 10;

printf("%s\n", "Sua tabuada pronta é: ");
printf("%s %d\n","vezes 1: " ,tabuada1);
printf("%s %d\n","vezes 2: " ,tabuada2);
printf("%s %d\n","Vezes 3: ", tabuada3);
printf("%s %d\n","Vezes 4: " , tabuada4);  
printf("%s %d\n", "Vezes 5: ", tabuada5);  
printf("%s %d\n", "Vezes 6: ", tabuada6);
printf("%s %d\n", "Vezes 7: ", tabuada7);
printf("%s %d\n","Vezes 8: ", tabuada8);
printf("%s %d\n", "Vezes 9: ", tabuada9);
printf("%s %d\n", "Vezes 10: ", tabuada10);
return 0;
}