#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define SIZE 1000000
int main(void) 
{
	int n;
	int numArr[SIZE], largest = -1000001, smallest = 1000001;
	int i;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &numArr[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		largest = (numArr[i] > largest) ? numArr[i] : largest;
		smallest = (numArr[i] < smallest) ? numArr[i] : smallest;
	}
	
	printf("%d %d", smallest, largest);
	return 0;
}
