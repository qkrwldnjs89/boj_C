#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int frequency[10] = {0};
	int a, b, c, mul;
	int i;
	
	scanf("%d %d %d", &a, &b, &c);
	mul = a * b * c;
	// printf("%d \n", mul);
	
	while (mul > 0)
	{
		frequency[mul % 10]++;
		mul /= 10;
	}
	
	
	for (i = 0; i < 10; i++)
		printf("%d\n", frequency[i]);
	return 0;
}
