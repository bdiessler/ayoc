#include <stdio.h>
#include <stdint.h> //biblioteca para ints con tamaño fijo
#define name_len 20

typedef struct{
    char nombre[name_len + 1];
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

monstruo_t lista_monstruos[3]={
    {"Juanito", 1000, 50, 500},
    {"Pepite", 200, 500, 50},
    {"Juanita", 500, 200, 300}
};

int main(){
    for (int i = 0; i < 3; i++) {
        printf("Nombre: %s, Vida: %d\n", lista_monstruos[i].nombre, lista_monstruos[i].vida);
    }
    return 0;
}
