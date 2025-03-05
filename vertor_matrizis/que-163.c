#include<stdio.h>
#include<conio.h>
const int quantidade=5;
void main(){
    int repetido; 
    int vetA[quantidade],vetB[quantidade],i,j,vetc[10];
    for(i=0;i<quantidade;i++){
        printf("Informe um valor inteiroA=\n");
        scanf("%d",&vetA[i]);
    }
    for(j=0;j<quantidade;j++){
        printf("Informe um valor inteiroB =\n");
        scanf("%d",&vetB[j]);
    }
    
    for(i=0;i<10;i++){
        repetido=0;
        if(vetA[i]==vetB[i]){
            vetc[i]=vetA[i];
            repetido=1;
        }
        else{
            vetc[i]=vetA[i];
            vetc[i+1]=vetB[i];
        }
    }
    printf("\n");
    printf("valor do verto A e B \n");
    for(i=0;i<10;i++){
        printf("%d",vetc[i]);
      
    }
    printf("\n");
    
}
