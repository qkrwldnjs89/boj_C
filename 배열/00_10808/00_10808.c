#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char wrd[100];
	int hist[26] = {0};
	int i = 0;
	
	scanf("%s", wrd);
	// printf("%bs", wrd);
	
	while (wrd[i] != '\0')
	{
		hist[wrd[i] - 'a'] += 1;
		i++;
	}
	
	for (i = 0; i < 26; i++)
	{
		if (i == 25)
		{
			printf("%d", hist[i]); break;
		}			
		printf("%d ", hist[i]);
	}	
	
	return 0;
}
