#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//ö��

//enum Sex
//ö�ٵĶ���
//{
//	//ö�ٵĿ���ȡֵ--���� �ɸ�ֵ
//	//ֻ�������︳ֵ
//	MALE=5,//0
//	FEMALE=3,//1
//	SECRET=4//2
//};
//
//
//
//int main()
//{
//	enum Sex s = MALE;
//	//printf("%d %d %d\n", MALE,FEMALE,SECRET);
//	printf("%d\n", s);
//	return 0;
//}

//����--������

union Un
{
	char c;
	int i;
	char b;
	short f;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//4
	//c��i���ÿռ䣬����������Ĵ�С����������Ա�Ĵ�С
	//������Ա��С����������������������ʱ��
	//����Ҫ���뵽����������������
	//��������Ķ���������������Ĵ�С��
	//�������������͵Ĵ�С
	//c��i����ͬʱʹ��
	printf("%p\n", &(u));//006FF7D0		
    printf("%p\n", &(u.c));//006FF7D0
	printf("%p\n", &(u.i));//006FF7D0
	u.i = 300;//����������ڴ��Ϊ 2c 01 00 00
	//char c  ֻ��ȡ 2c  ==44
	printf("%d\n", u.c);//44

	return 0;
}