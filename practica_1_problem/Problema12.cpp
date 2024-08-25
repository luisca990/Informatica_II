#include <stdio.h>
#include "Problemas.h"

int mayorFactorPrimo(int n) {
    int maxFactor = 1;


    while (n % 2 == 0) {
        maxFactor = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxFactor = i;
            n /= i;
        }
    }


    if (n > 2) {
        maxFactor = n;
    }

    return maxFactor;
}


void devolverFactorPrimo()
{
    int opcion=0,numA=0;
    

    do{
        int primo=0;
        printf("Ingrese el número:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar números enteros.\n");
        }else{
            primo=mayorFactorPrimo(numA);
            printf("El mayor factor primo de %d es: %d.\n",numA,primo);
        }
       
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

