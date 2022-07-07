void game();
#include<stdio.h>
#define ROW 10
#define COL 10
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROW][COL],int row,int col);
void display(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
//void show(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row,int col);
int isfull(char board[ROW][COL], int row, int col);
void playermovess(char board[ROW][COL], int row, int col);