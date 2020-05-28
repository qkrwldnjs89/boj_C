#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num;
	int remDif[42] = {0}, cnt = 0;
	int i;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		remDif[num % 42]++;
	}
	
	for (i = 0; i < 42; i++)
	{
		if (remDif[i] != 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
