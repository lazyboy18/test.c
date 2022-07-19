#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//字符串转化函数
int strturn(char*ps)
{
	printf("请输入想要修改的内容或退出修改:>");
	scanf("%s", ps);
	if (strcmp(ps, "Name") == 0)//ps本身是一个指针，即地址
	{
		return 1;
	}
	if (strcmp(ps, "Age") == 0)
	{
		return 2;
	}
	if (strcmp(ps, "Sex") == 0)
	{
		return 3;
	}
	if (strcmp(ps, "Tale") == 0)
	{
		return 4;
	}
	if (strcmp(ps, "Addr") == 0)
	{
		return 5;
	}
	if (strcmp(ps, "Out") == 0)
	{
		return 0;
	}
}

//寻找函数
int Findbyname(const struct Contact*ps, char *name)
{
	//两种可能：1.找不到下标  2.找到下标
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->date[i].name, name) == 0)
		{
			return i;
		}

	}
	return -1;

}

void InitContact(struct Contact*ps)//初始化函数
{
	memset(ps->date, 0, sizeof(ps->date));//初始化通讯录
	//针对整一个数组
	ps->size = 0;//设置通讯录只有0个元素

}
void AddContact(struct Contact*ps)
{
	if (ps->size == Max)
	{
		printf("通讯录已满,无法增加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->date[ps->size].name);//name本身是首元素地址
		//给字符串赋值
		printf("请输入年龄:>");
		scanf("%d", &(ps->date[ps->size].age));//此处注意要取地址
		printf("请输入性别:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->date[ps->size].tale);
		printf("请输入地址:>");
		scanf("%s", ps->date[ps->size].addr);	
		printf("输入完毕！\n");
		ps->size++;
	}

}
void ShowContact(const struct Contact*ps)
{
	//system("cls");
	if (ps->size == 0)
	{
		printf("通讯录为空!\n");
	}
	else
	{
		printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		//%-20s "名字" 的意思是包括"名字"该字符串向右，域宽为20
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tale,
				ps->date[i].addr);
				
		}

	}

}
void DelContact(struct Contact*ps)
{
	char name[Max_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//既然有三个函数需要找下标，所以可以封装一个寻找函数
	int ret=Findbyname(ps, name);
	//将下标右边的元素逐一向左移动
	if (-1 == ret)
	{
		printf("找不到所要删除的人\n");

	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];

		}
		ps->size--;//元素个数减一
	}
}

void SearchContact(const struct Contact*ps)
{
	char name[Max_NAME];
	printf("请输入要查询的人的名字:>");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	//将下标右边的元素逐一向左移动
	if (-1 == ret)
	{
		printf("找不到所要查询的人\n");

	}
	else
	{
		printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		printf("%-20s%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->date[ret].name,
			ps->date[ret].age,
			ps->date[ret].sex,
			ps->date[ret].tale,
			ps->date[ret].addr);

	}
}

void ModifyContact(struct Contact*ps)
{
	char name[Max_NAME];
	printf("请输入要修改的人的名字:>");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (-1 == ret)
	{
		printf("找不到所要修改的人\n");

	}
	else
	{
		char input[10] = { 0 };
		int rett = 0;

		do
		{					
			 rett = strturn(input);//rett重新赋值
			 //错误写法：int rett = strturn(input); //ret使用完后恢复为0（初始值）
			switch (rett)
			{				
			case Name:
				printf("请修改姓名:>");
				scanf("%s", ps->date[ret].name);
				break;
			case Age:
				printf("请修改年龄:>");
				scanf("%d", &(ps->date[ret].age));
				break;
			case Sex:
				printf("请修改性别:>");
				scanf("%s", ps->date[ret].sex);
				break;
			case Tale:
				printf("请修改电话号码:>");
				scanf("%s", ps->date[ret].tale);
				break;
			case Addr:
				printf("请修改住址:>");
				scanf("%s", ps->date[ret].addr);
				break;
			case Out:
				printf("退出修改\n");
				break;
			default:
				printf("选择错误\n");
				break;
			}
		} while (rett);

	}

}