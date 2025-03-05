/*. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada 
de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N 
primeiros números da diagonal principal.*/
#include<stdio.h>
#include<conio.h>
const int tamanho=3;
void diagonal(int mat[tamanho][tamanho],int n,int i){
    if(i<n){
        printf("%d \n",mat[i][i]);
        diagonal(mat,n,i+1);
    }
}
void main(){
    int mat[tamanho][tamanho];
    int i,n,k;
    for(i=0;i<tamanho;i++){
        for(k=0;k<tamanho;k++){
            printf("Informe um numero ");
            scanf("%d",&mat[i][k]);

        }
    }
    printf("\n informe a ordem\n  ");
    scanf("%d",&n);
    diagonal(mat,n,0);
}