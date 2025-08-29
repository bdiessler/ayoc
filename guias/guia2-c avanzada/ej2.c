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

monstruo_t evolution(monstruo_t monster){
    monstruo_t monster_evolution = monster;

    monster_evolution.ataque = monster.ataque + 10;
    monster_evolution.defensa = monster.defensa + 10;
    
    return monster_evolution;

}

int main(){
    printf("Nombre: %s | Vida: %d | Ataque: %f | Defensa: %f\n", lista_monstruos[2].nombre, lista_monstruos[2].vida,  lista_monstruos[2].ataque, lista_monstruos[2].defensa);
    
    monstruo_t monster_evolution = evolution(lista_monstruos[2]);
    
    printf("Nombre: %s | Vida: %d | Ataque: %f | Defensa: %f\n", monster_evolution.nombre, monster_evolution.vida,  monster_evolution.ataque, monster_evolution.defensa);
    return 0;
}

//FORMA ALTERNATIVA printeando con el llamado a funcion como parametro
// int main(){
//     printf("Nombre: %s | Vida: %d | Ataque: %f | Defensa: %f\n", lista_monstruos[2].nombre, lista_monstruos[2].vida,  lista_monstruos[2].ataque, lista_monstruos[2].defensa);
        
//     printf("Nombre: %s | Vida: %d | Ataque: %f | Defensa: %f\n", lista_monstruos[2].nombre, lista_monstruos[2].vida,  evolution(lista_monstruos[2]).ataque, evolution(lista_monstruos[2]).defensa);
//     return 0;
// }