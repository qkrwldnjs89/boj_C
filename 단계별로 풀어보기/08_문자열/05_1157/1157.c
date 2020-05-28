#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char wrd[1000000];
	int wrdASC[128] = {0}, largest = -1;
	int i, cnt = 0, idx;
	
	scanf("%s", wrd);
	
	i = 0;
	while (wrd[i] != '\0')
	{
		if (wrd[i] >= 'a' && wrd[i] <= 'z')
			wrdASC[wrd[i] - 32]++;
		else
			wrdASC[wrd[i]]++;
		i++;
	}
	
	for (i = 0; i < 128; i++)
	{
		if (wrdASC[i] > largest)
		{
			largest = wrdASC[i];
			idx = i;
		}
	}
	
	for (i = 0; i < 128; i++)
	{
		if (largest == wrdASC[i])
			cnt++;
	}
	if (cnt == 1)
		printf("%c", idx);
	else
		printf("?");
	return 0;
}
