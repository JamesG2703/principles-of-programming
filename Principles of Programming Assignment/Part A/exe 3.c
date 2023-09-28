/*
Name: James
Date: 2019
Description: Exe 3, page: 4. This program shows its square and cube of the lower and upper limits for a table. 
*/
#include <stdio.h>
int main(void)
{
	int lower, upper, j;
	printf("Enter lower limit: ");
	scanf("%d",&lower);
	printf("Enter higher limit: ");
	scanf("%d",&upper);
	if(upper<lower)
	{
		printf("Invalid Argument\n");
		system("pause");
		return 0;
	}
	if(lower<upper)
	{
	printf("Integer\tSquare\tCube\n");
	for (j = lower; j <= upper; j++)
	{
		printf("%d\t%d\t%d\n", j, j*j, j*j*j);
	}
}
	system("pause");
	return 0;
}
