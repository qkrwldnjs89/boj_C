#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int n;
	int frequency[10] = {0}, sets_69 = 0, largest = 0;
	int i;
	
	scanf("%d", &n);
	
	while (n != 0)
	{
		frequency[n % 10]++;
		n /= 10;
	}
	/*
	for (i = 0; i < 10; i++)
		printf("frequency[%d]: %d \n", i, frequency[i]);
	*/
	sets_69 = (frequency[6] + frequency[9] + 1) / 2;
	// printf("%d", sets_69);
	for (i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue;
		largest = (frequency[i] > largest) ? frequency[i] : largest;
	}
	
	largest = (sets_69 > largest) ? sets_69 : largest;
	
	if (largest == 0)
		printf("1");
	else
		printf("%d", largest);
		
	
	return 0;
}
