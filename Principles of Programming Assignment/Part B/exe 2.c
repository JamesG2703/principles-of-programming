/*
Name: James
Date: 2019
Description: This program calculates the grade using switch.
*/
#include<stdio.h>
int main(void)
{
    int exam, assignment;
    char grade = ' ';
    printf("\nPlease enter exam mark:\t");
    scanf("%d", &exam);
    printf("\nPlease enter assignment mark:\t");
    scanf("%d", &assignment);
    switch (exam)
    {
    	case 39:grade='F';break;
    	case 40:case 41:case 42:case 43:case 44: case 45:case 46: case 47: case 48: case 49:grade='D';break;
    	case 50:case 51:case 52:case 53:case 54: case 55:case 56: case 57: case 58: case 59:grade='C';break;
    	case 60:case 61:case 62:case 63:case 64: case 65:case 66: case 67: case 68: case 69:grade='B';break;
    	case 70:grade='A';break;
    	
		default: printf("Invalid total\n");
	}
	printf("\nexam: %d\nassignment: %d\ngrade: %c\n", exam, assignment, grade);
    
    system("pause");
	return 0;
}
