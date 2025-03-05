/*. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
números inteiros e um número inteiro N entre 1 e 10 e verifique quantos números 
pares existem a partir da posição N do vetor.
*/
#include<stdio.h>
#include<conio.h>
const int TAMANHO=10;
int vericacao(int vet[TAMANHO],int pos ){
   int  cont=0;
   if(vet[pos]%2==0){
    cont+=1;
   }
    if(pos==TAMANHO-1){
        return cont;
    }
    return cont +  vericacao(vet,pos+1);
}
void prechendo_vet(int vet[TAMANHO]){
    int i;
    for(i=0;i<TAMANHO;i++){
        printf("informe um numero ");
        scanf("%d",&vet[i]);
    }
}
void main(){
    int vet[TAMANHO],pos;
    prechendo_vet(vet);
    printf("informe uma posicao 1 a 10  ");
    scanf("%d",&pos);

    int parece =vericacao(vet,pos-1);
    printf("A parece %d numeros pares ",parece);
}
