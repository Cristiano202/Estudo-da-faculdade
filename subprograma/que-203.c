/*. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
sua área, que deve ser calculada através de um subprograma*/
#include<stdio.h>
#include<conio.h>
float area(float base ,float altura){
    return 0.5 *altura*base;
}
void main (){
    float base , altura;
    printf("Informe a base e altura do triangulo ");
    scanf("%f %f",&base,&altura);
    float aera_triangulo=area(base,altura);
    printf("A area do triangulo eh %.2f ",aera_triangulo);
}