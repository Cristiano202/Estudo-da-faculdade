/*Escreva um programa que leia quatro números reais e verifique se eles formam, na 
ordem em que foram digitados, uma progressão aritmética, uma progressão 
geométrica, os dois tipos de progressão ou nenhum tipo de progressão.  Esta 
verificação deve ser realizada através de um subprograma. */
#include<stdio.h>
#include<conio.h>
const int TAMANHO=4;
int verifica_pa(int vet[TAMANHO]){
    int num;
        num=vet[1]-vet[0];

    for(int i=1;i<TAMANHO-1;i++){
        if(vet[i+1]-vet[i]!=num){
            return 0;
        }
    }
    return 1;
}
int verifica_geometrica(int vet[TAMANHO]){
    int num;
    num=vet[1]/vet[0];
    for(int i =1;i<TAMANHO-1;i++){
        if(vet[i+1]/vet[i]!=num){
            return 0 ;
        }
    }
    return 1;
}
void main(){
    int vet[TAMANHO];
    printf("informe um numero ");
    for(int i=0;i<TAMANHO;i++){
        scanf("%d",&vet[i]);
    }
    int verifi_pa=verifica_pa(vet);
    int veri_geometrica=verifica_geometrica(vet);
    if(verifi_pa == 1 && veri_geometrica ==1 ){
        printf("eh pa e progrecao geometrica");
    }
    else if(verifi_pa ==1){
        printf("eh uma pa");
    }
    else if(veri_geometrica ==1){
        printf("eh progrecao geometrica");
    }
    else{
        printf("nao eh uma pa");
    }
}