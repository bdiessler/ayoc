#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo


int main()
{
    uint32_t a = 0x77700000; //11100....0
    uint32_t b = 0x00000077; //000....111
    uint32_t c = 0x00000000; //000....00
        
    uint32_t maska = 0x70000000; //11100....0
    uint32_t maskb = 0x00000007; //000....111

    uint32_t high_a = (a & maska) >> 28;
    uint32_t low_b = b & maskb;
    uint32_t low_c = c & maskb;



    printf("Son iguales high a y low b: %d\n", high_a == low_b);
    printf("Son iguales high a y low c: %d\n", high_a == low_c);

    return 0;
}
