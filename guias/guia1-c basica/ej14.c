#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo


int main()
{
    // int i = 0;

    // for (int j = 0; j < 1; j++)
    // {
    //     int k = 1;
    // }
    
    // printf("Valor de la variable global i = %d\nValor de la variable local k = %d\n", i, k);
    //Esto no funciona porque no reconoce a k como variable
    

    // int i = 0;

    // for (int j = 0; j < 1; j++)
    // {
    //     int i = 1;
    //     printf("Valor de la variable local i = %d\n", i);
    // }
    
    // printf("Valor de la variable global i = %d\n", i);    
    // EN este caso me imprime ambos valores distintos

    int i = 0;

    for (int j = 0; j < 1; j++)
    {
        int i = 1;
    }
    
    printf("Valor de la variable global i = %d\nValor de la variable local i = %d\n", i, i);
    // Ahora si compila pero en ambos casos me devuelve la variable global i=0


    return 0;
}
