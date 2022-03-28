#include <stdio.h>
#define I2S(x) ((short *) x)

int main() {
    int i, x[10];

    for(i=0; i<10; i++) {
        x[i] = i;
    }

    // ¿Por qué se imprimen alternados con 0 los numeros asignados en el for anterior?
    // El primer for llena un arreglo con numeros del 0 hasta el 10. 0-9, lo que hace el segundo for es ingresar al arreglo que creó el primer for, posteriormente aplicar recursividad
    // y realizar el producto. los 0 son resultado de la recursión de la evaluación con respecto al contenido del arreglo. 
    for(i=0; i<10; i++) {
        printf("%d\n", *I2S(x+i));
    }
    
}
