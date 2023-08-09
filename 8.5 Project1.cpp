#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

struct student
{
	char name[10];
	short age;
	char school[20];
};

int main()
{
	char uni[50] = { 0 };
	struct student yjh { "余锦辉", 17, "都昌一中" };
	struct student* p1 = &yjh;
	printf("姓名：%s\n年龄：%d\n学校：%s\n", p1->name, p1->age, p1->school);
	printf("请输入录取大学\n");
	scanf("%s", uni);
	strcpy(p1->school, uni);
	printf("\n修改后的信息为：\n\n姓名：%s\n年龄：%d\n学校：%s\n", p1->name, p1->age, p1->school);
	return 0;
}




