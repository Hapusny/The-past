#include<stdio.h>


int move(int num0)
{
	int num1 = 0, num2 = 0;
	num1 = num0 ^ 2;
	while (num1 > 0)
	{
		num2 = num2 ^ 2 + num1 ^ 2;
		num1--;
	}
	return num2;

};
int main()
{
	printf("�Ƿ�ʹ��ƽ���͹�ʽ����ѡ0����ѡ1��\n");
	int choice = 0;
	scanf_s("%d", &choice);
	if (choice == 0)
	{
		printf("��������Ҫ������\n");
		int a, b = 0;
		scanf_s("%d", &a);
		b = move(a);
		printf("%d", b);
	}
	else
	{
		printf("����ɵ��");
	}
	return 0;
}