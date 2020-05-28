#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool is_group(char arr[], int size)
{
	int alpASC[128] = {0};
	int i;
	alpASC[arr[0]]++;
	for (i = 1; i < size; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			if (alpASC[arr[i]] == 0)
			{
				alpASC[arr[i]]++;
			}
			else
			{
				return false;
			}
		}				
	}
	return true;
}

int main(void) 
{
	int n, cnt = 0;
	int i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		char wrd[101];
		scanf("%s", wrd);
		if (is_group(wrd, strlen(wrd)))
			cnt++;	
	}
	
	printf("%d", cnt);
	return 0;
}
