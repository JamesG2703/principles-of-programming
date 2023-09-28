/*
Name: James
Date: 2019
Description: Exe 2, page: 3. Enter an integer and prints all integers up to and including a value larger than 10.
*/
#include <stdio.h>
int main(void)
{
	int x, sum;
	printf("\nPlease enter your number: ");
	scanf("%d", &x);
	sum=x+10;
	printf("Result is: ");
	for (x; x<=sum; x++)
	{
		printf(" %d ", x);
	}
	printf("\n");
	system("Pause");
	return 0;
}
