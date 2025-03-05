/*O Banco do Povo está realizando uma grande promoção em seus financiamentos. 
Ele financia qualquer valor em até 240 prestações. O valor da primeira prestação 
corresponde a 20% do valor do empréstimo. Os valores das demais prestações 
correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Com 
base nestas informações, escreva um subprograma recursivo que receba como 
entrada o valor do empréstimo, o número de parcelas e um número inteiro N entre 1 e 
240 e calcule qual será o valor da parcela N do empréstimo. */
#include<stdio.h>
#include<conio.h>
float calculando(float valor,float parcelas ,float numeN){
    float pacelan =0.0;
    if(numeN ==1){
        pacelan=valor*0.2;
        return pacelan;
    }
    else{
        pacelan=1.07 *calculando(valor,parcelas,numeN-1);
        return pacelan;

    }

}
void main (){
    float pacela,valor,numeroN;
    printf("informe o valor do emprestimo ");
    scanf("%f",&valor);
    printf("informe o totsl de pacelas  do emprestimo ");
    scanf("%f",&pacela);
    printf("informe a pacela quer vocer quer ver ");
    scanf("%f",&numeroN);
    float ver_pacela=calculando(valor,pacela,numeroN);
    printf("valor da pacela eh %.2f ",ver_pacela);
}