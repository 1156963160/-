#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);


//告诉我们四种游戏的状态
//玩家赢'*'
//电脑赢'#'
//游戏继续'Q'
//平局'C'
char Iswin(char board[ROW][COL], int row, int col);
