/* Escreva um subprograma recursivo que receba como entrada um string contendo a 
sequência de resultados de um time e calcule a sua pontuação, considerando que V 
representa vitória e vale 3 pontos, E representa empate e vale um ponto e D 
representa derrota e não vale qualquer ponto. Por exemplo, se a entrada do 
programa for VVVEEDDVED, a pontuação do time é 15*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int cacular_pontos(char *resutados ,int tamanho){
    if(tamanho==0){
        return 0;
    }
    char ultimo_resutado=resutados[tamanho-1];
    int pontos=0;
    if(ultimo_resutado=='V'&& ultimo_resutado =='v'){
        pontos=3;
    }
    if(ultimo_resutado=='e'&& ultimo_resutado == 'E'){
        pontos=1;
    }
    return pontos+cacular_pontos(resutados,tamanho-1);
}







void main (){
    char  resultados[100],i,entrada;
    do {

    printf("Digite a sequencia de resultados (use V para vitoria, E para empate, D para derrota). Digite 'F' para terminar:\n");
        scanf(" %c", &entrada);
        if (entrada == 'V' || entrada == 'E' ){
            if(entrada == 'D'){
                resultados[i++] = entrada;

            }
           
        }
    } while (entrada != 'F'&& entrada !='f');

    int tamanho=strlen(resultados);
    int potuacao=cacular_pontos(resultados,tamanho);
    printf("A potuacao do time e %d ",potuacao);
    
}