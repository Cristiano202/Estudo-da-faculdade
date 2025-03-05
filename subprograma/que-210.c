/* Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00. 
Escreva um programa que leia o comprimento e a largura de um terreno localizado 
nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através 
de um subprograma, que deve receber como entrada o comprimento e a largura do 
terreno.*/
#include<stdio.h>
#include<conio.h>

float valor_terreno(float comprimento ,float largura ){
    float valor=comprimento*largura*50.00;
    return valor;
}
void main (){
    float comprimento ,largura;
    printf("informe o comprimento do terreno e a lagura = ");
    scanf("%f %f",&comprimento,&largura);
    float valor_final =valor_terreno(comprimento,largura);
    printf("valor do terreno  eh %.2f ",valor_final);
}