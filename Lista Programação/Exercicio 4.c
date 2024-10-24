#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int number;
printf("Digte um número:");
scanf("%d", &number);
if(number<0){
    printf("Insira um número positivo");
    scanf("%d", &number);
}
else{}
if(number%2==0){
    printf("O número é par");
}
else {
    printf("O número é ímpar");
}
return 0;
system("pause");
}
