#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "portuguese");
int number;
printf("Digite um n�mero:");
scanf("%d", &number);
if(number==0){
    printf("O n�mero digitado � 0");
}
else if (number<0){
    printf("O n�mero digitado � menor do que 0");
}
else if(number>0){
    printf("O n�mero digitado � maior do que 0");
}
return 0;
system("pause");
}
