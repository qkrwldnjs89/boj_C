#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int timeCount(char alp)
{
	if (alp >= 'A' && alp <= 'C')
		return 3;
	else if (alp >= 'D' && alp <= 'F')
		return 4;
	else if (alp >= 'G' && alp <= 'I')
		return 5;
	else if (alp >= 'J' && alp <= 'L')
		return 6;
	else if (alp >= 'M' && alp <= 'O')
		return 7;
	else if (alp >= 'P' && alp <= 'S')
		return 8;
	else if (alp >= 'T' && alp <= 'V')
		return 9;
	else if (alp >= 'W' && alp <= 'Z')
		return 10;
}
int main(void)
{
	char dial[16];
	int time = 0;
	scanf("%s", dial);
	
	int i;
	for (i = 0; i < strlen(dial); i++)
	{
		time += timeCount(dial[i]);
	}
	printf("%d", time);
	return 0;
}
