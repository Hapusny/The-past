#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

struct student
{
	char name[7];
	short age;
	char schoolname[13];
};

struct colstudent
{
	char collage[13];
};

int compare(char arr1[], char arr2[])
{
	int i = 0;
	while(arr1[i]==arr2[i]
		&&arr1[i]!='\0'
		&&arr2[i]!='\0')
	{
		i++;
	}
	if (arr1[i] == '\0'
		&&arr2[i]=='\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
};

int main()
{
	struct student zq = { "张卿",17,"都昌一中" };
	printf("%s\n", zq.name);
	printf("%d\n", zq.age);
	printf("%s\n", zq.schoolname);
	printf("请输入录取的大学\n");
	struct colstudent ZQ = {"中南大学"};
	char colname[13];
	scanf("%s", &colname);
	int answer = compare(colname, ZQ.collage);
	if (answer==1)
	{
		printf("%s\n", zq.name);
		printf("%d\n", zq.age);
		strcpy(zq.schoolname, "中南大学");
		printf("%s\n", zq.schoolname);
	}
	else
	{
		printf("结束\n");
	}
	return 0;
}