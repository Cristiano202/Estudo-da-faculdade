/*Escreva um subprograma recursivo que receba como entrada dois vetores de 10 
números inteiros cada e um número inteiro N e verifique se os dois vetores são 
idênticos a partir da posição N.*/
#include<stdio.h>
#include<conio.h>
const int TAMANHO=10;
int verifica(int vet1[TAMANHO],int vet2[TAMANHO],int pos){
    if(vet1[pos]!= vet2[pos]){
        return 0;
    }
    if(pos == TAMANHO-1){
        return 1;
    }
    return verifica(vet1,vet2,pos+1);
}
void prechendo_vet(int vet[TAMANHO]){
    int i;
    for(i=0;i<TAMANHO;i++){
        printf("informe um numero ");
        scanf("%d",&vet[i]);
    }
}
void main (){
    int vet1[TAMANHO],vet2[TAMANHO],pos;
    printf("Prechendo o vetor 1\n ");
    prechendo_vet(vet1);
    printf("\nPrechendo o vetor 2 \n");
    prechendo_vet(vet2);
    printf("A gora informe a posição que vocer quer verificar se os dois são iguias 1 ate 10 posição \n");
    scanf("%d",&pos);
    int resutado=verifica(vet1,vet2,pos-1);
    if(resutado ==0){
        printf("Os dois vetores na posicao %d endiante não são iguias ",pos);
    }
    else{
        printf("Os dois vetores na posicao %d endiante sao iguias ",pos);
    }


}