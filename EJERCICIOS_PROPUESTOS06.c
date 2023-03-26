/* Ejercicios Propuestos */

#include <stdio.h>

/* Ejercicio 6: Convertidor de moneda*/


#define euro 166.386

void main () {

    int cant_dol;
    float cant_eur; 
    
    printf("Ingrese monto en dolares: ");
    scanf("%d", &cant_dol);
   
    cant_eur = cant_dol/ euro;
    
    printf("El monto equivalente en euros es %f", cant_eur);
    
}