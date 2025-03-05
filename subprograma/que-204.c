/* Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada 
valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos 
das conversões devem ser realizados através de subprogramas.*/
#include<stdio.h>
#include<conio.h>
const int tamanho=5;
float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float celsius_para_kelvin(float celsius) {
    return celsius + 273.15;
}
void main(){
    float vet[tamanho];
    float fahrenheit, kelvin;
    int i;
    for(i=0;i<tamanho;i++){
        printf("informe um numero = ");
        scanf("%f",&vet[i]);
    }
    for(i=0;i<tamanho;i++){
        fahrenheit=celsius_para_fahrenheit(vet[i]);
        kelvin=celsius_para_kelvin(vet[i]);
        printf("numero informado %f \n Em fahrenheit eh %.2f \n Em kelvin eh %.2f ",vet[i],fahrenheit,kelvin);
        
    }

}