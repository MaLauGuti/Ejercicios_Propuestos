/* Ejercicios Propuestos */

#include <stdio.h>

/* Ejercicio 2: Volumen de un cubo*/

int main () {

    float arista; 
    float volumen;

    printf("Ingrese la arista: ");
    scanf("%f", &arista);
    
    volumen = (arista * arista * arista);
    
    printf("El volumen del cubo es: %f", volumen);
    
    return 0;
}