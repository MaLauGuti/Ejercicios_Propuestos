/* Ejercicios Propuestos */

#include <stdio.h>

/* Ejercicio 1: Promedio de notas*/

int main () {

    float nota1, nota2, nota3; 
    float notamedia;

    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);
    
    notamedia = (nota1 + nota2 + nota3)/3;
    
    printf("La nota media es: %f", notamedia);
    
    return 0;
}

