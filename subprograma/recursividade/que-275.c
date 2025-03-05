/* Escreva um subprograma recursivo que receba como entrada um número inteiro N 
não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N 
é igual a 5.*/
#include<stdio.h>
#include<conio.h>

void imprimirLinha(int n) {
    if (n > 0) {
        imprimirLinha(n - 1);
        printf("*");
    }
}

void estrela(int n) {
    if (n > 0) {
        estrela(n - 1);
        imprimirLinha(n);
        printf("\n");
    }
}
void main(){
    int n;
    printf("informe um numero inteiro ");
    scanf("%d",&n);
    estrela(n);
}