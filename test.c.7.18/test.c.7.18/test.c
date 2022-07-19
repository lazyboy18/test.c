#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//枚举

//enum Sex
//枚举的定义
//{
//	//枚举的可能取值--常量 可赋值
//	//只能在这里赋值
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

//联合--共用体

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
	//c与i共用空间，联合体变量的大小至少是最大成员的大小
	//当最大成员大小不是最大对齐数的整数倍的时候
	//，就要对齐到最大对齐数的整数倍
	//对于数组的对齐数不是它整体的大小，
	//而是其数据类型的大小
	//c与i不能同时使用
	printf("%p\n", &(u));//006FF7D0		
    printf("%p\n", &(u.c));//006FF7D0
	printf("%p\n", &(u.i));//006FF7D0
	u.i = 300;//将联合体的内存改为 2c 01 00 00
	//char c  只读取 2c  ==44
	printf("%d\n", u.c);//44

	return 0;
}