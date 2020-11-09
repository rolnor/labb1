#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int a_main()
{
	char Name[50], Address[50];
	int Age, Height, Married;
	char Gender;

	printf("Name: ");
	scanf("%s%*c", &Name);
	printf("Age: ");
	scanf("%d%*c", &Age);
	printf("Gender (m/f): ");
	scanf("%c%*c", &Gender);
	printf("Address: ");
	scanf("%s%*c", &Address);
	printf("Married (true/false): ");
	scanf("%d", &Married);
	printf("Height in meters: ");
	scanf("%d", &Height);

	printf("\n\nName: %s \nAge: %d \nGender (m/f): %c \n",Name,Age,Gender);
	printf("Address: %s\nMarried (true/false): %d\nHeight in meters: %d",Address, Married, Height);
	return 0;
}