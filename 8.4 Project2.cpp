#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define compare(num1,num2) (num1>num2?num2:num1)

int main()
{
	int a, b;
	printf("请输入要比较的两个数字\n");
	scanf("%d%d", &a, &b);
	int answer = compare(a, b);
	int* p = &answer;
	printf("较小的数字为%d,其所在地址为%p", answer, p);
	return 0;
}
