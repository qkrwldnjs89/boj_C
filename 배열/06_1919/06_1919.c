#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char wrd1[1000], wrd2[1000];
	int ASCarr1[128] = {0}, ASCarr2[128] = {0};
	int delAna = 0;
	int i = 0, j = 0;
	scanf("%s %s", wrd1, wrd2);
	
	while (wrd1[i] != '\0')
	{
		ASCarr1[wrd1[i]]++;
		i++;
	}
	
	while (wrd2[j] != '\0')
	{
		ASCarr2[wrd2[j]]++;
		j++;
	}
	
	for (i = 0; i < 128; i++)
	{
		if (ASCarr1[i] > ASCarr2[i])
			delAna += (ASCarr1[i] - ASCarr2[i]);
		else
			delAna += (ASCarr2[i] - ASCarr1[i]);
	}
	printf("%d", delAna);
	return 0;
}
