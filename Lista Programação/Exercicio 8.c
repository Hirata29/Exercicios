#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
int num;
printf("Digite um n�mero:");
scanf("%d", &num);
if(num%7==0){
    printf("Este n�mero � divis�vel por 7");
}
else{
    printf("Este n�mero n�o � divis�vel por 7");
}
return 0;
system("pause");
}
