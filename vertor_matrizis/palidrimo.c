#include<stdio.h>
#include<conio.h>
const int tamanho=10;

void main () {
    int vet[tamanho],i;
    int cont =0;
    for(i=0;i<tamanho;i++){
        printf("Informe um numero = ");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<tamanho/2;i++){
        if(vet[i]==vet[tamanho-1-i]){
            cont++;
        }
    }
    if(cont==tamanho/2){
        printf("eh palidrimo");
    }
    else{
        printf("nao he palidrimo ");
    }

}