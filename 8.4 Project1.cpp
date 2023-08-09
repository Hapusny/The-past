#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int end;

#define check(num1,num2) num1>5&&num2<5?end = 1:end = 0;

int main()
{
	int a, b=0;
	printf("请输入符合标准的两个数字\n");
	scanf("%d%d", &a, &b);
	check(a, b);
	if (end == 1)
	{
		int thing = 0;
		int* p = &thing;
		printf("请输入你要储存的数字\n");
		scanf("%d", &thing);
		printf("储存完毕，其所在位置为%p", p);
	}
	else
	{
		printf("错误");
	};
	return 0;
}


