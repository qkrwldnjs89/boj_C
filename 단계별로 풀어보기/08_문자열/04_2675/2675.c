#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int t;
	int i;
	
	scanf("%d", &t);	
	for (i = 0; i < t; i++)
	{
		int r;
		int i = 0;
		char str[21];
		
		scanf("%d", &r);
		scanf("%s", str);
		while (str[i] != '\0')
		{
			int j;
			for (j = 0; j < r; j++)
				printf("%c", str[i]);
			i++;
		}
		printf("\n");
	}
	return 0;
}
