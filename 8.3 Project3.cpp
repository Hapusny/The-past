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
	printf("是否使用平方和公式（是选0，否选1）\n");
	int choice = 0;
	scanf_s("%d", &choice);
	if (choice == 0)
	{
		printf("输入你想要的数字\n");
		int a, b = 0;
		scanf_s("%d", &a);
		b = move(a);
		printf("%d", b);
	}
	else
	{
		printf("你是傻逼");
	}
	return 0;
}