#include <stdio.h>
#include "Problemas.h"


int longitudSerieCollatz(int n) {
    int longitud = 1;
    printf("%d, ",n );  

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d",n );  
        if (n != 1) {
           printf(", " );  
        }
        longitud++;
    }

    return longitud;
}


void devolverSerieCollatz()
{
    int opcion=0,numA=0;
    

    do{
        int maxLongitud = 0;
        int mejorSemilla = 0;
        
        printf("Ingrese un número k:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar números enteros.\n");
        }else{
            for (int j = 1; j < numA; j++) {
                printf("\nSerie para la semilla %d: ", j);
                int longitud = longitudSerieCollatz(j);
        
                if (longitud > maxLongitud) {
                    maxLongitud = longitud;
                    mejorSemilla = j;
                }
                printf("\n");  
            }
        
            printf("\nLa serie más larga es con la semilla: %d, teniendo %d términos.\n" ,mejorSemilla ,maxLongitud);
        }
       
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

