/*
Name: James
Date: 2019
Description: This program will take an array of ints as an argument and return the sum of the elements of the array.
*/
#include<stdio.h>
#include<ctype.h>

int sumArray(int data[], int n);
int main(void)
{
	int myArray[]={64, 3, 86, 43, 17};
	printf("Total is: %d", sumArray(myArray, sizeof(myArray)/sizeof(myArray[0])));
	
	printf("\n");
	system("pause");
	return 0;
}
int sumArray(int data[], int n)
{
	int sum = 0;
	int i;
	for(i=0; i<n; i++)
	{
		sum += data[i];
	}
	return sum;
}
