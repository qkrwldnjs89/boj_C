#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int WordCount(char input[], int size)
{
	int spcCnt = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		if(isblank(input[i]))
			spcCnt++;
	}
	if (isblank(input[0]))
		spcCnt--;
	if (isblank(input[size - 1]))
		spcCnt--;
	return (spcCnt + 1);
}
int main(void) 
{
	char str[1000000];
	scanf("%[^\n]s", str);
	printf("%d", WordCount(str, strlen(str)));
	return 0;
}
