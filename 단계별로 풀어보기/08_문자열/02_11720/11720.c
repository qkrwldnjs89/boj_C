#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, sum = 0;
	char numStr[101];
	int i;
	scanf("%d", &n);
	scanf("%s", &numStr);
	for (i = 0; i < n; i++)
	{
		switch(numStr[i])
		{
			case '1': sum += 1;break;
			case '2': sum += 2;break;
			case '3': sum += 3;break;
			case '4': sum += 4;break;
			case '5': sum += 5;break;
			case '6': sum += 6;break;
			case '7': sum += 7;break;
			case '8': sum += 8;break;
			case '9': sum += 9;break;
		}
	}

	
	printf("%d", sum);
	return 0;
}
