/*
Name: James
Date: 2019
Description: This program produces a general times table
*/
#include<stdio.h>
int main(void)
{
	int a, b;
	int n = 12;
	
	for(a=1; a<=n; a++)
	{
		printf("%4d|", a);
		for(b=1;b<=n; b++)
		{
			printf("%4d", a*b);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
