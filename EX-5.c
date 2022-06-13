#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	float mean = 0;
	int frequency[10] = {0,0,0,0,0,0,0,0,0,0};
	int data[99] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9,
				 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8,
				 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9,
				 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};
				 
	for(int i = 0; i < 99; i++)
	{
		mean += data[i];
		frequency[data[i]]++;
	}
	
	mean = mean/99.0;
	
	printf("%.2f\n", mean);
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < frequency[i]; j++)
		{
			printf("=");
		}
		printf(" %d", i);
		printf("\n");
	}
}
