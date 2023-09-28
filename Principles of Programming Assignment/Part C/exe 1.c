/*
Name: James
Date: 2019
Description: This program allows the user to input any times table.
*/
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Enter an integer: ");
	scanf("%d", &a);
	for(b=1; b<=12; ++b)
	{
		printf("%d*%d = %d\n", a, b, a*b);
	}
	system("pause");
	return 0;
}
