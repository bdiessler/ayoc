#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo

int main()
{
    int8_t i8 = -10;
    int16_t i16 = 100;
    int32_t i32 = -1000000;
    int64_t i64 = 100000000000;

    uint8_t ui8 = -10;
    uint16_t ui16 = 100;
    uint32_t ui32 = -1000000;
    uint64_t ui64 = 100000000000;

    printf("int8(%lu):               %d \n", sizeof(i8), i8);
    printf("int16(%lu):               %d \n", sizeof(i16), i16);
    printf("int32(%lu):              %d \n", sizeof(i32), i32);
    printf("int64(%lu):               %ld \n\n", sizeof(i64), i64);
    
    printf("uint8(%lu):               %u \n", sizeof(ui8), ui8);
    printf("uint16(%lu):              %u \n", sizeof(ui16), ui16);
    printf("uint32(%lu):              %u \n", sizeof(ui32), ui32);
    printf("uint64(%lu):              %lu \n", sizeof(ui64), ui64);

    return 0;
}
