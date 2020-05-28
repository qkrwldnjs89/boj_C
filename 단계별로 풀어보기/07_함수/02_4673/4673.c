#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int d(int n)
{
	return n + (n % 10) + ((n / 10) % 10) + ((n / 100) % 10) + ((n / 1000) % 10) + (n / 10000);
}

int is_self(int n)
{
	int i;
	for (i = 1; i < n; i++)
	{
		if (d(i) == n)
			return 0;
	}
	return n;
}

void print_self(void)
{
	int i;
	for (i = 1; i <= 10000; i++)
	{
		if (is_self(i) != 0)
			printf("%d\n", is_self(i));
	}
}

int main(void) 
{
	print_self();
	return 0;
}
