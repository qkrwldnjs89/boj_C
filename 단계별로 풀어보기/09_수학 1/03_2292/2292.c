#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n;
	int cnt = 1, i = 1, j;
	bool tof = false;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("1");
	}
	else
	{
		while (tof == false)
		{
			j = i;
			i += (6 * (cnt));
			tof = ( (n > j) && (n <= i) );
			cnt++;
		}
		printf("%d", cnt);
	}
	
	return 0;
}
