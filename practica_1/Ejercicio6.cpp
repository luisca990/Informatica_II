#include <stdio.h>
#include "Ejercicio2.h"

void devolverPotencia()
{
    int opcion=0;
    long resultadoPotencia=1,numA=0,numB=0;
    char resultado[50];
    do{
        printf("Ingresa la base y luego el exponente:\n");
        if(scanf("%ld %ld", &numA,&numB) != 2) {  // Verificamos que se ingresen correctamente dos números
            printf("Error: Debes ingresar dos números enteros.\n");
        }else{

            for (int i=0;i<numB;i++){
                resultadoPotencia*=numA;
            }
           
            sprintf(resultado, "%ld^%ld=%ld",numA,numB,resultadoPotencia);
            printf("%s\n", resultado);
        }
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
