#include <stdio.h>

int g = 10;

void functionA() {
    int a = 20;
    static int b = 30;

    printf("Dentro de functionA:\n");
    printf(" g = %d\n", g);
    printf(" a = %d\n", a);
    printf(" b = %d\n", b);

    // Modificaci´on de las variables
    g += 5;
    a += 10;
    b += 5;
}

void functionB() {
    int a = 40;
    static int c = 50;

    printf("\nDentro de functionB:\n");
    printf(" g = %d\n", g);
    printf(" a = %d\n", a);
    printf(" c = %d\n", c);

    // Modificaci´on de las variables
    g += 5;
    a += 10;
    c += 5;
}

int main() {
    printf("Dentro de main:\n");
    printf(" g = %d\n", g); //10

    functionA();//g=15, a=30, b=35
    functionB();//g=20, a=50, c=55
    functionA();//g=25, a=30, b=40
    functionB();//g=30, a=50, c=60

    printf("\nFinal en main:\n");
    printf(" g = %d\n", g); //30

    return 0;
}