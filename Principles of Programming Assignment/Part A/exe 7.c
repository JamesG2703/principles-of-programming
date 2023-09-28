/*
Name: James
Date: 2019
Description: This program declares a 3 by 5 array and initialises it to some values of your choice.
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int data [3][5] = {{57, 3, 99, 33, 21}, {56, 57, 91, 55, 11}, {23, 88, 66, 44, 48}};
	int r,c;
	int i,l;
	int iRow, iCol, sum, highest;
	int iMark;
	
	printf("First array\n");
	for (r=0; r<3; r++)
	{ 
		for (c=0; c<5; c++)
		{ printf("%4d", data [r][c]);
		}
		printf("\n");
	}
	
	printf("Second array(doubled values)\n");
	for (r=0; r<3; r++)
	{ 
		for (c=0; c<5; c++)
		{ printf("%4d", data [r][c]*2);
		}
		printf("\n");
	}

system("pause");
return 0;
}
