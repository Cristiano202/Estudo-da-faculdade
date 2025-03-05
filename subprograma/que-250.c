/*Escreva um programa que leia cinco números inteiros e determine o segundo maior 
número digitado pelo usuário e a ordem em que o mesmo foi digitado. Esta 
verificação deve ser realizada através de um subprograma. */
#include<stdio.h>
#include<conio.h>
const int TAMANHO=5;
int verica(int vet[TAMANHO]){
    int maior;
    for(int k =0;k<TAMANHO;k++){
        if(vet[k] > vet[k+1]){
            maior=vet[k];
        }
        else{
            maior=vet[k+1];
        }
    }
    return maior;
}
void prechendo_vet(int vet[TAMANHO]){
    int k;
    for(k=0;k<TAMANHO;k++){
        printf("informe um numero = ");
        scanf("%d",&vet[k]);
    }
}
void main (){
    int vet[TAMANHO];
    prechendo_vet(vet);
    int pos=verica(vet);
    printf("%d",&pos);
}