#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a, b, v, dayCount = 0;
	scanf("%d %d %d", &a, &b, &v);
	
	if (v == a)
	{
		printf("1");
	}
	else
	{
		// a��ŭ�� �Ÿ��� �ѹ��� �� �� �����Ƿ� ���� ����.		
		if ( (v - a) % (a - b) == 0 )
			dayCount = (v - a) / (a - b);
		else
			dayCount = (v - a) / (a - b) + 1;
		dayCount += 1;
		printf("%d", dayCount);
	}
	
	return 0;
}


