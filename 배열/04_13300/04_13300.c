#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, k, s, y, roomNum = 0;
	// n -> �л� ��, k -> �� �� �ִ� �ο�, s -> ����, y -> �г�
	int sy[2][6] = {0};
	int i, j;
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &s, &y);
		// s �� 0 ���� 1 ����  
		sy[s][y - 1]++;
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (sy[i][j] % k == 0)
				roomNum += (sy[i][j] / k);
			else
				roomNum += ((sy[i][j] / k) + 1);
		}
	}
	
	printf("%d", roomNum);
	return 0;
} 
