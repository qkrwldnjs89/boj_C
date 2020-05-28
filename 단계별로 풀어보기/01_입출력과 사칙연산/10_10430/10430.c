#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d\n%d\n", (a + b) % c, ((a % c) + (b % c)) % c);
	printf("%d\n%d", (a * b) % c, ((a % c) * (b % c)) % c);
	return 0;
}
