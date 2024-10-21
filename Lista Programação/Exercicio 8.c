#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
int num;
printf("Digite um número:");
scanf("%d", &num);
if(num%7==0){
    printf("Este número é divisível por 7");
}
else{
    printf("Este número não é divisível por 7");
}
return 0;
system("pause");
}
