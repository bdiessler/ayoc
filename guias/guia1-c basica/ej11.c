#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo


int main()
{
    uint32_t a[4] = {1,2,3,4};
    uint32_t b[4] = {0};

    for (int i = 0; i <= 3; i++)
    {
        if (i==3)
        {
            b[3] = a[0];
        }

        else
        {
            b[i] = a[i+1];
        }
        
        
    }



    printf("a = {");
    for (int i = 0; i < 4; i++)
    {
        printf("%u,", a[i]);
    }
    
    printf("}\n");
    
    printf("b = {");
    for (int i = 0; i < 4; i++)
    {
        printf("%u,", b[i]);
    }
    printf("}");
    
    return 0;
}
