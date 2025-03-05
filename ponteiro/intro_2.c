#include<stdio.h>
#include<conio.h>
const int TAMANHO=2;
typedef struct pessoa{
    char nome[100];
    char sexo;
    int idade;

}pessoa;
void validacao(pessoa *p){
    int k;
    fflush(stdin);
    printf("Informe seu nome = ");
    gets(p->nome);
    fflush(stdin);
    printf("Informe seu sexo = ");
    scanf("%c",&p->sexo);
    fflush(stdin);
    printf("Informe sua idade = ");
    scanf("%d",&p->idade);
}
void emprim(pessoa p){
    printf("Nome :%s\n ",p.nome);
    printf("Sexo :%c\n ",p.sexo);
    printf("Idade :%d\n ",p.idade);
}
void main(){
    pessoa vet[TAMANHO];
    int k;
    for(k=0;k<TAMANHO;k++){
        validacao(&vet[k]);
    }
    for(k=0;k<TAMANHO;k++){
        emprim(vet[k]);
    }

}


