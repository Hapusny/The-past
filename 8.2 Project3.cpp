#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int move(int num0) {
	int num1 = 0;
	num1 = num0 >> 3;
	return num1;
}
int main() {
	int one[] = {8,24,64};
	int num = 0, answer = 0;
	printf("������������ѡ��һ������2��������3�ֽڲ���\n%d,%d,%d\n", one[0],one[1],one[2]);
	scanf("%d",& num);
	answer = move(num);
	printf("���Ϊ%d", answer);
	return 0;

}