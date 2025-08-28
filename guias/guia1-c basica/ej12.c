#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo


int main()
{
//     uint32_t d = 4; //tamaño de la lista -------- pq no puedo hacer esto
//     uint32_t a[d] = {1,2,3,4};
//     uint32_t b[d] = {0};
    
    uint32_t a[4] = {1,2,3,4};
    uint32_t b[4] = {0};
    uint32_t n = 4; //rotacion
    size_t lenght = (sizeof(a) / sizeof(a[0])-1); //ultimo indice

    for (int i = 0; i <= (int) lenght; i++)
    {
        if (i==(int) lenght) //caso del ultimo indice
        {
            b[lenght] = a[-1+n];
        }

        else //resto de casos
        {
            b[i] = a[(i+n) % (lenght+1)];
        }
        
        
    }



    printf("a = {");
    for (int i = 0; i < (int)(lenght+1); i++)
    {
        printf("%u,", a[i]);
    }
    
    printf("}\n");
    
    printf("b = {");
    for (int i = 0; i < (int)(lenght+1); i++)
    {
        printf("%u,", b[i]);
    }
    printf("}");
    
    return 0;
}
