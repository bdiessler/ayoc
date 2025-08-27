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

    printf("char(%lu):              %d \n", sizeof(c), c);
    printf("unsigned char(%lu):     %u \n", sizeof(uc), uc);
    printf("short(%lu):             %d \n", sizeof(s), s);
    printf("unsigned short(%lu):    %u \n", sizeof(us), us);
    printf("int(%lu):               %d \n", sizeof(i), i);
    printf("unsigned int(%lu):      %u \n", sizeof(ui), ui);
    printf("long(%lu):              %ld \n", sizeof(l), l);
    printf("unsigned long(%lu):     %lu \n", sizeof(ul), ul);
    printf("float(%lu):             %f \n", sizeof(f), f);


    return 0;
}
