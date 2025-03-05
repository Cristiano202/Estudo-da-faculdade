/*Escreva um programa em C que leia um número inteiro N e verifique a quantidade de 
algarismos desse número. A verificação deve ser feita por meio de um subprograma 
recursivo.*/
#include<stdio.h>
#include<conio.h>
int verifica(int num ){
    if(num < 10 && num >-10){
        return 1;
    }
    return 1 + verifica(num/10);
}
void main (){
    int num;
    printf("Informe um numero ");
    scanf("%d",&num);
    int cont=verifica(num);
    printf("Quantidade de algarimos eh %d ",cont);
}
