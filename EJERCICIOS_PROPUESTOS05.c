/* Ejercicios Propuestos */

#include <stdio.h>

/* Ejercicio 5: Intercambio de valores*/

void main () {

    int v1, v2, aux; 
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &v1);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &v2);
  
    aux = v1;
    v1 = v2;
    v2 = aux;
    
    printf("El primer numero entero es %d y el segundo numero entero es %d", v1, v2);
    
}