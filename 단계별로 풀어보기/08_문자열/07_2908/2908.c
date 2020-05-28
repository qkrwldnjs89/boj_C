#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ftSwap(char arr[])
{
	char tmp;
	tmp = arr[0];
	arr[0] = arr[2];
	arr[2] = tmp;
}
int main(void) 
{
	char a[4], b[4];
	int i;
	scanf("%s %s", a, b);
	
	ftSwap(a); ftSwap(b);
	for (i = 0; i < 3; i++)
	{
		if (a[i] != b[i])
		{
			if (a[i] > b[i])
			{
				printf("%s", a);
				break;
			}
			else
			{
				printf("%s", b);
				break;
			}
		}
	}
	
	
	return 0;
}
