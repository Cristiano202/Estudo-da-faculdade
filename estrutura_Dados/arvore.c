#include<stdio.h>
#include<conio.h>
typedef struct no{
    int valor;
    struct no *direita,*esquerda;
}Noarvor;
Noarvor* inseri_versao_1(Noarvor *raiz,int num){
    if(raiz == NULL){
        Noarvor*aux=malloc(sizeof(Noarvor));
        aux->valor=num;
        aux->direita=NULL;
        aux->esquerda=NULL;
        return aux;

    }

    else{
         if(num<raiz->valor){
            raiz->esquerda=inseri_versao_1(raiz->esquerda,num);
         }
         else{
            raiz->direita=inseri_versao_1(raiz->direita,num);
         }
         return raiz;
    }
}

void main(){
    Noarvor *raiz=NULL; 
}