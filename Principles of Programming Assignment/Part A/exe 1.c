/*
Name: James
Date: 2019
Description: Exe 1, page: 3. This program converts minutes into hours and minutes
*/
#include <stdio.h>
int main(void){
	int minutes;
	int hours;


	printf("Enter minutes: ");
	scanf("%d", &minutes);
	
	while (minutes > 0)
	{
		printf("%d minutes are ",minutes);
		hours = minutes /60;
		minutes = minutes%60;
		printf("%d hour(s) and %d minute(s).\n",hours,minutes);
		printf("Enter minutes: ");
		scanf("%d", &minutes);
	}
	printf("Bye\n");
	system("Pause");
	return 0; 
}
