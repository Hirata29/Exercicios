//Joao Vitor Hirata Ramos RA:2678448//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
setlocale(LC_ALL, "portuguese");
int salario, horas, total;
printf("\nQuanto voc� recebe por hora trabalhada:");
scanf("%d", &salario);
printf("\nQuantas horas voc� trabalha por dia:");
scanf("%d", &horas);
total = salario * horas * 30;
printf("Seu sal�rio mensal � de:%d", total);
return 0;
system("pause");

}
