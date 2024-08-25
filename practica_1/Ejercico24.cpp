#include <stdio.h>
#include "Ejercicio2.h"

void devolverCuadradoDibujo()
{
    int opcion=0,numA=0;

    do{
        printf("Ingrese el número para dibujar la figura:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar un número entero.\n");
        }
       
       for(int i=0;i<numA;i++){
           for(int j=0;j<numA;j++){
               if(j==0 || j==(numA-1)||i==0 || i==(numA-1)){
                   printf("+");
               }else{
                   printf(" ");
               }
           }
           printf("\n");
       }
       
    
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

