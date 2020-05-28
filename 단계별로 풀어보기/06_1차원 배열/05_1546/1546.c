#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n;
	int scr[1000], largest = 0;
	double sum = 0, new_average;
	int i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &scr[i]);
		largest = (scr[i] > largest) ? scr[i] : largest;
	}
	
	for (i = 0; i < n; i++)
	{
		sum += (double)scr[i] / largest * 100;
		// 데이터 손실의 최소화. 
	}
	
	new_average = (double)sum / n;
	
	printf("%.15f", new_average);
	return 0;
}
