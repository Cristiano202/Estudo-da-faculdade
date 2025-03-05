/*. Escreva um programa que leia o valor do raio de uma esfera e determine o seu 
volume. O cálculo deve ser realizado através de um subprograma */
#include<stdio.h>
#include<conio.h>
#include<math.h>

float volume_valor(float volume ){
    float v=1.33*3.14159*pow(volume,3);
    return v;

}
void main(){
    float volume;
    printf("informe o raio = ");
    scanf("%f",&volume);
    float valor_final=volume_valor(volume);
    printf("O volume eh %.2f ",valor_final);
}