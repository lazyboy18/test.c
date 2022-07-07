#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };

	//定义数组以设计棋盘！！！
	//i和j与ROW和COL有关，故需要传此两参数！！！
	initboard(board,ROW,COL);
	//棋盘的初始化！！！
	display(board, ROW, COL);
	//修饰并显示棋盘

	
	while (1)
	{
		
		//玩家下棋

		playermove(board, ROW, COL);
		//玩家下棋程序
		/*show(board, ROW, COL);*/
		display(board, ROW, COL);
		//显示棋盘
		is_win(board, ROW, COL);
		//判断输赢或平局
		ret = is_win(board, ROW, COL);
		//判断是否需要继续游戏！！！
		if (ret != 'c')
		{
			break;
		}
	
		playermovess(board, ROW, COL);
		/*computermove(board, ROW, COL);*/
		//电脑下棋程序
		display(board, ROW, COL);
		//显示棋盘
	    is_win(board, ROW, COL);
		//判断输赢或平局情况
		ret = is_win(board, ROW, COL);
		//判断是否需要继续游戏！！！
		if (ret != 'c')
		{		
			break;

		}
		
	}

	//通过ret的返回值，打印玩家与人机输赢情况！！！
	if (ret == '*')
		printf("一号玩家赢！\n");
	else if (ret == '#')
		printf("二号玩家赢！\n");
	else if (ret == 'q')
		printf("平局！\n");
	
}


void menu()
{
	printf("******************************\n");
	printf("***   1.play 0.exit  *********\n");
	printf("******************************\n");


}


void test()
{
	
	
	int input = 0;
	srand((unsigned int)time(NULL));
	//因为用户可能想要不断地玩，所以用循环语句，同时引入一个参数input!!!
	do{
		menu();
		//打印菜单，供用户判断选择！
		printf("请选择<:\n");
		scanf("%d", &input);
		//决定游戏是否需要开始，用switch语句！
			switch (input)
		{
			case 1:
				game();
				//选择开始时，进入game()函数，由于game()函数是程序的主体部分，因而需要独自放在game.c里编写！！！这样可以
				//使test.c部分显得简洁，同时方便下一次调用（因为只需引用头文件即可！！！）
				break;
			case 0:
				printf("退出游戏！！！\n");
			default:
				printf("请重新选择！！！\n");
				break;
		}

	} while (input);
    //通过input的输出值判断是否需要终止循环！！input=0时为假，即可终止循环，值得模仿！！！

}



int main()
{
	test();
	//由于游戏函数主要在main()外部运行，故test()没有返回值，也不用传参，直接调用即可！！！


	return 0;
}