#include"game.h"
void*board_original(char arr[ROW][COL], int r, int l)
{
	int i = 0;
	for (i = 0; i < l; i++)//打印上下两行
	{
		arr[0][i] = '#';
		arr[r-1][i] = '#';
		
	}
	for (i = 0; i < r; i++)//打印左右两竖列两行
	{
		arr[i][0] = '#';
		arr[i][l-1] = '#';

	}
	int j = 0;
	for (i = 1; i < r - 1; i++)
	{
		for (j = 1; j < l-1; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void*display(char arr[ROW][COL], int r, int l)
{
	system("cls");
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}	
	printf("***********************\n");
	printf("***********************\n");
	printf("**  请选择移动方向-> **\n");
	printf("**     上w   下s     **\n");
	printf("**     左a   右d     **\n");
	printf("***********************\n");
	printf("***********************\n");
}
//蛇动
void* move(char arr[ROW][COL], int r, int l)
{
	char ch = 0;
	char m = 0;
	while (ch=getchar())
	{
		getchar();
		if ('0' == ch)
		{
			printf("退出游戏\n");
			break;
		}
		if ('w' == ch)
		{


		}
		if ('a' == ch)
		{


		}
		if ('s' == ch)
		{


		}
		if ('d' == ch)
		{


		}

	}









}