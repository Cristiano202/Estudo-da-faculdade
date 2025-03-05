/*Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu 
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações 
solicitadas deve ser calculada através de um subprograma.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int dobro(int num){
    return num*2;
}
int triplo(int num){
    return num*3;

}
int cubo(int num){
    return pow(num,3);
}
float raiz(int num){
   return sqrt(num);

}

void main(){
    int num;
    printf("Informe um numero ");
    scanf("%d",&num);
    int dobro_numero=dobro(num);
    int triplo_numero=triplo(num);
    int cubo_numero=cubo(num);
    float raiz_numero=raiz(num);
    printf("dobro = %d triplo = %d cubo = %d raiz quadrada %.2f",dobro_numero,triplo_numero,cubo_numero,raiz_numero);
}