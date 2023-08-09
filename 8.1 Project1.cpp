#include<stdio.h>
extern int A ,
B ,
C;
int main()
{
	scanf_s("%d%d", &A ,& B);
	C = A + B;
	printf("%d", C);

	return 0;
}


