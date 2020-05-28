#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int timeCount(char arr[], int size)
{
	int time = 0;
	int timelist[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10}; 
	int i;

	for (i = 0; i < size; i++)
	{
		time += timelist[arr[i] - 'A'];
	}
	
	return time;
}
int main(void)
{
	char dial[16];
	scanf("%s", dial);
	
	printf("%d", timeCount(dial, strlen(dial)));
	return 0;
}
