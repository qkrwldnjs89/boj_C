#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int x;
	int i, sum_row = 0, row = 0, row_cnt;
	
	scanf("%d", &x);
	
	for (i = 1; sum_row < x; i++)
	{
		sum_row += i;
		row++;
	}
	
	row_cnt = row - (sum_row - x);
	// ���� ���° ������. 
	if (row % 2 == 1)
	{
		printf("%d/%d", row - (row_cnt - 1), row_cnt);
	}
	else
	{
		printf("%d/%d", row_cnt, row - (row_cnt - 1));
	}
	// Ȧ�� �ٰ� ¦�� ���� ���� ��ȭ�� �ٸ���. 
	return 0;
}
