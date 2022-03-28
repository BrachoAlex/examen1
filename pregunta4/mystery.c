#include <stdio.h>
 
// 3. ¿Qué quieren decir los elementos de este arreglo? Los bits a evaluar en la operación what. 
int bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };
 
// 1. ¿Qué hace la función what?
// recibe un parametro, posteriormente crea la variable i que es igual del tamaño de sus bytes * 2, Posteriormente crea un ciclo while para ir sumando los bits del parametro y
// su bit menos significativo.
unsigned int what(unsigned int num) {
    int i, result = 0;
    i = sizeof(int)*2;

    while (i--) {
        result += bits[num & 0xf];
        num >>= 4;
    }

// 2. ¿Cuál sería el máximo número valor que puede tomar result? Eso depende del valor del parametro y del tipo de numero que es. 
    return result;
}
 

int main() {
    printf("%d\n", what(31));
    printf("%d\n", what(64));
    printf("%d\n", what(127));
    printf("%d\n", what(256));
    printf("%d\n", what(511));
    printf("%d\n", what(1024));
    printf("%d\n", what(2047));
    printf("%d\n", what(4096));

}