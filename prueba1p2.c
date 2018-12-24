/*El programa que debes escribir necesita un tipo de dato estructurado que contenga tres miembros de tipo entero.

El programa debe declarar una variable de este tipo y solicitar al usuario tres números enteros, que se deben guardar en los miembros de la variable estructurada.

El programa ha de informar de cuál es el menor de los tres números.

Los mensajes se han de mostrar tal y como aparecen en los siguientes ejemplos de ejecución y en el mismo orden, variando solo debido a los datos introducidos por el usuario.

Lo que sigue es un ejemplo de ejecución:

Introduce el primer número: 17
Introduce el segundo número: 6
Introduce el tercer número: 8
El número 6 es el menor

Lo que sigue es otro ejemplo de ejecución:

Introduce el primer número: 2
Introduce el segundo número: 2
Introduce el tercer número: 4
El número 2 es el menor
*/
#include <stdio.h>

#define NU 3 //Cantidad de números a introducir

typedef struct{
    int num[NU];
}Noent;

int main () {
    Noent min;
    
    printf("Introduce el primer número: ");
    scanf("%d", &min.num[0]);
    printf("Introduce el segundo número: ");
    scanf("%d", &min.num[1]);
    printf("Introduce el tercer número: ");
    scanf("%d", &min.num[2]);
    
    if (min.num[2]<min.num[1])
        min.num[1]=min.num[2];
    if (min.num[1]<min.num[0])
            min.num[0]=min.num[1];      
    else if (min.num[1]<min.num[0])
            min.num[0]=min.num[1];
    
    printf ("El número %d es el menor\n", min.num[0]);
    
    return 0;
}
    
