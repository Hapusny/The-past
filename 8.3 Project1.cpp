#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int num1, num2, answer;
	printf("�������������ָ����֮���ÿո��������enter��ȷ�ϣ�\n");
	scanf("%d%d", &num1, &num2);
	if (num2 != 0)
	{
		answer = num1;
		while (num2 > 1)
		{
			answer = answer * num1;
			num2--;
		};
		printf("���Ϊ%d", answer);
	}
	else
	{
		printf("���Ϊ1");
	}
	return 0;
}