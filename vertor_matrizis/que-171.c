#include<stdio.h>
#include<conio.h>
const int TAMANHO=5;

void main (){
    int vet1[TAMANHO],vet2[TAMANHO];
    int i ,escala=0;
    for(i=0;i<TAMANHO;i++){
        printf("informe um numero = ");
        scanf("%d",&vet1[i]);
    }
    for(i=0;i<TAMANHO;i++){
        printf("informe um numero = ");
        scanf("%d",&vet2[i]);
    }
    printf("\n");
    for(i=0;i<TAMANHO;i++){
        escala+=vet1[i]*vet2[i];
    }
    printf(" valor da escala eh %d ",escala);

}


