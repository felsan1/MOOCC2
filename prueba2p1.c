/*Escribe un programa en C que pida por teclado dos palabras y las guarde en dos variables. A continuación crea y escriba en una nueva variable una tercera palabra que tenga la concatenación de las dos palabras introducidas, pero la segunda con sus caracteres en orden inverso. El programa ha de mostrar las palabras originales y la nueva palabra por pantalla.

Lo que sigue es un ejemplo de ejecución:

Escribe la primera palabra: Certificado
Escribe la segunda palabra: Profesional
La palabra resultante de concatenar Certificado y Profesional es: CertificadolanoiseforP

Otro ejemplo:

Escribe la primera palabra: Rick
Escribe la segunda palabra: diculous
La palabra resultante de concatenar Rick y diculous es: Ricksuolucid

Sube tu fichero .c haciendo clic en examinar.

*/
#include <stdio.h>
#include <string.h>

#define SD 256 // Tamaño máximo de las cadenas

int main () {
    int i, j;
    char stri1[SD], stri2[SD];
    
    printf("Escribe la primera palabra: ");
    fgets(stri1, SD, stdin);
    printf("Escribe la segunda palabra: ");
    fgets(stri2, SD, stdin);
   
    stri1[strlen(stri1)-1]=0;
    stri2[strlen(stri2)-1]=0;
    char stro[strlen(stri1)+strlen(stri2)];
    strcpy(stro, stri1);
    i = strlen(stri2);
    j = strlen(stro);
    
    do {
        stro[j] = stri2[i-1];
        ++j;
        --i;
    } while (i > -1);
    

    printf ("La palabra resultante de concatenar %s y %s es %s.\n", stri1, stri2, stro);
    
    return 0;
}
