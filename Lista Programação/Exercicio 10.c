#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
float num1, num2, num3;
printf("Insira o primeiro n�mero:");
scanf("%f", &num1);
printf("Insira o segundo n�mero:");
scanf("%f", &num2);
printf("Insira o terceiro n�mero");
scanf("%f", &num3);
if(num1>num2 && num1>num3){
    printf("O maior n�mero � o %.2f", num1);
}
else if(num2>num1 && num2>num3){
    printf("O maior n�mero � o %.2f", num2);
}
else if(num1==num2 && num1==num3){
    printf("Os n�meros s�o iguais");
}
else{
    printf("O maior n�mero � o %.2f", num3);
}
return 0;
system("pause");
}
