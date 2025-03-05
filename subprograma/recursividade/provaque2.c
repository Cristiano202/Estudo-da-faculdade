/*Escreva um programa em C que leia um número inteiro N e um número inteiro positivo 
k e identifique o k-ésimo algarismo do número N (da direita para a esquerda). A 
verificação deve ser feita por meio de um subprograma recursivo, que deve receber 
como parâmetros o número inteiro N e a posição K a ser verificada. Caso o valor de k 
seja maior do que o número de algarismos do número N, a resposta deve ser 0.  */
#include<stdio.h>
#include<conio.h>

int verica_algarimos(int num ,int ver){
    if(num ==0){
        return 0;
    }
    if(ver ==1){
        return num%10;
    }
    return verica_algarimos(num/10,ver-1);
}
void main (){
    int num ,k;
    printf("Informe numero\n ");
    scanf("%d",&num);
    printf("Informe o numero quer desejaver ");
    scanf("%d",&k);
    int cont =verica_algarimos(num,k);
    printf("Resutado eh %d ",cont);
}