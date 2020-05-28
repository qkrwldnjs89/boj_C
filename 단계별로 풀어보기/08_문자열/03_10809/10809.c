#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int find_indx(char a, char arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == a)
			return i;
	}
	return -1;
}
int main(void) 
{
	int i;
	char Input_Alph[101];
	scanf("%s", Input_Alph);
	
	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%d ", find_indx(i, Input_Alph, strlen(Input_Alph)));
	}
	return 0;
}
