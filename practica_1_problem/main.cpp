#include <stdio.h>
#include "Problemas.h"

int main(int argc, char *argv[])
{
    int opcion=0;
    char resultado[50];
    do{
        printf("============================================\n");
        printf("|             Seleccione una opción         |\n");
        printf("============================================\n");
        printf("| 1. Ejecutar el problema 2                 |\n");
        printf("| 2. Ejecutar el problema 4                 |\n");
        printf("| 3. Ejecutar el problema 6                 |\n");
        printf("| 4. Ejecutar el problema 8                 |\n");
        printf("| 5. Ejecutar el problema 10                |\n");
        printf("| 6. Ejecutar el problema 12                |\n");
        printf("| 7. Ejecutar el problema 14                |\n");
        printf("| 8. Ejecutar el problema 16                |\n");
        printf("| 0. Para salir                             |\n");
        printf("============================================\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
        case 1:
            devolverCombinacion();
            break;
        case 2:
            devolverHora();
            break;
        case 3:
            devolverCalcularE();
            break;
        case 4:
            devolverMultiplosSuma();
            break;
        case 5:    
            devolverPrimo();
            break;
        case 6:    
            devolverFactorPrimo();
            break;
        case 7:
            devolverFactorPalindromo();
            break;
        case 8:
            devolverSerieCollatz();
            break;
        default:
            break;
        }

    }while(opcion!=0);
    return 0;

}
