#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int top = -1, stiva[MAX_SIZE];

void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("EROARE");
		return;
	}

	stiva[++top] = x;
}

void PrintStiva()
{
	int i;
	for (i = 0; i <= top; i++)
	{
		printf("%d", stiva[i]);
		printf("\n");
	}

}

int main()
{
	int n, a[8], i, k, b[8], nr, N, total = 0, C, x;

	scanf("%d%d", &C, &N);

	do {
		k = 7;
		nr = 0;
		scanf("%d", &n);
		for (i = 0; i < 8; i++)
			a[i] = 0;
		x = n;
		while (n > 0)
		{
			a[k] = n % 2;
			n /= 2;
			k--;
		}

		if (a[7 - C] == 1)
			Push(x);

		total++;
	} while (total != N);

	PrintStiva();
	system("pause");
	return 0;
}