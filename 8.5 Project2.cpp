#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct OPC
{
	char name[10];
	short star;
};

int main()
{
	int age;
	struct OPC dlk { "��¬��",5 };
	printf("����:%s\n�Ǽ�:%d\n", dlk.name, dlk.star);
	printf("�������������\n");
	scanf("%d", &age);
	if (age == 17)
	{
		int num1 = 0;
		int* p = &num1;
		printf("������������������\n");
		scanf("%d",&num1);
		printf("������ϣ������ڵ�ַΪ%p\n", p);
	}
	else
	{
		int num2 = 0;
		printf("�Ƿ��ѯ¼ȡ��ѧ��������������һ�����֣�\n");
		scanf("%d",&num2);
		printf("���ϴ�ѧ\n");
	};
	return 0;
}