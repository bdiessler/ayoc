#include <stdio.h>

int main()
{
    int mensaje_secreto[] = {
        116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
        102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
        103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
        111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110
    };

    // Cuenta cuantos bytes hay y los divide por la cantidad de tamaño que ocupa cada uno
    size_t lenght = sizeof(mensaje_secreto) / sizeof(int);
    // Crea un arreglo con la longitud de bytes necesaria
    char decoded[lenght];

    for (int i = 0; i < lenght; i++)
    {
        // Guarda en cada posicion del arreglo el char que le pertenece a ese int
        decoded[i] = (char) (mensaje_secreto[i]);
    }

    for (int i = 0; i < lenght; i++)
    {
        // Printea cada caracter
        printf("%c", decoded[i]);
    }

    printf("\n");
    
    

    return 0;
}
