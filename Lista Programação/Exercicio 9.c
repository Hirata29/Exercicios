#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
int jg1, jg2, soma;
printf("Jogador 1 escolha um número:");
scanf("%d", &jg1);
printf("Jogador 2 escolha um número:");
scanf("%d", &jg2);
soma=jg1+jg2;
if(soma%2==0){
    printf("O Jogador 1 Ganhou!!!!");
}
else{
    printf("O jogador 2 ganhou!!!!");
}
return 0;
system("pause");
}
