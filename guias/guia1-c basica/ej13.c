#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo

int main(void)
{
    uint32_t contador[6]= {0};

    srand(time(NULL));
    int random_variable = rand();
    printf("Random value on [0,%d]: %d\n", RAND_MAX, random_variable);
 
    for (int n=0; n != 60000000; ++n) {
        // 1+ para que llegue al 6
        int x = 1 + rand() % 6;
        contador[x-1]++;
    }
    
    printf("Resultado de los dados: \n");
    for (int i = 0; i < 6; i++){
        // +1 para que empiece en lado 1
        printf("Lado %d: %u\n", i+1, contador[i]);
    }
    
        
}
