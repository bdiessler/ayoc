#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("a = 5, b = 3, c = 2, d = 1\n\n");

    printf("a + b * c / d = %d\n", a+b*c/d);
    printf("a %% b = %d\n", a%b);
    printf("a == b = %d\n", a==b);
    printf("a!=b = %d\n", a!=b);
    printf("a&b = %x\n", a&b);
    printf("a|b = %x\n", a|b);
    printf("a = %d\n", a);
    printf("a&&b = %d\n", a&&b);
    printf("a||b = %d\n", a||b);
    printf("a<<1 = %x\n", a<<1);
    printf("a>>1 = %x\n", a>>1);
    printf("a+=b = %d\n", a+=b);
    printf("a-=b = %d\n", a-=b);
    printf("a*=b = %d\n", a*=b);
    printf("a/=b = %d\n", a/=b);
    printf("a%%=b = %d\n", a%=b);

    return 0;
}