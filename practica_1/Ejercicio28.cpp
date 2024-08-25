#include <stdio.h>
#include "Ejercicio2.h"

double calcularPi(int iteraciones) {
    double pi = 0.0;
    int signo = 1;

    for (int i = 0; i < iteraciones; i++) {
        pi += signo * (4.0 / (2 * i + 1));
        //printf("%d 1/%d  ",signo,(2 * i + 1));
        signo *= -1; 
        
    }

    return pi;
}


void devolverCalcularPi()
{
    int opcion=0,numA=0;
    double resPi=0.0;

    do{
        printf("Ingrese el número de las iteraciones:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar número entero.\n");
        }else{
            resPi=calcularPi(numA);
            printf("pi es aproximadamente: %lf\n",resPi);
        }
        resPi=0.0;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

