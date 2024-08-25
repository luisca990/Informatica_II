#include <stdio.h>
#include "Ejercicio2.h"

void devolverFormatoHorasMinSeg()
{
    int opcion=0,numA=0,horas=0,minutos=0,segundos=0,temporal=0;

    do{
        printf("Ingrese los segundos a convertir:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar un número entero.\n");
        }
       
        horas=numA/3600;
        temporal=numA%3600;
        minutos=temporal/60;
        segundos=temporal%60;
        printf("%d:%d:%d\n",horas,minutos,segundos);
        horas=0,minutos=0,segundos=0,temporal=0;
    
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

