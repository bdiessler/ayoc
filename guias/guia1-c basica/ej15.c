#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo

int factorial(int n);

int main(){
    int n = 10;
    int x = factorial(n);

    printf("El factorial de %d es %d\n", n, x);
    return 0;
}

int factorial(int n){
    int x = 1;

    for (int i= 0 ; i <= n; i++){
        if (i==0){
            x= x*1;
        }
        else{
            x=x*i;
        }
    }

    return x;
}
