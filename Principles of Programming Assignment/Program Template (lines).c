/*
Name: James
Date: 2019
Description: Example Template 2
*/
#include<stdio.h>

int main(void){
	//variables
	int score[10]={3, 5, 10, 4, 6, 9, 10};
	int i, j;
	
	//10 by 10 starts
	for(i=1;i<=10;i++)
	{
		printf("%d\t", i);
		for(j=1;j<=score[i-1];j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	//End
printf("\n");
system("pause");
return 0;
}

