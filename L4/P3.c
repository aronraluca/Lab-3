#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a, b, * x;
	x = (int*)malloc(sizeof(int));
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	*x = a;
	a = b;
	b = *x;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}