#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int end;

#define check(num1,num2) num1>5&&num2<5?end = 1:end = 0;

int main()
{
	int a, b=0;
	printf("��������ϱ�׼����������\n");
	scanf("%d%d", &a, &b);
	check(a, b);
	if (end == 1)
	{
		int thing = 0;
		int* p = &thing;
		printf("��������Ҫ���������\n");
		scanf("%d", &thing);
		printf("������ϣ�������λ��Ϊ%p", p);
	}
	else
	{
		printf("����");
	};
	return 0;
}


