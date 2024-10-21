#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
float number1, number2;
printf("Digite um número:");
scanf("%f", &number1);
printf("Digite outro número:");
scanf("%f", &number2);
if(number1>number2){
    printf("O maior número é %.2f", number1);
}
else if(number2>number1){
    printf("O maior número é %.2f", number2);
}
else{
    printf("Os números são iguais");
}
return 0;
system("pause");
}
