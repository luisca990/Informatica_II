#include <stdio.h>
#include "Ejercicio2.h"

int validarEsTriang(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}


void validarTipoTriangulo(int a, int b, int c) {
    if (a == b && b == c) {
        printf("Se forma un triángulo equilátero.\n");
    } else if (a == b || a == c || b == c) {
        printf("Se forma un triángulo isósceles.\n");
    } else {
        printf("Se forma un triángulo escaleno.\n");
    }
}

void devolverTipoTriangulo()
{
    int opcion=0,numA=0,numB=0,numC=0;
    bool esTriangulo=false;

    do{
        printf("Ingrese las longitudes de los lados del triángulo\n");
        if(scanf("%d %d %d", &numA,&numB,&numC) != 3) {  //
            printf("Error: Debes ingresar números enteros.\n");
        }
       esTriangulo=validarEsTriang(numA,numB,numC);
       if(esTriangulo){
           validarTipoTriangulo(numA,numB,numC);
       }else{
           printf("Las longitudes ingresadas no forman un triángulo\n");
       }
       
       esTriangulo=false;
    
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

