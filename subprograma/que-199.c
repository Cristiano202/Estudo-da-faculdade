/*199. Escreva um programa que leia três números inteiros e calcule a sua média aritmética. 
O cálculo da média deve ser realizado através de um subprograma*/
#include<stdio.h>
#include<conio.h>
int media(float num1,float num2,float num3){
    float media_aritmetica = (num1+num2+num3)/3;
    return media_aritmetica;
}
void main (){
    float num1,num2,num3;
    printf("informe tres numero = ");
    scanf("%f %f %f",&num1,&num2,&num3);
    float media_final=media(num1,num2,num3);
    printf("media final he %.2f",media_final);
}