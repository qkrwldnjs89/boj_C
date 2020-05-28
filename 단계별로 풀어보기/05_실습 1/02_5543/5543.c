#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int ham[3], bev[2];
	int cheap;
	int i, j;
	
	for (i = 0; i < 3; i++)
		scanf("%d", &ham[i]);
	for (i = 0; i < 2; i++)
		scanf("%d", &bev[i]);
		
	cheap = ham[0] + bev[0] - 50;

	for (i = 0; i < 3; i++)
	{
		for	(j = 0; j < 2; j++)
		{
			cheap = ((ham[i] + bev[j] - 50) < cheap) ? ham[i] + bev[j] - 50 : cheap;
		}
	}
	
	printf("%d", cheap);
	return 0;
}
