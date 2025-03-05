/*. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e 
o seu perímetro. O programa deve ter um subprograma para calcular a área e outro 
para calcular o perímetro*/
int perimetro(int num){
    int peri_metro=4*num;
    return peri_metro;
}
int area(int num){
    int are_a=num*num;
    return are_a;
}
void main(){
    int num;
    printf("Informe um numero = ");
    scanf("%d",&num);
    int perimetro_quadrado=perimetro(num);
    int area_quadrado=area(num);
    printf("area do quadrado he %d o perimentro he %d ",area_quadrado,perimetro_quadrado);
}