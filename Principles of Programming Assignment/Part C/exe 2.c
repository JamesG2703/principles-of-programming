/*
Name: James
Date: 2019
Description: This program allows the user to input any times table between 1 and 500.
*/
#include <stdio.h>
int main(void)
{
	int a, b, sum;
	b=1;
	
	printf("Enter an integer: ");
	scanf("%d", &a);
	
	if(a<=500)
	{
	for(b=1; b<=12; b++)
	{
		printf("%d*%d = %d\n", a, b, a*b);
	}
}
	
	if(a>500)
	{
		printf("Error, please re-enter\n");
		printf("Enter an integer: ");
	    scanf("%d", &a);
	    for(b=1; b<=12; b++)
	{
		printf("%d*%d = %d\n", a, b, a*b);
	}
	}
	system("pause");
	return 0;
}
