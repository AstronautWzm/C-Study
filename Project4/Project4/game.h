#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define row 3
#define col 3
void initboard(char board[row][col],int ROW ,int COL);
void displayboard(char board[row][col], int ROW, int COL);
void playmove(char board[row][col], int ROW, int COL);
void computermove(char board[row][col], int ROW, int COL);
char whowin(char board[row][col], int ROW, int COL);//���Ӯ-*������Ӯ-#��ƽ��-Q��������Ϸ-C