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
		// % 를 그냥 쓰려면 %% 로 써야한다. 
		/*
		반올림을 할 때,
		출력을 원한다면
		-> .소수점몇번째까지원하는지숫자f 로 하면 되고 
		연산 등을 위해 반올림을 한다면
		-> <math.h> 의 floorf, roundf, ceilf 를 써야한다. 
		*/
	}
	return 0;
}
