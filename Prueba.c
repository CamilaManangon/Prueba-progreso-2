#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo(int x, int y, int cmov){
    char mov;
    imprimirMatriz(x,y);
    do{
        
        printf("Ingrese movimiento que quiere realizar: ");
        scanf("%c",&mov);
        printf("\n");
        moverme(x, y, mov, cmov);
        imprimirMatriz(x,y);
    }while(x!=4 && x!=4);
}

int main(void){
    int opc;
    int x = 0;//filas
    int y = 0;//columnas
    int cmov = 0;

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
            case 1:
            juegoNuevo(x,y,cmov);
            break;
            case 2:
            printf("Camila Manangon\nID Banner: A00108321\n");
            break;
            default:
            printf("Saliste del menu.\n");
        }
    } while(opc!=3);
    return 0;
}