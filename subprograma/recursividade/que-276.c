/* Escreva um subprograma recursivo que receba como entrada um número inteiro N 
não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N 
é igual a 5.*/
#include<stdio.h>
#include<conio.h>
void emprime_linha(int n){
    if(n>0){
        printf("*");
        emprime_linha(n-1);
    }
    
   
}
void estrela(int n){
    if(n>0){
        emprime_linha(n);
        printf("\n");
        estrela(n-1);
    }
   
}
void main(){
    int n;
    printf("informe um numero inteiro ");
    scanf("%d",&n);
    estrela(n);
}