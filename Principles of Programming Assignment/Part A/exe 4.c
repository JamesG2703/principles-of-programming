/*
Name: James
Date: 2019
Description: Exe 4, page: 4. This program reads a single word into a character array and then prints the word backwards.
*/
#include<stdio.h>
#include<string.h>
int main(void){
{
   char word[100], tmp;
   int length, a, b, i;

   printf("Please enter word : ");
   scanf("%s", word);
   length = strlen(word);

   a = 0;
   b = length-1;
    
for(i=a;i<b;i++)
       {
       tmp = word[i];
       word[i] = word[b];
       word[b] = tmp;
       b--;
   }
 
   printf("Your word printed backwards: %s\n\n", word);}
   system("Pause");
   return 0;
}
