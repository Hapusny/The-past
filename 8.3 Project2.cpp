#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int calculate(int num1)
{
	int sum;
	sum = num1 * num1;
	return sum;
};

int main()
{
	int choice;
	int answer = 0;
	printf("�Ƿ����ƽ�������㣬��������1\n");
	scanf("%d", &choice);
	if (choice==1)
	{
		int num = 1;
		while (num !=0)
		{
			printf("������Ҫ��������֣�һ������һ�����֣�����0��ֹͣ��\n");
			scanf("%d", &num);
			answer = answer+calculate(num);
		}
		printf("���ս��Ϊ%d", answer);
	}
	else
	{
		printf("����");
	};
	return 0;
}