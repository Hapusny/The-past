#include<stdio.h>;
int main()
{
	double num1 = 0.00;
	double num2 = 0.00;
	double num3 = 0.00;
	scanf_s("%lf%lf", &num1, &num2);
	num3 = num1 + num2;
	printf("%lf", &num3);
	return 0;
}