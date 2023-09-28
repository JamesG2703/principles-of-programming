/*
Name: James
Date: 2019
Description: Function layout
*/
#include<stdio.h>
#include<ctype.h>

int findMax(int, int);
int main(void)
{
	int num1, num2;
	char answer;
	
	Commence:
	printf("\nPlease enter first number: ");
	scanf("%d", &num1);
	printf("Please enter second number: ");
	scanf("%d", &num2);
	
	printf("Maximum number is: %d", findMax(num1, num2));
	printf("\nDo you want to continue: (Y/N) ");
	answer=getche();
	answer=toupper(answer);
	if(answer=='Y'){
		goto Commence;
	}
	printf("\n");
	system("pause");
	return 0;
}
int findMax(int i, int j)
{
	int max;
	if(j>i)
	{
		max=j;
	}
	else if(j<i)
	{
		max=i;
	}
	return max;
}
