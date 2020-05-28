#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n;
	int tmp, cnt = 0;
	
	scanf("%d", &n);
	
	tmp = n;
	n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;
		cnt++; 
		
	while (tmp != n)
	{
		n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;
		cnt++;		
	}
	
	
	
	printf("%d", cnt);
	return 0;
}
