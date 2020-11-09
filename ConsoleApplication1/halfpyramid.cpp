#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void numberPyramid(int number);
void charPyramid(char targetChar);

int main()
{
	char targetChar;
	int targetNumber;
	char menu;

	printf("Enter number [1-9] or char [A-Z] ");
	scanf("%c", &menu);
	if (menu > 64)
	{
		charPyramid(menu);
	}
	else if (menu < 58 && menu > 48)
	{
		numberPyramid(menu-48);
	}else printf("Invalid choise.");

}

void numberPyramid(int targetNumber)
{
	for (int i = 0; i <= targetNumber; i++)
	{
		for(int j = 1; j<=i; j++)
			printf("%d", i);
		printf("\n");
	}
}

void charPyramid(char targetChar)
{
	int repeats = targetChar - 65;
	char printChar = 65;
	int rows = 1;
	while (repeats >= 0)
	{
		for (int i = 0; i < rows; i++)
		{
			printf("%c", printChar);
		}	
		printf("\n");
		rows++;
		printChar++;
		repeats--;
	}
}