#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <stdlib.h>
#define ROW 20
#define COL 70
void*board_original(char arr[ROW][COL], int r, int l);
void*display(char arr[ROW][COL], int r, int l);
void* move(char arr[ROW][COL], int r, int l);