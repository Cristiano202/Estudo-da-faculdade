#include<stdio.h>
#include<conio.h>
const int tamanho=2;
float media(float vet[tamanho]){
    int i;
    float cont=0,soma=0;
    for(i=0;i<tamanho;i++){
        soma+=vet[i];
        cont++;
    }
    float media_aritimetica=soma/cont;
    return media_aritimetica;
}
void main (){
    float vet[tamanho];
    int i;
    for(i=0;i<tamanho;i++){
        printf("informe um numero = ");
        scanf("%f",&vet[i]);
    }
    float media_final=media(vet);
    printf("media final foi %.2f ",media_final);
}