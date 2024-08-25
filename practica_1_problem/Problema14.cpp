#include <stdio.h>
#include "Problemas.h"

bool esPalindromo(int num) {
    int original = num;
    int reverso = 0;
    

    while (num > 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }
    
    return original == reverso;
}

void calcularMultiplicacion(){
    
    int maxPalindromo = 0;
    int factor1 = 0, factor2 = 0;
    
    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {  
            int producto = i * j;
            if (esPalindromo(producto) && producto > maxPalindromo) {
                maxPalindromo = producto;
                factor1 = i;
                factor2 = j;
            }
        }
    }
    printf("%d*%d=%d\n",factor1,factor2,maxPalindromo);
}
void devolverFactorPalindromo()
{
    int opcion=0,numA=0;
    

    //do{
        calcularMultiplicacion();
       
        //printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        //scanf("%d", &opcion);
    //}while(opcion==1);

}

