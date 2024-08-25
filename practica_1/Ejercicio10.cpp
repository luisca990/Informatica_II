#include <stdio.h>
#include "Ejercicio2.h"

void devolverMultiplos()
{
    int opcion=0,numA=0,multiplo=1;
    char resultado[50];
    do{
        printf("Ingresa el número a calcular los múltiplos:\n");
        if(scanf("%d", &numA) != 1) {  // Verificamos que se ingresen correctamente dos números
            printf("Error: Debes ingresar un número entero.\n");
        }else{
            printf("Múltiplos de \"%d\" menores que 100:\n",numA);
            for (int i=1;;i++){
                multiplo=numA*i;
                if(multiplo>100){
                    break;
                }
                printf("%d\n", numA*i);
            }
        }
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
