#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int b_main()
{
	int n,stop = 0;
	bool prime;

	printf("Enter number: ");
	scanf("%d", &n);
	prime = true;

	for (int i = 2; stop < n; i++)
	{
		prime = true;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && i != j)
				prime = false;
			else if (i == j && prime == true)
			{
				printf("%d\n", i);
				stop++;
			}
		}
	}
	return 0;
}