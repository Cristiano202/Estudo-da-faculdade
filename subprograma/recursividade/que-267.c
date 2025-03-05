/*. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
números inteiros, um número inteiro N entre 1 e 10 e um número inteiro X e 
verifique quantas vezes o número X aparece no vetor a partir da posição N.*/
#include<stdio.h>
#include<conio.h>
const int TAMANHO=10;
int vericacao(int vet[TAMANHO],int pos,int numx ){
    int cont=0;
    if(vet[pos]==numx){
        cont+=1;
    }
    if(pos==TAMANHO-1){
        return cont;
    }
    return cont + vericacao(vet,pos+1,numx);
}
void prechendo_vet(int vet[TAMANHO]){
    int i;
    for(i=0;i<TAMANHO;i++){
        printf("informe um numero ");
        scanf("%d",&vet[i]);
    }
}
void main(){
    int vet[TAMANHO],pos,numx;
    prechendo_vet(vet);
    printf("informe uma posicao 1 a 10  ");
    scanf("%d %d",&pos,&numx);

    int parece =vericacao(vet,pos-1,numx);
    printf("A parece %d ",parece);
}
