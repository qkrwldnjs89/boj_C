#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n;
	int i;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		char oxArr[81];
		int scr = 0, scrSum = 0;
		int j = 0;
		scanf("%s", oxArr);
		
		while (oxArr[j] != '\0')
		{
			if (oxArr[j] == 'O')
			{
				scr++;
				scrSum += scr;
			}
			else
			{
				scr = 0;
			}			
			j++;
		}
				
		printf("%d\n", scrSum);
	}
	return 0;
}
