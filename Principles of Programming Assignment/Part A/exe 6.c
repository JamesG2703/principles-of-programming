/*
Name: James
Date: 2019
Description: Exe 6, Page: 4. This program shows a basic output of two dice that were thrown 300 times.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 300

double rand_double();

int main() {
   int d[13];
   int i, k, roll1, roll2, score;
   srand((long)time(NULL));
   for (i = 1; i < 13; i++) d[i] = 0;
   for (k = 0; k < N; k++) {
      roll1 = (6*rand_double() + 1);
      roll2 = (6*rand_double() + 1);
      score = roll1 + roll2;
      d[score-1]++;
   }
   printf("Rolls: %i\n", N);
   for (i = 1; i < 13; i++){
    printf("%2i:%7i", i, d[i]);
	printf("\n");
}
   system("Pause");
   return 0;
}

double rand_double() {
   return rand()/(double)RAND_MAX;
}
