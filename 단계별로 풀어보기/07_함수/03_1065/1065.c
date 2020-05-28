#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool is_han(int n)
{
	bool tof = true;
	if (n > 0 && n < 10)
	{
		return tof;
	}
	else if (n >= 10 && n < 100)
	{
		return tof;
	}
	else if (n >= 100 && n < 1000)
	{
		tof = ( (n / 10) % 10 - n % 10 == (n / 100) % 10 - (n / 10) % 10 );
		return tof;
	}
	else
	{
		return false;
	}
}

int cnt_han(int n)
{
	int cnt = 0;
	int i;
	
	for (i = 1; i <= n; i++)
	{
		if (is_han(i))
			cnt++;
	}
	return cnt;
}

int main(void) 
{
	int n;
	scanf("%d", &n);
	printf("%d", cnt_han(n));
	
	return 0;
}
