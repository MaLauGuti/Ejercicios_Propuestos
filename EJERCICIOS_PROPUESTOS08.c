/* Ejercicios Propuestos */

#include <stdio.h>

/* Ejercicio 8: Comparacion de numeros*/

void main () {

    int a, b, c;
    
    printf("Ingrese primer numero entero: ");
    scanf("%d", &a);
    printf("Ingrese segundo numero entero: ");
    scanf("%d", &b);
    printf("Ingrese tercer numero entero: ");
    scanf("%d", &c);
    
    if (a > b && a > c)
    {
        printf("El numero %d es el mayor de los tres valores", a);
    }
    else 
    {
        if (b > a && b > c)
        {
            printf("El numero %d es el mayor de los tres valores", b);
        }
        else
        {
            printf("El numero %d es el mayor de los tres valores", c);
        }
    }
    
}