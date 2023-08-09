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
	printf("是否要进行阶乘运算（输入1代表是，输入0代表否）\n");
	scanf("%d", &choice);
	if (choice == 1) {
		int num = 0, a = 1;
		int answer = 0;
		printf("请输入需要运算阶乘的正整数\n");
		scanf_s("%d", &num);
		answer = calculate(num);
		printf("该数的阶乘为%d", answer);
	}
	else {
		return 0;
	};
	return 0;
};