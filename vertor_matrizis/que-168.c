#include <stdio.h>
const  int tamanho = 5;

void main() {
    int vetorA[tamanho];
    int vetorb[tamanho];
    int vetorc[tamanho*2];
    int aux,i,j;
    int tamnhovet=0;

    printf("Digite números inteiros:");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorA[i]);
    }

            
 

    printf("Digite números inteiros:");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorb[i]);
    }

   
    for(i=0;i<tamanho;i++){
        vetorc[tamnhovet++]=vetorA[i];
        
    }
    for(i=0;i<tamanho;i++){
        vetorc[tamnhovet++]=vetorb[i];
        
    }
    for (i = 0; i < tamnhovet- 1; i++) {
        for (j = i + 1; j < tamnhovet; j++) {
            if (vetorc[i] > vetorc[j]) {
                aux = vetorc[i];
                vetorc[i] = vetorc[j];
                vetorc[j] = aux;
            }
        }
    }
    printf("vetor c ");
    for(i=0;i<tamnhovet;i++){
        printf("%d",vetorc[i]);
    }


}