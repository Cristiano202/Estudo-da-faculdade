/*. O carro de João consegue percorrer em média 14 km consumindo 1 litro de 
combustível. Escreva um programa que leia o valor da distância que João vai 
percorrer durante uma viagem e o preço atual de um litro de combustível e calcule 
quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser 
realizado através de um subprograma*/

float gasto(float km ,float preco_atual){
    float percorrido=km /14 ;
    percorrido = percorrido*preco_atual;
    return percorrido;
}
void main (){
    float km,preco;
    printf("Informe quantos km e o preco do combustivel ");
    scanf("%f%f",&km,&preco);
    float gasto_total=gasto(km,preco);
    printf("valor gasto eh %.2f ",gasto_total);
}