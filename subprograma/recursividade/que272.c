/*. Escreva um subprograma recursivo que receba como entrada um número inteiro n e 
um número inteiro positivo k e identifique o k-ésimo alagrismo do número n (da 
direita para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do 
subprograma deve ser o número 9. */
#include<stdio.h>
#include<conio.h>
int k_esimo(int n , int k){
    if(k==1){
        return n % 10;
    }
    return k_esimo(n/10,k-1);

}
void main (){
    int n , k;
    printf("informe o numero inteiro e um numero k ");
    scanf("%d%d",&n,&k);
    int num = k_esimo(n,k);
    printf("o numero he %d ",num);
}