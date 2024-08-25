#include <stdio.h>
#include "Problemas.h"

void devolverHora()
{
    int numA=0,numB=0,temporal=0,opcion=0,esValido=true,horas=0, minutos=0,total=0;
    char resultado[50];
    
    do{
        printf("Ingresa el primer número que representa la hora:\n");
        scanf("%d", &numA);
        printf("Ingresa el segundo número que representa la hora:\n");
        scanf("%d", &numB);
        if(numA%100>59){
            printf("%d es un tiempo inválido, ingrese los números de nuevo\n",numA);
            esValido=false;
        }
        if(numB%100>59){
            printf("%d es un tiempo inválido, ingrese los números de nuevo\n",numB);
            esValido=false;  
        }
        if(esValido){
        
            temporal=numA+numB;
            if(temporal>=2400){
               temporal=temporal%2400;
               minutos=temporal%100;
               horas=temporal/100;
                if(minutos>59){
                    
                    horas+=minutos/60;
                    minutos=minutos%60;
                    printf("La hora es %d.\n",(horas*100)+(minutos));
                }else
                    printf("La hora es %d.\n",temporal);
            }else{
                horas=temporal/100;
                minutos=temporal%100;
                if(minutos>59){
                    
                    horas+=minutos/60;
                    minutos=minutos%60;
                }
                total=(horas*100)+(minutos);
                printf("La hora es %d.\n",total);
            }
        }
        temporal=0;
        esValido=true;
        horas=0;
        minutos=0;
        total=0;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
