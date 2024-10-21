#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
float p1, p2, l1, l2, aps, fpa, fpm, media;
printf("Digite suas notas nas provas:");
scanf("%f e %f", &p1, &p2);
printf("\nDigite suas notas nas listas:");
scanf("%f e %f", &l1, &l2);
printf("\nDigite sua nota no APS:");
scanf("%f", &aps);
printf("\nDigite sua nota no F.P.A:");
scanf("%f", &fpa);
printf("\nDigite sua nota no F.P.M:");
scanf("%f", &fpm);
media=((p1*2)+(p2*5)+(l1*0.5)+(l2*0.5)+(aps)+(fpa*0.5)+(fpm*0.5))/10;
if(media>=6){
    printf("Você está aprovado! Sua média é:%.2f", media);
}
else{
    printf("Você está reprovado=( Sua média é:%.2f", media);
}
return 0;
system("pause");
}
