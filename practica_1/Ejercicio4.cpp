#include <stdio.h>
#include "Ejercicio2.h"

void devolverMenor()
{
    int numA=0,numB=0, opcion=0;
    char resultado[50];
    do{
        printf("Ingresa los números a validar:\n");
        scanf("%d %d", &numA,&numB);

        if(numA==numB)
            sprintf(resultado, "Los número %d y %d son iguales", numA,numB);
        else if(numA<numB)
            sprintf(resultado, "El número menor es: %d", numA);
        else
            sprintf(resultado, "El número menor es: %d", numB);
        printf("%s\n", resultado);
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
