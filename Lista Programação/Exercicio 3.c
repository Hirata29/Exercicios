#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int number;
printf("Digite um n�mero:");
scanf("%d", &number);
if(number>5){
    printf("O n�mero digitado � maior do que 5");
}
else{
    printf("O n�mero digitado � menor do que 5");
}
return 0;
system("Pause");
}
