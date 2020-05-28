#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cnt_croAlp(char arr[], int size)
{
	int cnt = 0;
	int i;
	
	for (i = 0; i < size; i++)
	{
		switch (arr[i])
		{
			case 'c':
				if (arr[i + 1] == '=')
					i++;
				else if (arr[i + 1] == '-')
					i++;
				cnt++;break;
			case 'd':
				if (arr[i + 1] == '-')
					i++;
				else if (arr[i + 1] == 'z' && arr[i + 2] == '=')
					i += 2;
				cnt++;break;
			case 'l':
			case 'n':
				if (arr[i + 1] == 'j')
					i++;
				cnt++;break;
			case 's':
			case 'z':
				if (arr[i + 1] == '=')
					i++;
				cnt++;break;
			default:
				cnt++;
		}
	}
	
	return cnt;
}
int main(void) 
{
	char croAlp[101];
	scanf("%s", croAlp);
	printf("%d", cnt_croAlp(croAlp, strlen(croAlp)));
	return 0;
}
