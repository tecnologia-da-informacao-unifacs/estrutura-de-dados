#include <stdlib.h>
#include <stdio.h>

int menu(){

    int action= 0;

    printf(" 1 Mover para cima\n");
    printf(" 2 Mover para baixo\n");
    printf(" 3 Mover para direita\n");
    printf(" 4 Mover para esquerda\n");
    printf(" 5 Mostrar Mapa\n");

    scanf("%d", &action);

    return action;
}

int * coordinates(int board[5][5]){

    static int  coord[1];
    int x, y;

    for(x =0; x<=4; x++){

        for(y =0; y<=4; y++){

            if(board[x][y] == 1){

                coord[0] = x;
                coord[1] = y;

                return  coord; 
            }

        }

    }

}
int main(){


    int board[5][5];
    int robot = 1;
    int *coords;
    int x,y, z;
    char action = 's';

    // inicializando tabuleiro
    for(x=0; x <= 4; x++){
        for(y=0; y <= 4; y++){
            
            board[x][y]= 0;

        }
    }


    // colocando robô no tabuleiro
    board[1][0] =  robot;


    while( action = 's' ){
        switch( menu() ){

            case 1:

                coords =coordinates(board);

                if(!(coords[0] <= 0){

                        // mudando a posição do robô
                    board[coords[0]][coords[1]] = 0;

                    board[coords[0] - 1 ][coords[1]] = robot;

                    coords =coordinates(board);

                    printf("A nova posição do robô é: %d , %d\n", coords[0], coords[1]);

                }else{

                    printf("Impossível subir\n");
                }
            break;

            case 2:
                coords =coordinates(board);

                if(!(coords[0] >= 4)){

                    // mudando a posição do robô
                    board[coords[0]][coords[1]] = 0;

                    board[coords[0] + 1 ][coords[1]] = robot;

                    coords =coordinates(board);

                    printf("A nova posição do robô é: %d , %d\n", coords[0], coords[1]);

                }else{

                    printf("Impossível descer\n");
                }
            break;

        }

        printf("Deseja continuar s ou n\n");
        scanf("%s", &action);

    }
    





}
