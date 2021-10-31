#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define row 9
#define col 9
#define rows row+2
#define cols col+2
#define COUNT 10
void InitBoard(char board[rows][cols], int ROWS, int COLS,char set);
void DisplayBoard(char board[rows][cols],int ROW,int COL );
void setmine(char board[rows][cols], int ROW, int COL);
void findmine(char mine[rows][cols], char show[rows][cols], int ROW, int COL);