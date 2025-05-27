#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char winner);

int main()
{
    char winner = ' ';

    resetBoard();

    while(winner == ' ' && checkFreeSpaces() != 0)
    {
        printBoard();

        playerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;

        }
        computerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;

        }
    }
    printBoard();
    printWinner(winner);

    return 0;
}

void resetBoard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void printBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}   
int checkFreeSpaces()
{
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void playerMove()
{
    int x;
    int y;

    do
    {
        printf("Enter row #(1-3) : ");
        scanf("%d", &x);
        x--;
        printf("Enter column #(1-3) : ");
        scanf("%d", &y);
        y--;
    
        if(board[x][y] != ' ')
        {
            printf("Invalid Move!\n");
        }
        else
        {
           board[x][y] = PLAYER;
           break;
        }
    } while(board[x][y] != ' ');
}
void computerMove()
{
    int x = -1, y = -1;

    // Try to win
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == ' ')
            {
                board[i][j] = COMPUTER;
                if(checkWinner() == COMPUTER)
                {
                    return;
                }
                board[i][j] = ' ';
            }
        }
    }

    // Try to block player win
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == ' ')
            {
                board[i][j] = PLAYER;
                if(checkWinner() == PLAYER)
                {
                    board[i][j] = COMPUTER;
                    return;
                }
                board[i][j] = ' ';
            }
        }
    }

    // Take center
    if(board[1][1] == ' ')
    {
        board[1][1] = COMPUTER;
        return;
    }

    // Take one of the corners
    int corners[4][2] = {{0,0}, {0,2}, {2,0}, {2,2}};
    for(int i = 0; i < 4; i++)
    {
        x = corners[i][0];
        y = corners[i][1];
        if(board[x][y] == ' ')
        {
            board[x][y] = COMPUTER;
            return;
        }
    }

    // Take any free space
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == ' ')
            {
                board[i][j] = COMPUTER;
                return;
            }
        }
    }
}
char checkWinner()
{
    //check rows
    for(int i = 0; i < 3; i++)
    {
       if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
       {
            return board[i][0];
       } 
    }
    // check columns
    for(int i = 0; i < 3; i++)
    {
       if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
       {
            return board[0][i];
       } 
    }
    // check diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
       {
            return board[0][0];
       } 
       if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
       {
            return board[0][2];
       } 

    return ' ';
}
void printWinner(char winner)
{
    if(winner == PLAYER)
    {
        printf("YOU WIN! ");
    }
    else if(winner == COMPUTER)
    {
        printf("YOU LOSE! ");
    }
    else
    {
        printf("IT'S A TIE! ");
    }
}
