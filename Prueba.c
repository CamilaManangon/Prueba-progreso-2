#include <stdio.h>
#include "maze.h"

int main(void){
    int opc;
    int maze[5][5] = {
    {0,1,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,0},
    {0,1,0,1,0},
    {1,0,0,1,0}
    };


    printf("Bienvenido al juego del laberinto\n");
    printf("1.Jugar\n2.Creditos\n3.Salir\n");
    printf("Ingrese la opcion que desea realizar.\n");
    scanf("%d", &opc);
    while(opc<=0 || opc>3){
        printf("Dato invalido.\n");
        printf("Ingrese la opcion que desea realizar.\n");
        scanf("%d", &opc);
    }
    do{
        switch(opc){
        case 2:
        printf("Camila Manangon\nID Banner: A00108321\n");
        break;
        default:
        printf("Saliste del menu.\n");
        }
    } while(opc!=3);
    return 0;
}