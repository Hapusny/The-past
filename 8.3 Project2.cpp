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
	printf("是否进行平方和运算，是则输入1\n");
	scanf("%d", &choice);
	if (choice==1)
	{
		int num = 1;
		while (num !=0)
		{
			printf("请输入要运算的数字（一次输入一个数字，输入0则停止）\n");
			scanf("%d", &num);
			answer = answer+calculate(num);
		}
		printf("最终结果为%d", answer);
	}
	else
	{
		printf("结束");
	};
	return 0;
}