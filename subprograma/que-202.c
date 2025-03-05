/* Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua 
área e o seu comprimento. O programa deve fornecer um subprograma para calcular 
a área e outro para calcular o comprimento*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(float raio){
    return 3.14*pow(raio,2);
}
float comprimento (float raio){
    return 2 * 3.14*raio;
}
void main (){
    float raio;
    printf("Informe o raio ");
    scanf("%f",&raio);
    float area_cicomferica=area(raio);
    float comprimento_cicomferica=comprimento(raio);
    printf("A area a procimadamente he %.2f \n Comprimento a procimadamente %.2f ",area_cicomferica,comprimento_cicomferica);
}