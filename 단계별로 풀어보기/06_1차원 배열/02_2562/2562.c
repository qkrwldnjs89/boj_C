#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int numArr[9], indx = 1, largest = 0;
	int i;
	
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &numArr[i]);
		
		if (numArr[i] > largest)
		{
			largest = numArr[i];
			indx = i + 1;
		}
	}
	
	
	printf("%d\n%d", largest, indx);
	return 0;
}
