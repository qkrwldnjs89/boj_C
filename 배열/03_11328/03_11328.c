#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n;
	char str1[1000], str2[1000];
	int i, j;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		int i = 0, j = 0;
		bool tof = true;
		int ASCarr1[128] = {0}, ASCarr2[128] = {0}; 
		scanf("%s %s", str1, str2);
		
		
		if (strlen(str1) == strlen(str2))
		{
			while (str1[i] != '\0')
			{
				ASCarr1[str1[i]]++;
				i++;
			}
			while (str2[j] != '\0')
			{
				ASCarr2[str2[j]]++;
				j++;
			}
			for (i = 0; i < 128; i++)
			{
				if (ASCarr1[i] != ASCarr2[i])
				{
					tof = false; break;
				}			
			}
			
			if (tof == false)
				printf("Impossible\n");
			else
				printf("Possible\n");
			
		}
		else
			printf("Impossible\n");
	}
	return 0;
}
