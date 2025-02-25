/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);
    
    while(idade<1){
        printf("você ainda tá no saco do seu pai. ");
        printf("digite sua idade: ");
        scanf("%d", &idade);
    }
    
    if(idade<12){
        
        printf("chore");
    }else if(idade<18){
        printf("espie a festa durante 5 minutos");
    }else if(idade<65){
        printf("entra na festa");
    }else if(idade<100){
        printf("vai pro boteco");
    }else{
        printf("POURA. vc é véio pra caralho");
    }
    printf(", vai pra casa dormir.");

    return 0;
}