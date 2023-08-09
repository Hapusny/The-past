#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

struct OPC
{
	char name[10];
	short star;
};

int main()
{
	int age;
	struct OPC dlk { "迪卢克",5 };
	printf("姓名:%s\n星级:%d\n", dlk.name, dlk.star);
	printf("请输入你的年龄\n");
	scanf("%d", &age);
	if (age == 17)
	{
		int num1 = 0;
		int* p = &num1;
		printf("请输入你想存入的数字\n");
		scanf("%d",&num1);
		printf("存入完毕，其所在地址为%p\n", p);
	}
	else
	{
		int num2 = 0;
		printf("是否查询录取大学（是则任意输入一个数字）\n");
		scanf("%d",&num2);
		printf("中南大学\n");
	};
	return 0;
}