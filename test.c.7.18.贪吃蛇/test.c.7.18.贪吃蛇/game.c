#include"game.h"
void*board_original(char arr[ROW][COL], int r, int l)
{
	int i = 0;
	for (i = 0; i < l; i++)//��ӡ��������
	{
		arr[0][i] = '#';
		arr[r-1][i] = '#';
		
	}
	for (i = 0; i < r; i++)//��ӡ��������������
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
	printf("**  ��ѡ���ƶ�����-> **\n");
	printf("**     ��w   ��s     **\n");
	printf("**     ��a   ��d     **\n");
	printf("***********************\n");
	printf("***********************\n");
}
//�߶�
void* move(char arr[ROW][COL], int r, int l)
{
	char ch = 0;
	char m = 0;
	while (ch=getchar())
	{
		getchar();
		if ('0' == ch)
		{
			printf("�˳���Ϸ\n");
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