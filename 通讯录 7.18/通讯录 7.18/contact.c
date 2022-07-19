#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//�ַ���ת������
int strturn(char*ps)
{
	printf("��������Ҫ�޸ĵ����ݻ��˳��޸�:>");
	scanf("%s", ps);
	if (strcmp(ps, "Name") == 0)//ps������һ��ָ�룬����ַ
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

//Ѱ�Һ���
int Findbyname(const struct Contact*ps, char *name)
{
	//���ֿ��ܣ�1.�Ҳ����±�  2.�ҵ��±�
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

void InitContact(struct Contact*ps)//��ʼ������
{
	memset(ps->date, 0, sizeof(ps->date));//��ʼ��ͨѶ¼
	//�����һ������
	ps->size = 0;//����ͨѶ¼ֻ��0��Ԫ��

}
void AddContact(struct Contact*ps)
{
	if (ps->size == Max)
	{
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->date[ps->size].name);//name��������Ԫ�ص�ַ
		//���ַ�����ֵ
		printf("����������:>");
		scanf("%d", &(ps->date[ps->size].age));//�˴�ע��Ҫȡ��ַ
		printf("�������Ա�:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->date[ps->size].tale);
		printf("�������ַ:>");
		scanf("%s", ps->date[ps->size].addr);	
		printf("������ϣ�\n");
		ps->size++;
	}

}
void ShowContact(const struct Contact*ps)
{
	//system("cls");
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��!\n");
	}
	else
	{
		printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		//%-20s "����" ����˼�ǰ���"����"���ַ������ң����Ϊ20
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
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//��Ȼ������������Ҫ���±꣬���Կ��Է�װһ��Ѱ�Һ���
	int ret=Findbyname(ps, name);
	//���±��ұߵ�Ԫ����һ�����ƶ�
	if (-1 == ret)
	{
		printf("�Ҳ�����Ҫɾ������\n");

	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];

		}
		ps->size--;//Ԫ�ظ�����һ
	}
}

void SearchContact(const struct Contact*ps)
{
	char name[Max_NAME];
	printf("������Ҫ��ѯ���˵�����:>");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	//���±��ұߵ�Ԫ����һ�����ƶ�
	if (-1 == ret)
	{
		printf("�Ҳ�����Ҫ��ѯ����\n");

	}
	else
	{
		printf("%-20s%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("������Ҫ�޸ĵ��˵�����:>");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (-1 == ret)
	{
		printf("�Ҳ�����Ҫ�޸ĵ���\n");

	}
	else
	{
		char input[10] = { 0 };
		int rett = 0;

		do
		{					
			 rett = strturn(input);//rett���¸�ֵ
			 //����д����int rett = strturn(input); //retʹ�����ָ�Ϊ0����ʼֵ��
			switch (rett)
			{				
			case Name:
				printf("���޸�����:>");
				scanf("%s", ps->date[ret].name);
				break;
			case Age:
				printf("���޸�����:>");
				scanf("%d", &(ps->date[ret].age));
				break;
			case Sex:
				printf("���޸��Ա�:>");
				scanf("%s", ps->date[ret].sex);
				break;
			case Tale:
				printf("���޸ĵ绰����:>");
				scanf("%s", ps->date[ret].tale);
				break;
			case Addr:
				printf("���޸�סַ:>");
				scanf("%s", ps->date[ret].addr);
				break;
			case Out:
				printf("�˳��޸�\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
			}
		} while (rett);

	}

}