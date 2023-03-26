/* Ejercicios Propuestos */

#include <stdio.h>

/* Ejercicio 4: Horas en segundos*/


int main () {

    int result, hora, min, segund; 
    

    printf("Ingrese hora: ");
    scanf("%d", &hora);
    printf("Ingrese los minutos: ");
    scanf("%d", &min);
    printf("Ingrese los segundos: ");
    scanf("%d", &segund);
    
    result = (hora*3600) + (min*60) + segund;

    printf("Desde la hora 00:00:00 hasta la hora %d:%d:%d han pasado %d segundos.", hora, min, segund, result);

 return 0;   
}