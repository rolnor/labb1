#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bounce(int n);

int c_main()
{
	int n;
	printf("Give a natural number:");
	scanf("%d", &n);
	if(n > 0)
		bounce(n);
	else printf("Error! Input cannot be negative");
	return 0;
}

void bounce(int n)
{
	printf("%d",n);
	if (n > 0)
		bounce(n - 1);
	if(n!=0)
		printf("%d", n);
}