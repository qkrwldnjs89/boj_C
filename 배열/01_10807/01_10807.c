#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, v, count = 0;
	int arr[100], i;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	scanf("%d", &v);
	
	for (i = 0; i < n; i++)
	{
		if (arr[i] == v)
			count++;
	}
	
	printf("%d", count);
	return 0;
}
