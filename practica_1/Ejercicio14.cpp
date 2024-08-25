#include <stdio.h>
#include "Ejercicio2.h"

void devolveColumnasNumeros()
{
    int opcion=0,numA=0;
    do{
        for (int i=1,j=50;i<=50;i++,j--){
            printf("%d      %d\n",i,j);
        }
        
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
