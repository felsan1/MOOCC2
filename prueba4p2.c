/*Partiendo de un fichero compuesto por un número indeterminado de filas de 5 columnas, cada una de ellas formada por 2 enteros, seguidos de un número real y otros dos enteros, como el que sigue:

25 43 3.4 5 8
12 3 -1.2 12 3
2 7 1.3 8 4

El programa ha de solicitar el nombre del archivo con los datos, así como un valor entero. A continuación debe calcular la media de los valores de la segunda columna para los que la cuarta columna es mayor que el entero introducido por teclado.

Por ejemplo, si se introduce el valor 5, se calculará (3 + 7) / 2, es decir, 5.

Finalmente, debe mostrar el resultado del cálculo.

Lo que sigue son varios ejemplos de ejecución (para estos ejemplos, el nombre correcto del archivo es datos.txt):

Teclea el nombre del archivo: datos.txt
Teclea un número entero: 5
La media de la segunda columna con el límite igual a 5 es: 5.00

Lo que sigue es otro ejemplo de ejecución:

Teclea el nombre del archivo: datos.txt
Teclea un número entero: 12
La media de la segunda columna con el límite igual a 12 es: 0.00

Lo que sigue es otro ejemplo de ejecución:

Teclea el nombre del archivo: datas.txt
Teclea un número entero: 12
Error: no se pudo abrir el fichero datas.txt*/
#include <stdio.h>

#define PTH 256

int main () {
    FILE *ifile;
    int i=0, fil, col1, col2, col4, col5;
    float col3, med=0;
    char infi[PTH];
    
    printf ("Teclea el nombre del archivo: ");
    scanf ("%s", infi);
    printf ("Teclea un número entero: ");
    scanf ("%d", &fil);
    
    if ((ifile = fopen(infi, "r")) == NULL){
        printf ("Error: no se pudo abrir el fichero %s.\n", infi);
        return 1;
    }
    
    while (fscanf(ifile, "%d %d %f %d %d", &col1, &col2, &col3, &col4, &col5) == 5){
        if (col4 > fil){
            med += col2;
            ++i;
        }
    }
    
    fclose (ifile);
    
    //Con este bucle nos evitamos la indeterminación de "0/0" en caso de no existir coincidencias con el límite que se ha introducido y se mantiene la salida del enunciado.
    if (i != 0){
        printf ("La media de la segunda columna con el límite igual a %d es %.2f.\n", fil, med/i);
    }
    else {
        printf ("La media de la segunda columna con el límite igual a %d es %.2f.\n", fil, med/1);
    }
    return 0;
}
