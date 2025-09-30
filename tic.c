#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
char PLAYER = 'X';
char COMPUTER = 'O';
void resetBoard;
void board;
void winner;
void checkingLine;
void checkingWinner;
int playerMove;
// main funtion
int main() {
    char board[3][3];
    bool win = 0;
    resetBoard(board);
    do {
        playerMove;
        win = checkingLine;

    } while(win == 0);


    return 0;
}

void resetBoard(char board[][]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            board[i][j] = ' ';
        }
        
    }
    return 0;
}
int playerMove{
    char move = '';

    return move;
}
void board;
void winner(char who[10]){
    if (who[10] == "PLAYER")
    {
        printf("PLAYER WINS\n");
    }
    else if (who[10] == "COMPUTER")
    {
        printf("COMPUTER WINS\n");
    }
    
};

// checking the lines for victory condition
void checkingLine{
    //case 1
    if (board[0][0] == board[0][1] && board[0][0] == board[0][2])
    {
        printf("win :>> %c\n");
    }
    //case 2
    if (board[1][0] == board[1][1] && board[1][0] == board[1][2])
    {
        printf("win :>> %c\n");
    }
    //case 3
    if (board[2][0] == board[2][1] && board[2][0] == board[2][2])
    {
        printf("win :>> %c\n");
    }
    //case 4
    if (board[0][0] == board[1][0] && board[0][0] == board[2][0])
    {
        printf("win :>> %c\n");
    }
    //case 5
    if (board[0][1] == board[1][1] && board[0][1] == board[2][1])
    {
        printf("win :>> %c\n");
    }
    //case 6
    if (board[0][2] == board[1][2] && board[0][2] == board[2][2])
    {
        printf("win :>> %c\n");
    }
    //case 7
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        printf("win :>> %c\n");
    }
    //case 8
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0]
    {
        printf("win :>> %c\n");
    }
    return 0;
}
void checkingWinner;
//
