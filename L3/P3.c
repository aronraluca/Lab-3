#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 1, bit = 31, valoare_bit, bit1, k = 0;
	valoare_bit = 1 & (a >> bit);
	if (valoare_bit == 1)
		printf("Negativ\n");

	else
	{
		bit1 = 0;

		while (bit1 < 32)
		{
			valoare_bit = 1 & (a >> bit1);
			if (valoare_bit == 1)
			{
				bit1 = 32;
				k = -1;
			}
			bit1++;
		}

		if (k == -1)
			printf("Pozitiv\n");
		else
			printf("Zero\n");
	}
	system("pause");
	return 0;
}