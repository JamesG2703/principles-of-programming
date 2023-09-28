/*
Name: James
Date: 2019
Description: This program allows the user to keep making requests for times tables until he enters a zero.
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
int main(void)
{
	int a, b, sum;
	b=1;
	
	while(a != 0)
	{
	printf("Enter an integer (Enter 0 to quit): ");
	scanf("%d", &a);
	
	if(a>500 || a == 0)
	{
		printf("Good bye\n");
		continue;
	}
	
	for(b=1; b<=12; b++)
	{
		printf("%d*%d = %d\n", a, b, a*b);
	}
	}
	system("pause");
	return 0;
}
