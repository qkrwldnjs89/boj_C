#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, n_sub, spc = 0, cnt = 0;
	int i, j, k;
	scanf("%d", &n);
	n_sub = n;
	for (i = 0; i < 2 * n - 1; i++)
	{
		for (j = 0; j < spc; j++)
			printf(" ");
		
		for (k = 0; k < 2 * n_sub - 1; k++)
			printf("*");
		printf("\n");
		
		if (cnt < n - 1)
		{
			spc++; n_sub--;
		}
		else
		{
			spc--; n_sub++;
		}	
		
		
		cnt++;
	}
	return 0; //-3-¢¾by Çý¸° 
}
