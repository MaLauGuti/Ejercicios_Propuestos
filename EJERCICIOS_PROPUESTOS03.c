/* Ejercicios Propuestos */

#include <stdio.h>

/* Ejercicio 3: Calculo de kilos de azucar y cafe*/


#define precio_cafe 0.72
#define precio_azucar 3

void main () {

    float presupuesto, a, b; 
    float cant_azucar, cant_cafe, vuelto;

    printf("Ingrese el presupuesto: ");
    scanf("%f", &presupuesto);
    
    a = presupuesto/2;
    b = presupuesto/3;
    
    cant_azucar = a / precio_azucar;
    cant_cafe = b / precio_cafe;
    
    vuelto = presupuesto - (a + b);
    
    printf("Con un presupuesto de %.2f$\nLos kilos de azúcar a comprar son: %.2fkg\nLos kilos de cafe son: %.2fkg\nEl vuelto es %.2f$", presupuesto, cant_azucar, cant_cafe, vuelto);
    
    
}