#include<stdio.h>
#include<conio.h>
const int tamanho=5;
void main (){
    int vet1[tamanho],vet2[tamanho],vet3[tamanho*2],tamnho_resutado=0;
    int i,k,jatem;
    printf("Precehendo vetor 1 \n");
    for(i=0;i<tamanho;i++){
        printf("Informe um numero = ");
        scanf("%d",&vet1[i]);
    }
    printf("Prenchendo vetor 2 \n");
    for(i=0;i<tamanho;i++){
        printf("Informe um numero = ");
        scanf("%d",&vet2[i]);
    }
    for(i=0;i<tamanho;i++){
        jatem=0;
        for(k=0;k<tamanho;k++){
            if(vet1[i]==vet3[k]){
                jatem=1;
            }
        }
        if(jatem==0){
            vet3[tamnho_resutado]=vet1[i];
            tamnho_resutado++;
            
        }
       
    }
    for(i=0;i<tamanho;i++){
        jatem=0;
        for(k=0;k< tamnho_resutado;k++){
            if(vet3[k]==vet2[i]){
                jatem=1;
            }
        }
        if(jatem==0){
            vet3[tamnho_resutado]=vet2[i];
            tamnho_resutado++;
           
          
        }
    }
    printf("empremindo o vetor 3\n ");
    for(i=0;i<tamnho_resutado;i++){
        printf("%d ",vet3[i]);
    }
    
}