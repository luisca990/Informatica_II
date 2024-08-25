#include <stdio.h>
#include "Ejercicio2.h"

int main(int argc, char *argv[])
{
    int opcion=0;
    char resultado[50];
    do{
        printf("=================================================================\n");
        printf("|                    Seleccione una opción                      |\n");
        printf("=================================================================\n");
        printf("|  1.  Ejecutar el ejercicio  2  |  9.  Ejecutar el ejercicio 18|\n");
        printf("|  2.  Ejecutar el ejercicio  4  | 10. Ejecutar el ejercicio 20 |\n");
        printf("|  3.  Ejecutar el ejercicio  6  | 11. Ejecutar el ejercicio 22 |\n");
        printf("|  4.  Ejecutar el ejercicio  8  | 12. Ejecutar el ejercicio 24 |\n");
        printf("|  5.  Ejecutar el ejercicio 10  | 13. Ejecutar el ejercicio 26 |\n");
        printf("|  6.  Ejecutar el ejercicio 12  | 14. Ejecutar el ejercicio 28 |\n");
        printf("|  7.  Ejecutar el ejercicio 14  | 15. Ejecutar el ejercicio 30 |\n");
        printf("|  8.  Ejecutar el ejercicio 16  |  0.  Para salir              |\n");
        printf("=============================================================\n");
        printf("Ingrese su opción: ");

        scanf("%d", &opcion);

        switch (opcion) {
        case 1:
            esParOImpar();
            break;
        case 2:
            devolverMenor();
            break;
        case 3:
            devolverPotencia();
            break;
        case 4:
            devolverFactorial();
            break;
        case 5:    
            devolverMultiplos();
            break;
        case 6:    
            devolverPotencias();
            break;
        case 7:
            devolveColumnasNumeros();
            break;
        case 8:
            devolverNumeros();
            break;
        case 9:
            devolverCuadradoPerfecto();
            break;
        case 10:
            devolverPalindromo();
            break;
        case 11:
            devolverFormatoHorasMinSeg();
            break;
        case 12:
            devolverCuadradoDibujo();
            break;
        case 13:
            devolverTipoTriangulo();
            break;
        case 14:
            devolverCalcularPi();
            break;
        case 15:
            adivinarNumeroAleatorio();
            break;
        default:
            break;
        }

    }while(opcion!=0);
    return 0;

}
