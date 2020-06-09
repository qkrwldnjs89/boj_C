#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int resCnt(int a, int b)
{
	int arr[15][15] = {0};
	int i, j;
	
	for (i = 0; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			if (i == 0 || j == 1)
				arr[i][j] = j;
			else
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	
	return arr[a][b];
}
int main(void) 
{
	int t, k, n;
	// k �� ��, n �� ȣ�� �̰� �� �� 1 <= k,n <= 14 �̴�. 
	int i, j;
	scanf("%d", &t);
	
	 
	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", resCnt(k, n));
	}
	return 0;
}
