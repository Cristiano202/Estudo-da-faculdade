#include<stdio.h>
#include<conio.h>
const int tamanho=8;

void main (){
    int numero,vetor[tamanho],preenchido=0,posicao;
    printf("Informe um numero");
    scanf("%d",&numero);
    while(numero >0){
        vetor[preenchido]=numero%2;
        numero=numero/2;
        preenchido++;
    }
    
    printf("numero em binario : ");
    for(posicao=preenchido-1;posicao>=0;posicao--){
        printf("%d",vetor[posicao]);
    }

}