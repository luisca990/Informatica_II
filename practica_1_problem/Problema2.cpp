#include <stdio.h>
#include "Problemas.h"

void devolverCombinacion()
{
    int numA=0,temporal=0,combinacion=0, opcion=0;
    char resultado[50];
    
    int billMon[10];
    billMon[0]=50000;
    billMon[1]=20000;
    billMon[2]=10000;
    billMon[3]=5000;
    billMon[4]=2000;
    billMon[5]=1000;
    billMon[6]=500;
    billMon[7]=200;
    billMon[8]=100;
    billMon[9]=50;
    do{
        printf("Ingresa la cantidad de dinero:\n");
        scanf("%d", &numA);
        temporal=numA;
        
        for (int i=0;i<10;i++){
            if(billMon[i]<=temporal){
                combinacion=temporal/billMon[i];
                printf("%d:%d\n",billMon[i],combinacion);
                temporal=temporal%billMon[i];
            }else{
                printf("%d:%d\n",billMon[i],0);
            }
        }

        printf("Faltante:%d\n", temporal);
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}
