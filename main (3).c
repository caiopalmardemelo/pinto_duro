/*Faça um programa que imprima na tela de 10 até 1.*/
#include <stdio.h>

int main(){
    int penis = 10;
    while(penis > 1 && penis <= 10){
        printf("%d ", penis);
        penis = penis - 1;
    }
    return 0;
}

/*Peça ao usuario um número inteiro e imprima na tela a tabuada*/
#include <stdio.h> 
int main(){ 
    int mult = 1; 
    int penis; 
    int piroca;
    
    printf("digite o tamanho da sua piroca: "); 
    scanf("%d" , &penis);
    
    while(mult <= 10 && mult >= 1){ 
        piroca = penis * mult; 
        printf("%d " , piroca); 
        mult = mult + 1; 
        
    } return 0; 
    
}