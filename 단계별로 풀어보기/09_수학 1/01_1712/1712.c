#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	unsigned int non_chan, chan, price;
	
	scanf("%u %u %u", &non_chan, &chan, &price);
	if (price <= chan)
	{
		printf("-1");
	}
	else
	{
		printf("%u", non_chan / (price - chan) + 1);
	}
	// �� �븦 �� ������ ���� �� ��� ������ price - chan 
	return 0;
}
