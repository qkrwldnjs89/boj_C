#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int min_num(int kg)
{
	int tmp, num_3, num_5;
	
	tmp = kg;
			
	num_5 = kg / 5;
	for (; num_5 >= 0; num_5--)
	{
		kg = tmp;
		kg -= 5 * num_5;
		if (kg % 3 == 0)
		{
			num_3 = kg / 3;
			return (num_3 + num_5);
		}
	}
	return -1;
}
int main(void) 
{
	int kg;
	
	scanf("%d", &kg);
	
	printf("%d", min_num(kg));

	return 0;
}
