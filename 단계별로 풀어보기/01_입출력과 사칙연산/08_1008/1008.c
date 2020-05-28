#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.15f", a / b);
	return 0;
}
