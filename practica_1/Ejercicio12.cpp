#include <stdio.h>
#include "Ejercicio2.h"

void devolverPotencias()
{
    int opcion=0,numA=0,multiplo=1,resultadoPotencia=1;
    do{
        printf("Ingresa el número a calcular las potencias:\n");
        if(scanf("%d", &numA) != 1) {  // Verificamos que se ingresen correctamente dos números
            printf("Error: Debes ingresar un número entero.\n");
        }else{
            
            for (int i=1;i<6;i++){
                resultadoPotencia*=numA;
                printf("%d^%d-%d\n",numA,i,resultadoPotencia);
            }
        }
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
        resultadoPotencia=1;
    }while(opcion==1);

}
