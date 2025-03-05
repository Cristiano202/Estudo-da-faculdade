/*. O IFPB precisa de um programa para fazer a correção automática do seu teste de 
seleção. A prova é composta por dez questões objetivas, cuja resposta é uma 
letra (a, b, c, d ou e). Inicialmente, o programa deve ler o gabarito. Depois, o 
programa deve ler o cartão de respostas de três candidatos e verificar quantas 
questões cada um deles acertou. O programa deve ter pelo menos três 
subprogramas: um para ler um vetor de caracteres, um subprograma para 
imprimir um vetor de caracteres e outro para comparar o cartão de 
respostas com o gabarito para calcular o número de acertos de um 
candidato. O programa deve imprimir o gabartito, o cartão de respostas e o 
número de acertos de cada candidato*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
const int TAMANHO=10;

int verifica(char vetResposta[TAMANHO],char vetGabarito[TAMANHO]){
    int i,cont=0;
    for(i=0;i<TAMANHO;i++){
        if(vetResposta[i]==vetGabarito[i]){
            cont++;
        }
    }
    return cont;
}
void prechendovet(char vet[TAMANHO]){
    for(int i=0;i<TAMANHO;i++){
        printf("informe a quetao %d ",i+1);
        scanf(" %c",&vet[i]);
    }
}
void emprimivet(char vet[TAMANHO]){
    for(int i =0;i<TAMANHO;i++){
        printf("%c",vet[i]);
    }
}
void main (){
    char gabarito[TAMANHO],aluno1[TAMANHO],aluno2[TAMANHO],aluno3[TAMANHO];
    printf("Informe o gabarito ");
    prechendovet(gabarito);
    printf("aluno1 informe suas resposta ");
    prechendovet(aluno1);
    printf("Aluno2 informe suas respostas ");
    prechendovet(aluno2);
    printf("Aluno3 informe suas respostas ");
    prechendovet(aluno3);
    printf("Gabarito \n");
    emprimivet(gabarito);
    printf("\nRespota do aluno1\n");
    emprimivet(aluno1);
    printf("\nRespota do aluno2\n");
    emprimivet(aluno2);
    printf("\nRespota do aluno3\n");
    emprimivet(aluno3);
    int acertos1=verifica(gabarito,aluno1);
    int acertos2=verifica(gabarito,aluno2);
    int acertos3=verifica(gabarito,aluno3);
    printf("\naluno1 vocer acertou %d\n",acertos1);
    printf("aluno1 vocer acertou %d\n",acertos2);
    printf("aluno1 vocer acertou %d\n",acertos3);
}
