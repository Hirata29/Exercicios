#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int number;
printf("Digte um n�mero:");
scanf("%d", &number);
if(number%2==0){
    printf("O n�mero � par");
}
else {
    printf("O n�mero � �mpar");
}
return 0;
system("pause");
}
