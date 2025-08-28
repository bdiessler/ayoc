#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

int estado = TRISTE; // static duration. File scope

void ser_feliz();
void print_estado();

int main(){
    print_estado(); //Imprime el estado inicial: Triste
    ser_feliz();
    print_estado(); // qu´e imprime? feliz
    //Esta vez las funciones cambian el valor de una variable con filescope, asique cambia el valor
    }

void ser_feliz(){
    estado = FELIZ;
    }

void print_estado(){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
    }