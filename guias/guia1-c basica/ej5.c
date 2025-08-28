#include <stdio.h>

int main()
{
    float i = 0.1;
    double d = 0.1;

    printf("i como float: %f \n", i);
    printf("i como double: %f \n", d);

    int id = (int) i;
    int dd = (int) d;

    printf("i como float: %d \n", id);
    printf("i como double: %d \n", dd);

    // Que es lo que pasa? Se trunca?

    return 0;
}
