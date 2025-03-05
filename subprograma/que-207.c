#include<stdio.h>
#include<conio.h>
const float centimrnto_polega=0.3937;
float valor_polegada(float centimentro){
    return centimrnto_polega*centimentro;
}
void main(){
    float polegada;
    printf("Informe um numero em centimentro =");
    scanf("%f",&polegada);
    float valorfinal=valor_polegada(polegada);
    printf("valor em polegada eh = %.2f",valorfinal);
}