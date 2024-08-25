#include <cstdlib>
#include <stdio.h>
#include <ctime> 
#include "Ejercicio2.h"

void adivinarNumeroAleatorio() {
    int aleatorio=0,numA=0, contador=1,opcion=0;


    do{
        srand(time(NULL));
        aleatorio = rand() % 101;
        do{
            printf("Ingrese el número para el intento %d:\n",contador);
            if(scanf("%d", &numA) != 1) {  //
                printf("Error: Debes ingresar número entero.\n");
            }else{
               //printf("%d",aleatorio);
               if(numA<aleatorio){
                   printf("El número ingresado es menor al número a adivinar\n");
               }else if(numA>aleatorio){
                   printf("El número ingresado es mayor al número a adivinar\n");
               }else{
                   printf("Ha adivinado el número!!! En un total de %d intentos\n",contador);
               }
            }
           contador++;
        }while(numA!=aleatorio);
        contador=1;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);
}
