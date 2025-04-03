#include<stdio.h>
#include<conio.h>

typedef struct no{
    int valor;
    struct no *proximo;

}No;
void inserir_no_inicio(No **lista ,int num){
    No *novo=malloc(sizeof(No));
    if(novo){
        novo->valor =num;
        novo->proximo =*lista;
        *lista=novo;
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }

}
void inserir_no_fim(No **lista,int num){
    No *aux, *novo=malloc(sizeof(No));
    if(novo){
        novo->valor=num;
        novo->proximo=NULL;
        if(*lista==NULL){
            *lista=novo;
        }
        else{
            aux=*lista;
            while(aux->proximo){
                aux=aux->proximo;
            }
            aux->proximo=novo;
            
        }

    }
    else{
        printf("erro ao alocar memoria!\n");
    }
}
void inserir_no_meio(No **lista,int num, int ant){
    No *aux ,*novo=malloc(sizeof(No));
    if(novo){
        novo->valor=num;
        if(*lista ==NULL){
            novo->proximo=NULL;
            *lista=novo;
        }
        else{
            aux=*lista;
            while(aux->valor != ant && aux->proximo){
                aux=aux->proximo;
            }
            novo->proximo=aux->proximo;
            aux->proximo=novo;
        }

    }
    else{
        printf("Erro ao alocar memoria!\n");
    }
}
void imprimir(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ",no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}
void main(){
    int op ,valor,ant;
    No *lista=NULL;
    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 -  InserirM\n\t4 - Imprir\n\t");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("Digite um valor  ");
            scanf("%d",&valor);
            inserir_no_inicio(&lista,valor);
        
            break;
        case 2:
            printf("Digite um valor  ");
            scanf("%d",&valor);
            inserir_no_fim(&lista,valor);
        
           break;
        case 3:
            printf("Digite um valor e um numero de referenciar ");
            scanf("%d %d",&valor,&ant);
            inserir_no_meio(&lista,valor,ant);

            break;
        case 4:
            imprimir(lista);

            break;   
        default:
            if(op!=0){
                printf("Opcao invalida!\n");
            }

            break;
        }

    }while(op!=0);

}