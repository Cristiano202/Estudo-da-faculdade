#include<stdio.h>
#include<conio.h>
const int TAMANHO=3;
typedef struct {
    char nome[100];
    char sexo;
    int idade;


}pessoa;
void main(){
    pessoa vet [TAMANHO];
    int k;
    for(k=0;k<TAMANHO;k++){
        fflush(stdin);
        printf("Informe o nome = ");
        gets(vet[k].nome);
        fflush(stdin);
        printf("Informe o sexo = ");
        scanf("%c",&vet[k].sexo);
        fflush(stdin);
        printf("Informe sua idade = ");
        scanf("%d",&vet[k].idade);

    }
    for(k=0;k<TAMANHO;k++){
        printf("Nome : %s \n",vet[k].nome);
        printf("Sexo : %c \n",vet[k].sexo);
        printf("Idade :%d \n",vet[k].idade);
    }
}
