#include <stdio.h>
#include "Problemas.h"

struct Resultado {
    int multiplos[10000]={0};
    int posicion=0;
};

Resultado calcularMultiplos(int numero,int limite, int imprimir){
    
    //int multiplos[10000]={0};
    int multiplo=0,posicion=0;
    Resultado res;
  
    for (int i=1;;i++,posicion++){
        multiplo=numero*i;
        
        if(multiplo>=limite){
            res.posicion=i-1;
           
            break;
        }
              
        printf("(%d)m%d%d", multiplo, imprimir, i);

        if (imprimir == 1 || (imprimir == 2 && numero * (i + 1) < limite)) {
            printf(" + ");
        }
        res.multiplos[posicion]=multiplo;
  
    }

    return res;
}

bool buscarNumero(int multiplos[10000],int numero,int limite){
    for(int i=0;i<limite;i++){
        
        if(multiplos[i]==numero){
            
            return true;
        }
    }
    return false;
}


void devolverMultiplosSuma()
{
    int opcion=0,numA=0, numB=0,numC=0;
    

    do{
        Resultado res;
        Resultado res1;
        int suma=0;
        printf("Ingrese los números: el primero y el segundo son para los múltiplos, el tercero es el límite\n");
        if(scanf("%d %d %d", &numA,&numB,&numC) != 3) {  //
            printf("Error: Debes ingresar números enteros.\n");
        }else{
            res=calcularMultiplos(numA,numC,1);
            res1=calcularMultiplos(numB,numC,2);
            if(res.posicion>res1.posicion){
                for(int i=0;i<res.posicion;i++){
                    suma+=res.multiplos[i];
                   
                    if(!buscarNumero(res.multiplos,res1.multiplos[i],res.posicion) && i<=res.posicion){
                        suma+=res1.multiplos[i];
                    }
                }
                
            }else if(res.posicion<res1.posicion){
                for(int i=0;i<res1.posicion;i++){
                    suma+=res1.multiplos[i];
                    if(!buscarNumero(res1.multiplos,res.multiplos[i],res1.posicion) && i<=res1.posicion){
                        suma+=res.multiplos[i];
                        
                    }
                }
            }else{
                for(int i=0;i<res.posicion;i++){
                    suma+=res.multiplos[i];
                    if(!buscarNumero(res1.multiplos,res.multiplos[i],res1.posicion) ){
                        suma+=res1.multiplos[i];
                        
                    }
                }
            }
            printf(" = %d\n",suma);
        }
        suma=0;
        printf("Ingrese 1 para continuar o culaquier número para finalizar\n");
        scanf("%d", &opcion);
    }while(opcion==1);

}

