#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "portuguese");
int number;
printf("Digite um número:");
scanf("%d", &number);
if(number==0){
    printf("O número digitado é 0");
}
else if (number<0){
    printf("O número digitado é menor do que 0");
}
else if(number>0){
    printf("O número digitado é maior do que 0");
}
return 0;
system("pause");
}
