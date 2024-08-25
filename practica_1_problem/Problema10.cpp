#include <stdio.h>
#include "Problemas.h"

bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int enesimoPrimo(int n) {
    int count = 0;
    int num = 2;

    while (true) {
        if (esPrimo(num)) {
            count++;
            if (count == n) return num;
        }
        num++;
    }
}


void devolverPrimo()
{
    int opcion=0,numA=0;
    

    do{
        int primo=0;
        printf("Ingrese el número:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar números enteros.\n");
        }else{
            primo=enesimoPrimo(numA);
            printf("El primo numero %d es: %d\n",numA,primo);
        }
       
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

