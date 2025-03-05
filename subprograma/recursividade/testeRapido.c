#include<stdio.h>
#include<conio.h>
void estrela(int n){
    int k;
    if(n>0){
        for(k=0;k<n;k++){
            printf("*");
        }
        printf("\n");
        estrela(n-1);
    }
}
void main (){
    int n;
    printf("informe um numero ");
    scanf("%d",&n);
    estrela(n);
}