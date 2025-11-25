#include <stdio.h>

int dividir(int numero1 , int numero2){
    
    if (numero2 == 0) {
        printf("Erro: Proibido dividir por zero!.\n");
        return;
    }

   int quociente = 0; 
    while (numero1 >= numero2) { 
        numero1 = numero1 - numero2; 
        quociente++;    
    } 
    return quociente;    
}
