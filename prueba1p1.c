/*Declara una estructura llamada Fecha que contenga tres miembros de tipo entero: dia, mes y anyo.

Utiliza esa estructura en un programa que solicite la fecha de nacimiento de dos personas y las guarde en dos variables estructuradas.

El programa ha de comparar las fechas e informar de los siguientes casos:

    Si ambos usuarios han nacido exactamente el mismo día.
    Si ambos usuarios comparten cumpleaños pero han nacido en diferente año, cuántos años se llevan de diferencia.
    Si ambos usuarios no comparten cumpleaños.

Los mensajes se han de mostrar tal y como aparecen en los siguientes ejemplos de ejecución y en el mismo orden (variando solo según los datos introducidos por el usuario).

Lo que sigue es un ejemplo de ejecución del programa:

Introduce la fecha de nacimiento del primer usuario separada por espacios: 17 2 1999
Introduce la fecha de nacimiento del segundo usuario separada por espacios: 17 2 1999
¡Felicidades! Ambos habéis nacido el mismo día.

Lo que sigue es otro ejemplo de ejecución del programa:

Introduce la fecha de nacimiento del primer usuario separada por espacios: 17 2 1995
Introduce la fecha de nacimiento del segundo usuario separada por espacios: 17 2 1999
Ambos cumplís años el mismo día. Os lleváis -4 años de diferencia.

Lo que sigue es otro ejemplo de ejecución del programa:

Introduce la fecha de nacimiento del primer usuario separada por espacios: 17 3 1999
Introduce la fecha de nacimiento del segundo usuario separada por espacios: 17 2 1999
Vaya, no compartís cumpleaños.*/
#include <stdio.h>

#define SR 2 //Número de usuarios

typedef struct {
    int dia, mes, anio;
}Fecha;

int main () {
    Fecha data[SR];
    
    printf("Introduce la fecha de nacimiento del primer usuario separado por espacios (dia mes año): ");
    scanf("%d %d %d", &data[0].dia, &data[0].mes, &data[0].anio);
    printf("Introduce la fecha de nacimiento del segundo usuario separado por espacios: (dia mes año): ");
    scanf("%d %d %d", &data[1].dia, &data[1].mes, &data[1].anio);
    
    if (data[0].anio == data[1].anio && data[0].mes == data[1].mes && data[0].dia == data[1].dia)
        printf("¡Felicidades! Ambos habéis nacido el mismo día.\n");
    else if (data[0].mes == data[1].mes && data[0].dia == data[1].dia)
        printf("Ambos cumplís años el mismo día. Os lleváis %d años de diferencia.\n", data[0].anio-data[1].anio);
    else
        printf("Vaya, no compartís compleaños\n");
    
    return 0;
}
