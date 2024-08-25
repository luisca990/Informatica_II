#include <stdio.h>
#include "Ejercicio2.h"

void devolverFactorial()
{
    int opcion=0,numA=0;
    unsigned long long resultadoFactorial=1;
    char resultado[50];
    do{
        printf("Ingresa el número a calcular el factorial:\n");
        if(scanf("%d", &numA) != 1) {  // Verificamos que se ingresen correctamente dos números
            printf("Error: Debes ingresar un número entero.\n");
        }else{
            resultadoFactorial=1;
            for (long i=numA;i>=2;i--){
                resultadoFactorial*=i;
            }
           
            sprintf(resultado, "%d!=%lld",numA,resultadoFactorial);
            printf("%s\n", resultado);
        }
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
