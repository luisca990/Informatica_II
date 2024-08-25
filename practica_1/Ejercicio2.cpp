#include <stdio.h>
#include "Ejercicio2.h"

void esParOImpar()
{
    int numA=0, opcion=0;
    char resultado[50];
    do{
        printf("Ingresa un número:\n");
        scanf("%d", &numA);

        ((numA%2)==0)? sprintf(resultado, "%d es par", numA):sprintf(resultado, "%d es impar", numA);
        printf("El resultado es:\n%s\n", resultado);
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
