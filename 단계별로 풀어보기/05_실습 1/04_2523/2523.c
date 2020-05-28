#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, n_sub = 1, cnt = 0;
	scanf("%d", &n);
	
	while (n_sub != 0)
	{
		int i;
		
		for (i = 0; i < n_sub; i++)
		{
			printf("*");
		}
		printf("\n");
		
		if (cnt < n - 1)
		{
			n_sub++; cnt++;
		}
		else
		{
			n_sub--; cnt++;
		}
	}
	return 0;
}
