/*Escreva um programa em C que leia um número inteiro N positivo e imprima a figura 
abaixo. A impressão deve ser realizada por meio de um subprograma recursivo.
* 
** 
*** 
**** 
***** 
*/
void figura(int num){
    if(num >0){
        figura(num-1);
        for(int k =0;k<num;k++){
            printf("*");
        }
        printf("\n");
    }
}
void main (){
    int num ;
    printf("Informe numero para ver a figura ");
    scanf("%d",&num);
    figura(num);
}