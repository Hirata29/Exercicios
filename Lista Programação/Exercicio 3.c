#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int number;
printf("Digite um número:");
scanf("%d", &number);
if(number>5){
    printf("O número digitado é maior do que 5");
}
else{
    printf("O número digitado é menor do que 5");
}
return 0;
system("Pause");
}
