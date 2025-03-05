#include<stdio.h>
#include<conio.h>
const tamanho =10;

void prenchendo(int vet[tamanho]){
    int i ;
    for(i=0;i<tamanho;i++){
        printf("Informe um numero = ");
        scanf("%d",&vet[i]);
    }
}
void mostrando_vet(int vet[tamanho]){
    int i;
    for(i=0;i<tamanho;i++){
        printf("%d",vet[i]);
    }
}

void main (){
    int vet[tamanho];
    printf("preechendo o vetor \n ");
    prenchendo(vet);
    mostrando_vet(vet);
}