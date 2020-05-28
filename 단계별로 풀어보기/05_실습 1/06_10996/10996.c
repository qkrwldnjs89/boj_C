#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n;
	int i, j;
	scanf("%d", &n);
	
	for (i = 1; i < n + 1; i++)
	{
		printf("*");
		
		for (j = 0; j < (n - 1) / 2; j++)
			printf(" *");
		printf("\n");
		
		for (j = 0; j < n / 2; j++)
			printf(" *");
		
		printf("\n");
	}
	return 0;
}
