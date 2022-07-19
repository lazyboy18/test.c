#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("******************************\n");
	printf("**** 1.add       2.del    ****\n");
	printf("**** 3.search    4.modify ****\n");
	printf("**** 5.show      0.exit   ****\n");
	printf("******************************\n");
}


int main()
{
	struct Contact con;//该结构体包囊size与struct PeoInfo，方便传参
	InitContact(&con);//注意 初始化通讯录，传地址
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);//找到下标
			break;
		case SEARCH://找到下标
			SearchContact(&con);
			break;
		case MODIFY://找到下标
			ModifyContact(&con);
			break;
		case SHOW :
			ShowContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");

		}

	} while (input);

	return 0;
}