#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
setlocale(LC_ALL, "portuguese");
float altura, peso;
printf("Qual sua altura:");
scanf("%f", &altura);
peso=72.7*altura-58;
printf("Seu peso ideal é:%.2f", peso);
return 0;
system("pause");
}
