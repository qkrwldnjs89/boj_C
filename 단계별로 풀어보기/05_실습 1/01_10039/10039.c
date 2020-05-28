#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int scr, sum = 0, i;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &scr);
		scr = (scr >= 40) ? scr : 40;
		sum += scr;
	}
	printf("%d", sum / 5);
	return 0;
}
