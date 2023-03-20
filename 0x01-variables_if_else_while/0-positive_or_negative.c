#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main: entry point
 * return =0 succes
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if  (n>0)
		printf("%d is positive,n");
	if else (n==o)
		printf("%d is zero,n");
	if else (n<0)
		printf("%d is negative,n");
	printf("\n");	
	return (0);
}
