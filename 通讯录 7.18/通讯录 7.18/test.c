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
	struct Contact con;//�ýṹ�����size��struct PeoInfo�����㴫��
	InitContact(&con);//ע�� ��ʼ��ͨѶ¼������ַ
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);//�ҵ��±�
			break;
		case SEARCH://�ҵ��±�
			SearchContact(&con);
			break;
		case MODIFY://�ҵ��±�
			ModifyContact(&con);
			break;
		case SHOW :
			ShowContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");

		}

	} while (input);

	return 0;
}