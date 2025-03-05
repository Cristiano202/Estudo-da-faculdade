#include<stdio.h>
#include<conio.h>
const bit=8;
void main(){
    int num,k,binario[bit];
    printf("Informe numero \n");
    scanf("%d",&num);
    for(k=bit-1;k>=0;k--){
        binario[k]=num%2;
        num=num/2;
    }
    printf("O numero em binario eh \n ");
    for(k=0;k<bit;k++){
        printf("%d",binario[k]);
    }
}