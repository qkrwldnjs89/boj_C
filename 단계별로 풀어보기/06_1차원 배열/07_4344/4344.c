#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int c;
	int i;
	
	scanf("%d", &c);
	
	for (i = 0; i < c; i++)
	{
		int n, goodstd = 0;
		int scr[1000] = {0}, sum = 0;
		double average = 0, percentage;
		int j;
		
		scanf("%d", &n);
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &scr[j]);
			sum += scr[j];
		}
		average = (double)sum / n;
		
		for (j = 0; j < n; j++)
		{
			goodstd = (scr[j] > average) ? goodstd + 1 : goodstd;
		}
		
		percentage = ((double)goodstd / n) * 100;
		
		
			
		printf("%.3f%%\n", percentage);
		// % �� �׳� ������ %% �� ����Ѵ�. 
		/*
		�ݿø��� �� ��,
		����� ���Ѵٸ�
		-> .�Ҽ������°�������ϴ�������f �� �ϸ� �ǰ� 
		���� ���� ���� �ݿø��� �Ѵٸ�
		-> <math.h> �� floorf, roundf, ceilf �� ����Ѵ�. 
		*/
	}
	return 0;
}
