/*
Name: James
Date: 2019
Description: Exercise 5, page: 4. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	//variables
	int i;
	int max, min, total;
	int marks [20];
	srand (time(NULL));
	//random numbers
	for(i=0; i<20; i++){
		if(i%8==0){
			printf("\n");
		}
		marks[i] = rand()%101;
		printf(" %4d ", marks[i] );
		total = total + marks[i];
		if(marks[i]<=min)
		{
		min = marks[i];
		}
		if(marks[i]>max)
		{
		max = marks[i];
		}
	}
	printf("\n Maximum = %4d ",max );
	printf("\n Minimum = %4d ",min );
	printf("\n Average = %4d", total/20);
	
	printf("\n");
	system("Pause");
	return 0;
}
