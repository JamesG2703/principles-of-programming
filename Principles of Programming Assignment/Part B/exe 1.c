/*
Name: James
Date: 2019
Description: This program calculates the grade using use if-else if.
*/
#include<stdio.h>
int main(void)
{
    int x, y, pro;
    printf("Enter exam mark: ");
    scanf("%d",&x);
    printf("Enter assignment mark: ");
    scanf("%d",&y);
    pro = x + y;
    if(pro<0 || pro>150)
    {
        printf("Wrong Entry\n");
    }
    else if(pro<100)
    {
        printf("Your overall grade is: F\n");
    }
    else if(pro>=100 && pro<110)
    {
        printf("Your overall grade is: D\n");
    }
    else if(pro>=110 && pro<120)
    {
        printf("Your overall grade is: C\n");
    }
    else if(pro>=120 && pro<130)
    {
        printf("Your overall grade is: B\n");
    }
    else if(pro>=130 && pro<140)
    {
        printf("Your overall grade is: A\n");
    }
    else
    {
        printf("Your overall grade is: A\n");
    }
    system("pause");
	return 0;
}
