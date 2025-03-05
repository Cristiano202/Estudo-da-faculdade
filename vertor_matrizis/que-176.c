#include<stdio.h>
#include<conio.h>
const int tamanho =4;

void main (){
    int i ,k ;
    int mat[tamanho][tamanho];
    for (i=0;i<tamanho;i++){
        for(k=0;k<tamanho;k++){
            printf("informe um numero = ");
            scanf("%d",&mat[i][k]);
        }
        printf("\n");
    }
    printf("Matrix informada \n");
    for (i=0;i<tamanho;i++){
        for(k=0;k<tamanho;k++){
            printf("%d",mat[i][k]);
        }
        printf("\n");
    }
}