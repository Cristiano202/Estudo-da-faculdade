/*. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os 
elementos do vetor a partir da posição N.
*/
#include<stdio.h>
#include<conio.h>
const int tamanho=10;
int soma_vet(int vet[tamanho],int pos){
    if(pos==tamanho){
        return 0;
    }
    return vet[pos] + soma_vet(vet,pos+1);
}
void main(){
    int vet[tamanho];
    int i,n;
    for(i=0;i<tamanho;i++){
        printf("Informe um numero = ");
        scanf("%d",&vet[i]);

    }
    printf("informe um numero N = ");
    scanf("%d",&n);
    int soma_final=soma_vet(vet,n-1);
    printf("valor do vetor eh %d ",soma_final);
}