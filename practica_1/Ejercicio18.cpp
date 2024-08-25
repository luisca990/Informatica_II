#include <stdio.h>
#include "Ejercicio2.h"

void devolverCuadradoPerfecto()
{
    int opcion=0,numA=0;
    bool esCuadradoPerfecto=false;
    do{
        printf("Ingresa un número a validar si es o no cuadrado perfecto:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar un número entero.\n");
        }
        
        if (numA == 0 || numA == 1) {
            printf("%d es un cuadrado perfecto.\n",numA);  // 
        }else{

            for (int i = 1; i <= numA / 2; i++) {
                if (i * i == numA) {
                    esCuadradoPerfecto= true;  // 
                }
            }
            
            if(esCuadradoPerfecto)
                printf("%d es un cuadrado perfecto.\n",numA);
            else
                printf("%d NO es un cuadrado perfecto.\n",numA);
        }
        esCuadradoPerfecto=false;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
