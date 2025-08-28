#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo


int main() {
    int i = 10;

    for (i = 9; i >= 0 ; i--)
    {
        printf("i = %d\n",i); // imprime o no el 0?
    }
    
    // while(i--){
    //     printf("i = %d\n",i); // imprime o no el 0?
    // }
}
