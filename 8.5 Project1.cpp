#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

struct student
{
	char name[10];
	short age;
	char school[20];
};

int main()
{
	char uni[50] = { 0 };
	struct student yjh { "�����", 17, "����һ��" };
	struct student* p1 = &yjh;
	printf("������%s\n���䣺%d\nѧУ��%s\n", p1->name, p1->age, p1->school);
	printf("������¼ȡ��ѧ\n");
	scanf("%s", uni);
	strcpy(p1->school, uni);
	printf("\n�޸ĺ����ϢΪ��\n\n������%s\n���䣺%d\nѧУ��%s\n", p1->name, p1->age, p1->school);
	return 0;
}




