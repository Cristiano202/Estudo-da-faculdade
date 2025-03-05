/* Em um determinado concurso público, para cada questão que um candidato acerta 
ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada 
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um 
programa que leia o número de questões que um candidato acertou, o número de 
questões que ele errou e o número de questões que ele deixou em branco e 
determine a sua pontuação final. A pontuação deve ser calculada através de um 
subprograma, que deve receber como entrada o número de questões certas, o 
número de questões erradas e o número de questões em branco. */

#include<stdio.h>
#include<conio.h>


float media (int cetas , int errada ){
    int potuacao_cetas=cetas*5;
    int potuacao_errada=errada*3;
    float potuacao=potuacao_cetas-potuacao_errada;
    if(potuacao>=0){
        return potuacao;

    }
    return 0;
   

    
}

void main (){
    int acetas ,errada ,branca;
    printf("Informe quantas quetaos vocer acetou e quantas quetaos vocer errou e quantas em branca ");
    scanf("%d %d %d",&acetas,&errada,&branca);
    float pontuacao_final=media(acetas,errada);
    printf("Sua potuacao final %.2f ",pontuacao_final);

}