/*. Escreva um subprograma recursivo que receba como entrada um vetor de dez 
números inteiros já ordenados, um número inteiro X, e dois índices M e N e verifique 
se o número X está presente no vetor entre as posições M e N. Esta verificação deve 
ser feita através de uma busca binária*/
#include<stdio.h>
#include<conio.h>;
const int TAMANHO =10;
int verifica_bi(int vet[TAMANHO],int m , int n ,int numx){
    if(m>n){
        return 0;
    }
    int mid = (n+m)/2;
    if(vet[mid]==numx){
        return 1;
    }
    if(vet[mid]>numx){
        return verifica_bi(vet,m,mid-1,numx);
    }
    else{
        return verifica_bi(vet,mid+1,n,numx);
    }
}
void prechendo_vet(int vet[TAMANHO]){
    int i;
    for(i=0;i<TAMANHO;i++){
        printf("informe um numero ");
        scanf("%d",&vet[i]);
    }
}
void main (){
    int vet[TAMANHO],numx,m,n;
    printf("Prechendo o vetor\n");
    prechendo_vet(vet);
    printf("Informe o numero m(inicio do entevalo) e n(O fim do intervalo)\n");
    scanf("%d %d",&m,&n);
    printf("Informe o numero que deseja olhar\n");
    scanf("%d",&numx);
    int restudado=verifica_bi(vet,m-1,n-1,numx);
    if(restudado ==1){
        printf("numero emcontrado ");
    }
    else{
        printf("Numero nao emcontrado ");
    }
}
