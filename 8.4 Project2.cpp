#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define compare(num1,num2) (num1>num2?num2:num1)

int main()
{
	int a, b;
	printf("������Ҫ�Ƚϵ���������\n");
	scanf("%d%d", &a, &b);
	int answer = compare(a, b);
	int* p = &answer;
	printf("��С������Ϊ%d,�����ڵ�ַΪ%p", answer, p);
	return 0;
}
