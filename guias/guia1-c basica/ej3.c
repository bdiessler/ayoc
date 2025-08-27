#include <stdio.h>

int main()
{
    char c = 100;
    unsigned char uc = -1;
    short s = -8712;
    unsigned short us = -312;
    int i = 123456;
    unsigned int ui = -12133;
    long l = 1234567890;
    unsigned long ul = -123891723;
    float f = 4.02;
    
    // %c para char
    // %h para short
    // %hu para unsigned short
    // %d para char, int
    // %u para unsigned char, unsigned int
    // %ld para long
    // %lu para unsigned long
    // %f para float

    printf("char(%lu):              %c \n", sizeof(c), c);
    printf("char(%lu):              %d \n", sizeof(c), c);
    printf("unsigned char(%lu):     %u \n", sizeof(uc), uc);
    printf("short(%lu):             %hd \n", sizeof(s), s);
    printf("unsigned short(%lu):    %hu \n", sizeof(us), us);
    printf("int(%lu):               %d \n", sizeof(i), i);
    printf("unsigned int(%lu):      %u \n", sizeof(ui), ui);
    printf("long(%lu):              %ld \n", sizeof(l), l);
    printf("unsigned long(%lu):     %lu \n", sizeof(ul), ul);
    printf("float(%lu):             %f \n", sizeof(f), f);


    return 0;
}
