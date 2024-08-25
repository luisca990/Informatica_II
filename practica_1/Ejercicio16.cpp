#include <stdio.h>
#include "Ejercicio2.h"

void devolverNumeros()
{
    int opcion=0,numA=0,sumaNumeros=0,contador=0;
    double promedio=0.0;
    do{
        printf("Ingresa un número:\n");
        if(scanf("%d", &numA) != 1) {  // Verificamos que se ingresen correctamente dos números
            printf("Error: Debes ingresar un número entero.\n");
        }
        while (numA!=0){
            sumaNumeros+=numA;
            contador++;
            printf("Ingresa un número:\n");
            if(scanf("%d", &numA) != 1) {  // Verificamos que se ingresen correctamente dos números
                printf("Error: Debes ingresar un número entero.\n");
                break;
            }
        }
        
        if(sumaNumeros!=0){
            promedio=(double)sumaNumeros/(double)contador;
            printf("El promedio es: %f\n",promedio);
        }
        promedio=0.0;
        contador=0;
        sumaNumeros=0;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
