#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    printf("Valores de las variables ANTES de aplicar i++ y ++j\n");
    printf("i=%d\n",i);
    printf("j=%d\n\n",j);
    
    printf("Valores de las variables DESPUES de aplicar i++ y ++j\n");

    printf("i++ = %d\n", i++);
    printf("++j = %d\n", ++j);
    return 0;
}
