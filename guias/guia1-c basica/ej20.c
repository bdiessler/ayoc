#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo

int b, c;           //b,c: static duration. filescope
void f(void){
    int b, d;       //b,d: automatic duration. Block scope  //b no sigue siendo static por haber sido declarada al principio?
}
void g(int a){
    int c;          //c: automatic duration. blockscope. //c no sigue siendo static por haber sido declarada al principio?
    {
        int a, d;   //a,d: automatic duration. blockscope.
    }
}

int main()
{    


    return 0;
}
