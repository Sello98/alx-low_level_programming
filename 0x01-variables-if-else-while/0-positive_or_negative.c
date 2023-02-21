#include <stdlib.h>
#include <stdtime.h>
#include <stdio.h>
/**
 * main- main block
 * Description: Get a random number and print the number
 * and if is positive, negative or zero
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n= rand()-RAND-MAX/2;
	if(n<0)
		printf("%i is positive\n",n);
	else if (n<0)
		printf("%i is negative\n",n);
	Return (0);
}
  

