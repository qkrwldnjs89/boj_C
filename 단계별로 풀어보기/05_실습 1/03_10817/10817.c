#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is_second(int arr[], int size);
int main(void) 
{
	int num[3];
	int i;
	
	for (i = 0; i < 3; i++)
		scanf("%d", &num[i]);
	
	printf("%d", is_second(num, sizeof(num) / sizeof(int)));
	
	return 0;
}

int is_second(int arr[], int size)
{
	int i, j, is_second;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - (i + 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	return arr[size - 2];
}
