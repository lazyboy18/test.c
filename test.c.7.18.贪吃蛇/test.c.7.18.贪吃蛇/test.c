#include"game.h"
int main()
{
	//������ά���飬�����Ϸ����
	char arr[ROW][COL] = { 0 };
	//��ʾ��Ϸ����
	board_original(arr,ROW ,COL);
	display(arr, ROW, COL);
	//�����ͷ����β������
	arr[2][3] = 'o';//��β
	arr[2][4] = '*';//����
	arr[2][5] = 'O';//��ͷ
	display(arr, ROW, COL);
	move(arr, ROW, COL);
	return 0;
}