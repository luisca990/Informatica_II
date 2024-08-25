#include <stdio.h>
#include "Problemas.h"

double calcularFactorial(int numero){
    long long resultadoFactorial=1;
    for (long i=numero;i>=2;i--){
        resultadoFactorial*=i;
    }
    return resultadoFactorial;
}

double calcularE(int iteraciones) {
    double e = 0.0;

    for (int i = 0; i < iteraciones; i++) {
        e += (1.0 / (double)calcularFactorial(i));
        
    }

    return e;
}


void devolverCalcularE()
{
    int opcion=0,numA=0;
    double resE=0.0;

    do{
        printf("Ingrese el número de las iteraciones:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar número entero.\n");
        }else{
            resE=calcularE(numA);
            printf("e es aproximadamente: %lf\n",resE);
        }
        resE=0.0;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

