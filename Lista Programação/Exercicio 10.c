#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
float num1, num2, num3;
printf("Insira o primeiro número:");
scanf("%f", &num1);
printf("Insira o segundo número:");
scanf("%f", &num2);
printf("Insira o terceiro número");
scanf("%f", &num3);
if(num1>num2 && num1>num3){
    printf("O maior número é o %.2f", num1);
}
else if(num2>num1 && num2>num3){
    printf("O maior número é o %.2f", num2);
}
else if(num1==num2 && num1==num3){
    printf("Os números são iguais");
}
else{
    printf("O maior número é o %.2f", num3);
}
return 0;
system("pause");
}
