#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int num1, num2, answer;
	printf("请输入底数及其指数（之间用空格隔开并按enter键确认）\n");
	scanf("%d%d", &num1, &num2);
	if (num2 != 0)
	{
		answer = num1;
		while (num2 > 1)
		{
			answer = answer * num1;
			num2--;
		};
		printf("结果为%d", answer);
	}
	else
	{
		printf("结果为1");
	}
	return 0;
}