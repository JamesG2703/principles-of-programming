/*
Name: James
Date: 2019
Description: Game of Forty-Two
*/
#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
#include<ctype.h> 
#include<windows.h> 
int main(void)
{
int randomnumber;
int score=0;
char choice; //y or n
int comrandnumber;
int comscore=0;
int gameover=0;
int replay=0;
srand(time(NULL));


printf("Do you want to play?");
choice = getch();
choice = toupper(choice);
if(choice =='N')
{
	printf("\nBye\n");
	system("pause");
	return 0;
}

if(choice == 'Y')
{
	while(score < 42 && choice == 'Y') {
			srand(time(NULL));
			randomnumber = rand()%21+1;
			printf("\nYour number is: %d\n", randomnumber);
			score += randomnumber;
			printf("\nYour score so far is: %d\n", score);
			
			printf("Do you want to input another number?");
        	choice = getch();
        	choice = toupper(choice);
	}
if(score > 42) {
printf("\nBust\n");
system("pause");
return 0;
			}

}

printf("\nComputer's turn");


while(comscore < 32) {
	comrandnumber = rand()%21+1;
	comscore += comrandnumber;
	sleep(2);
	printf("\nYour number is: %d\n", comscore);
	sleep(2);
	printf("\nYour computer score so far is: %d\n", comscore);
}

if(score > comscore){
	printf("\nYou Win!\n");
	system("pause");
	return 0;
}

if(comscore > score){
	printf("\nComputer Wins!\n");
	system("pause");
	return 0;
}

system("pause");
return 0;
}
