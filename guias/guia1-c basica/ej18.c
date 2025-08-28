#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

int estado = TRISTE; // static duration. File scope

void alcoholizar();
void print_estado();

int main(){
    print_estado(); //triste
    alcoholizar();// cantidad 1 = feliz
    print_estado(); //feliz
    alcoholizar();alcoholizar();alcoholizar();//cantidad 4 = triste
    print_estado(); // que imprime? triste
    }

void alcoholizar(){
    // int cantidad = 0; // si scamos static no puede conservar el valor a medida que aumenta, por lo cual siempre entraria en la primer guarda del if
    static int cantidad = 0; // static duration. block scope
    cantidad++;
    if(cantidad < 3){
        estado = FELIZ;
    }else{
        estado = TRISTE;
    }
    }

void print_estado(){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
    }