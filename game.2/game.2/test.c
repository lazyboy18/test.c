#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };

	//����������������̣�����
	//i��j��ROW��COL�йأ�����Ҫ����������������
	initboard(board,ROW,COL);
	//���̵ĳ�ʼ��������
	display(board, ROW, COL);
	//���β���ʾ����

	
	while (1)
	{
		
		//�������

		playermove(board, ROW, COL);
		//����������
		/*show(board, ROW, COL);*/
		display(board, ROW, COL);
		//��ʾ����
		is_win(board, ROW, COL);
		//�ж���Ӯ��ƽ��
		ret = is_win(board, ROW, COL);
		//�ж��Ƿ���Ҫ������Ϸ������
		if (ret != 'c')
		{
			break;
		}
	
		playermovess(board, ROW, COL);
		/*computermove(board, ROW, COL);*/
		//�����������
		display(board, ROW, COL);
		//��ʾ����
	    is_win(board, ROW, COL);
		//�ж���Ӯ��ƽ�����
		ret = is_win(board, ROW, COL);
		//�ж��Ƿ���Ҫ������Ϸ������
		if (ret != 'c')
		{		
			break;

		}
		
	}

	//ͨ��ret�ķ���ֵ����ӡ������˻���Ӯ���������
	if (ret == '*')
		printf("һ�����Ӯ��\n");
	else if (ret == '#')
		printf("�������Ӯ��\n");
	else if (ret == 'q')
		printf("ƽ�֣�\n");
	
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
	//��Ϊ�û�������Ҫ���ϵ��棬������ѭ����䣬ͬʱ����һ������input!!!
	do{
		menu();
		//��ӡ�˵������û��ж�ѡ��
		printf("��ѡ��<:\n");
		scanf("%d", &input);
		//������Ϸ�Ƿ���Ҫ��ʼ����switch��䣡
			switch (input)
		{
			case 1:
				game();
				//ѡ��ʼʱ������game()����������game()�����ǳ�������岿�֣������Ҫ���Է���game.c���д��������������
				//ʹtest.c�����Եü�࣬ͬʱ������һ�ε��ã���Ϊֻ������ͷ�ļ����ɣ�������
				break;
			case 0:
				printf("�˳���Ϸ������\n");
			default:
				printf("������ѡ�񣡣���\n");
				break;
		}

	} while (input);
    //ͨ��input�����ֵ�ж��Ƿ���Ҫ��ֹѭ������input=0ʱΪ�٣�������ֹѭ����ֵ��ģ�£�����

}



int main()
{
	test();
	//������Ϸ������Ҫ��main()�ⲿ���У���test()û�з���ֵ��Ҳ���ô��Σ�ֱ�ӵ��ü��ɣ�����


	return 0;
}