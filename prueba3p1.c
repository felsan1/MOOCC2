/*Escribe un programa en C que solicite exactamente por teclado tantos números como se especifiquen en una macro (del tamaño que consideres) y guárdalos en una tabla del tamaño de la macro.

A continuación, por cada número introducido, el programa mostrará cuántos de los números introducidos después son mayores que él.

El programa ha de ser genérico para cualquier valor de la macro. Si por ejemplo, se cambiara el valor a 7, funcionaría exactamente igual con siete números sin hacer ninguna otra modificación en el código.

Lo que sigue es un ejemplo de ejecución con una macro definida con 5:

Introduce el número 1: 2
Introduce el número 2: 7
Introduce el número 3: 1
Introduce el número 4: 4
Introduce el número 5: 5
El número 2 es menor que otros 3 números posteriores.
El número 7 es menor que otros 0 números posteriores.
El número 1 es menor que otros 2 números posteriores.
El número 4 es menor que otros 1 números posteriores.
El número 5 es menor que otros 0 números posteriores.

Otro ejemplo:

Introduce el número 1: 3
Introduce el número 2: 12
Introduce el número 3: 9
Introduce el número 4: 4
Introduce el número 5: 8
Introduce el número 6: 1
Introduce el número 7: 7
El número 3 es menor que otros 5 números posteriores.
El número 12 es menor que otros 0 números posteriores.
El número 9 es menor que otros 0 números posteriores.
El número 4 es menor que otros 2 números posteriores.
El número 8 es menor que otros 0 números posteriores.
El número 1 es menor que otros 1 números posteriores.
El número 7 es menor que otros 0 números posteriores.*/

#include <stdio.h>

#define DIM 5

int main () {
    int i, j, k, num[DIM];
    
    for (i=0; i<DIM; ++i){
        printf ("Introduce el número %d de %d: ", i+1, DIM);
        scanf ("%d", &num[i]);
    }
        
    for (i=0; i<DIM; ++i){
        printf ("El número %d es menor que otros ", num[i]);
        for (k=0, j=+i; j<DIM; ++j){
            if (num[i]<num[j]){
                ++k;
            }
        }
        printf("%d números posteriores.\n", k);
    }
    return 0;
}
