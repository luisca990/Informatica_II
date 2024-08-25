#include <stdio.h>
#include "Ejercicio2.h"

void devolverPalindromo()
{
    int opcion=0,numA=0,reverso=0,digito,original=0;

    do{
        printf("Ingresa un número a validar si es o no palindromo:\n");
        if(scanf("%d", &numA) != 1) {  //
            printf("Error: Debes ingresar un número entero.\n");
        }
        original=numA;
        while (numA != 0) {
            digito = numA % 10;  // Obtener el último dígito
            reverso = reverso * 10 + digito;  // Agregar el dígito al número invertido
            numA /= 10;  // Eliminar el último dígito del número original
        }

        
        if (original == reverso)
            printf("%d es un palindromo.\n", original);
        else
            printf("%d NO es un palindromo.\n",original);
       
       digito=0;
       reverso=0;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

