#include"game.h"
int main()
{
	//创建二维数组，设计游戏界面
	char arr[ROW][COL] = { 0 };
	//显示游戏界面
	board_original(arr,ROW ,COL);
	display(arr, ROW, COL);
	//设计蛇头与蛇尾与蛇身
	arr[2][3] = 'o';//蛇尾
	arr[2][4] = '*';//蛇身
	arr[2][5] = 'O';//蛇头
	display(arr, ROW, COL);
	move(arr, ROW, COL);
	return 0;
}