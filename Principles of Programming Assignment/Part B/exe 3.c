/*
Name: James
Date: 2019
Description: This program calculates the grade using char calcGrade(int exam, int assign);.
*/
#include<stdio.h>

char calcGrade(int exam, int assign);
int main(void)
{
    int exam, assign;
    printf("Enter exam mark: ");
    scanf("%d", &exam);
    printf("Enter assignment mark: ");
    scanf("%d", &assign);
    printf("The grade is: %c\n", calcGrade(exam, assign));
    system("pause");
    return 0;
}
char calcGrade(int exam, int assign)
{
	int pro;
    char ans;
    pro = exam + assign;
    
	if(pro<=100)
    {
        ans = 'F';
    }
    else if(pro>=100 && pro<110)
    {
        ans = 'D';
    }
    else if(pro>=110 && pro<120)
    {
        ans = 'C';
    }
    else if(pro>=120 && pro<130)
    {
        ans = 'B';
    }
    else if(pro>=130 && pro<140)
    {
        ans = 'A';
    }
    else{
    	ans = 'A';
	}
    return ans;
}
