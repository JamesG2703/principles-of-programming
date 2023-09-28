/*
Name: James
Date: 2020
Description: This program allows the user to input any times table to start from a minimum of 1 and finish on a maximum of 12.
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(void)
{
int number, min, max, i;
i = min;

printf("Enter the number: ");
scanf("%d", &number);
printf("Enter the minimum: ");
scanf("%d", &min);
i = min;
printf("Enter the maximum: ");
scanf("%d", &max);
if(max<=500 && min>=1)
{
	for(i; i<=max; i++)
	{
		if((i-min)%12==0){
			printf("\n=============\n");
			sleep(2);
		}
	
		printf("%d*%d = %d\n", i, number, i*number);
	}
}
else {
	printf("\nInvalid input\n");
}
	
system("pause");
return 0;
}
