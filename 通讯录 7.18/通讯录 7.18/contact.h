#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#include<stdlib.h​>
#define Max 100
#define Max_NAME 20
#define Max_SEX 5
#define Max_TELE 12
#define Max_ADDR 30

enum Option2
{
	Out,
	Name,
	Age,
	Sex,
	Tale,
	Addr
};


enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[Max_NAME];
	int age;
	char sex[Max_SEX];
	char tale[Max_TELE];
	char addr[Max_ADDR];
};
struct Contact
{
	struct PeoInfo date[Max];
	int size;
};

//声明函数
void InitContact(struct Contact*ps);
void AddContact(struct Contact*ps);
void ShowContact(const struct Contact*ps);
void SearchContact(const struct Contact*ps);
void ModifyContact(struct Contact*ps);
void DelContact(struct Contact*ps);