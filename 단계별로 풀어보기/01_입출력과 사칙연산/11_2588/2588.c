#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n1, n2;
	int org_n2;
	scanf("%d %d", &n1, &n2);
	org_n2 = n2;
	while (n2 != 0)
	{
		printf("%d\n", n1 * (n2 % 10));
		n2 /= 10;
	}
	printf("%d", n1 * org_n2);
	return 0;
}
