#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int calculate(int num0)
{
	int sum = 1, num1 = 0;
	num1 = num0;
	while (num1 > 0)
	{
		sum = sum * num1;
		num1--;
	};
	return sum;
};
int main()
{
	int choice = 0;
	printf("�Ƿ�Ҫ���н׳����㣨����1�����ǣ�����0�����\n");
	scanf("%d", &choice);
	if (choice == 1) {
		int num = 0, a = 1;
		int answer = 0;
		printf("��������Ҫ����׳˵�������\n");
		scanf_s("%d", &num);
		answer = calculate(num);
		printf("�����Ľ׳�Ϊ%d", answer);
	}
	else {
		return 0;
	};
	return 0;
};